grammar SqlQuery;

simple_select
    : SELECT opt_distinct? target_list from_clause?
    ;

opt_distinct
    : DISTINCT
    | ALL
    ;

target_list
    : target_el (',' target_el)*
    ;

target_el
    : name (AS? name)?
    | '*'
    ;

from_clause
    : FROM from_list
    ;

from_list
    : table_ref (',' table_ref)*
    ;

table_ref
    : name (AS? name)?
    ;