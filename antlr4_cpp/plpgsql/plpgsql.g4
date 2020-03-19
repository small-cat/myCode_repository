parser grammar plpgsql;

pl_function
    : (FUNCTION | TRIGGER) comp_option* pl_block SEMICOLON?
    ;

comp_option
    : OPTION DUMP
    ;

pl_block
    : decl_sect BEGIN_P  proc_stmt* exception_sect? END_P opt_label?
    ;

decl_sect
    : opt_block_label
    | opt_block_label? DECLARE decl_stmt*
    ;

decl_stmt
    : '<' '<' opt_lblname '>' '>'
    | DECLARE
    | decl_statement
    ;

decl_statement
    : decl_varname decl_const typename_pg decl_notnull decl_defval
    | decl_varname ALIAS FOR WORD SEMICOLON
    | RENAME decl_renname TO decl_renname SEMICOLON
    | decl_varname opt_scrollable? CURSOR decl_cursor_args? decl_is_for
    ;

opt_scrollable
    : NOSCROLL
    | SCROLL
    ;

decl_cursor_args
    : LEFT_PAREN decl_cursor_arglist RIGHT_PAREN
    ;

decl_cursor_arglist
    : decl_cursor_arg (COMMA decl_cursor_arg)*				
    ;

decl_cursor_arg
    : decl_varname typename_pg
    ;

decl_is_for
    : IS 
    | FOR
    ;

decl_varname
    : WORD
    ;

decl_renname
    : WORD
    ;

decl_const
    : CONSTANT
    ;

decl_notnull
    : NOT NULL_P
    ;

decl_defval
    : ';'
    | decl_defkey
    ;

decl_defkey
    : ':'? '='
    | DEFAULT
    ;

proc_stmt
    : pl_block SEMICOLON
    | stmt_assign
    | stmt_if
    | stmt_loop
    | stmt_while
    | stmt_for
    | stmt_exit
    | stmt_return
    | stmt_raise
    | stmt_execsql
    | stmt_dynexecute
    | stmt_perform
    | stmt_getdiag
    | stmt_open
    | stmt_fetch
    | stmt_move
    | stmt_close
    | NULL_P SEMICOLON
    ;

stmt_perform
    : PERFORM  
    ;

stmt_assign
    : assign_var  assign_op 
    ;

assign_op
    : COLON? EQUAL_OP
    ;

stmt_getdiag
    : GET DIAGNOSTICS  getdiag_list SEMICOLON
    ;

getdiag_list
    : getdiag_list_item (COMMA getdiag_list_item)*
    ;

getdiag_list_item
    : SCALAR assign_op getdiag_kind
    ;

getdiag_kind
    : ROW_COUNT
    | RESULT_OID
    ;

assign_var
    : SCALAR
    | ROW
    | RECORD
    | assign_var '['
    ;

stmt_if
    : IF  proc_stmt* stmt_else K_END K_IF SEMICOLON
    ;

stmt_else
    : ELSEIF  proc_stmt* stmt_else
    | ELSE proc_stmt*
    ;

stmt_loop
    : opt_block_label? LOOP  loop_body
    ;

stmt_while
    : opt_block_label? WHILE  loop_body
    ;

stmt_for
    : opt_block_label? FOR for_control loop_body
    ;

for_control
    :  for_variable IN_P
    ;

/*
 * Processing the for_variable is tricky because we don't yet know if the
 * FOR is an integer FOR loop or a loop over query results.  In the former
 * case, the variable is just a name that we must instantiate as a loop
 * local variable, regardless of any other definition it might have.
 * Therefore, we always save the actual identifier into $$.name where it
 * can be used for that case.  We also save the outer-variable definition,
 * if any, because that's what we need for the loop-over-query case.  Note
 * that we must NOT apply check_assignable() or any other semantic check
 * until we know what's what.
 *
 * However, if we see a comma-separated list of names, we know that it
 * can't be an integer FOR loop and so it's OK to check the variables
 * immediately.  In particular, for T_WORD followed by comma, we should
 * complain that the name is not known rather than say it's a syntax error.
 * Note that the non-error result of this case sets *both* $$.scalar and
 * $$.row; see the for_control production.
 */
for_variable
    : SCALAR
    | WORD
    | RECORD
    | ROW
    ;

stmt_exit
    : exit_type  opt_label? opt_exitcond
    ;

exit_type
    : EXIT
    | CONTINUE
    ;

stmt_return
    : RETURN 
    ;

stmt_raise
    : RAISE  raise_level raise_msg
    ;

raise_msg
    : STRING
    ;

raise_level
    : EXCEPTION
    | WARNING
    | NOTICE
    | INFO
    | LOG_P
    | DEBUG
    ;

loop_body
    : proc_stmt* END_P LOOP opt_label? SEMICOLON
    ;

stmt_execsql
    : execsql_start 
    ;

/* T_WORD+T_ERROR match any otherwise-unrecognized starting keyword */
execsql_start
    : INSERT
    | WORD
    | ERROR
    ;

stmt_dynexecute
    : EXECUTE 
    ;


stmt_open
    : OPEN SCALAR
    ;

stmt_fetch
    : FETCH SCALAR INTO
    ;
				
stmt_move
    : MOVE SCALAR SEMICOLON
    ;

stmt_close
    : CLOSE SCALAR SEMICOLON
    ;

exception_sect
    : EXCEPTION proc_exception*
    ;

proc_exception
    : WHEN proc_conditions THEN proc_stmt*
    ;

proc_conditions
    : opt_lblname (OR opt_lblname)*
    ;

opt_block_label
    : '<' '<' opt_lblname '>' '>'
    ;

/*
 * need all the options because scanner will have tried to resolve as variable
 */
opt_label
    : WORD
    | SCALAR
    | RECORD
    | ROW
    ;

opt_exitcond
    : SEMICOLON
    | WHEN
    ;

opt_lblname
    : WORD
    ;
