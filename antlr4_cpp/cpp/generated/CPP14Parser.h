
// Generated from CPP14.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CPP14Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, MultiLineMacro = 7, 
    Directive = 8, Alignas = 9, Alignof = 10, Asm = 11, Auto = 12, Bool = 13, 
    Break = 14, Case = 15, Catch = 16, Char = 17, Char16 = 18, Char32 = 19, 
    Class = 20, Const = 21, Constexpr = 22, Const_cast = 23, Continue = 24, 
    Decltype = 25, Default = 26, Delete = 27, Do = 28, Double = 29, Dynamic_cast = 30, 
    Else = 31, Enum = 32, Explicit = 33, Export = 34, Extern = 35, False = 36, 
    Final = 37, Float = 38, For = 39, Friend = 40, Goto = 41, If = 42, Inline = 43, 
    Int = 44, Long = 45, Mutable = 46, Namespace = 47, New = 48, Noexcept = 49, 
    Nullptr = 50, Operator = 51, Override = 52, Private = 53, Protected = 54, 
    Public = 55, Register = 56, Reinterpret_cast = 57, Return = 58, Short = 59, 
    Signed = 60, Sizeof = 61, Static = 62, Static_assert = 63, Static_cast = 64, 
    Struct = 65, Switch = 66, Template = 67, This = 68, Thread_local = 69, 
    Throw = 70, True = 71, Try = 72, Typedef = 73, Typeid_ = 74, Typename_ = 75, 
    Union = 76, Unsigned = 77, Using = 78, Virtual = 79, Void = 80, Volatile = 81, 
    Wchar = 82, While = 83, LeftParen = 84, RightParen = 85, LeftBracket = 86, 
    RightBracket = 87, LeftBrace = 88, RightBrace = 89, Plus = 90, Minus = 91, 
    Star = 92, Div = 93, Mod = 94, Caret = 95, And = 96, Or = 97, Tilde = 98, 
    Not = 99, Assign = 100, Less = 101, Greater = 102, PlusAssign = 103, 
    MinusAssign = 104, StarAssign = 105, DivAssign = 106, ModAssign = 107, 
    XorAssign = 108, AndAssign = 109, OrAssign = 110, LeftShift = 111, RightShift = 112, 
    LeftShiftAssign = 113, RightShiftAssign = 114, Equal = 115, NotEqual = 116, 
    LessEqual = 117, GreaterEqual = 118, AndAnd = 119, OrOr = 120, PlusPlus = 121, 
    MinusMinus = 122, Comma = 123, ArrowStar = 124, Arrow = 125, Question = 126, 
    Colon = 127, Doublecolon = 128, Semi = 129, Dot = 130, DotStar = 131, 
    Ellipsis = 132, Identifier = 133, Integerliteral = 134, Decimalliteral = 135, 
    Octalliteral = 136, Hexadecimalliteral = 137, Binaryliteral = 138, Integersuffix = 139, 
    Characterliteral = 140, Floatingliteral = 141, Stringliteral = 142, 
    Userdefinedintegerliteral = 143, Userdefinedfloatingliteral = 144, Userdefinedstringliteral = 145, 
    Userdefinedcharacterliteral = 146, Whitespace = 147, Newline = 148, 
    BlockComment = 149, LineComment = 150
  };

  enum {
    RuleTranslationunit = 0, RulePrimaryexpression = 1, RuleIdexpression = 2, 
    RuleUnqualifiedid = 3, RuleQualifiedid = 4, RuleNestednamespecifier = 5, 
    RuleLambdaexpression = 6, RuleLambdaintroducer = 7, RuleLambdacapture = 8, 
    RuleCapturedefault = 9, RuleCapturelist = 10, RuleCapture = 11, RuleSimplecapture = 12, 
    RuleInitcapture = 13, RuleLambdadeclarator = 14, RulePostfixexpression = 15, 
    RuleTypeidofexpr = 16, RuleTypeidofthetypeid = 17, RuleExpressionlist = 18, 
    RulePseudodestructorname = 19, RuleUnaryexpression = 20, RuleUnaryoperator = 21, 
    RuleNewexpression = 22, RuleNewplacement = 23, RuleNewtypeid = 24, RuleNewdeclarator = 25, 
    RuleNoptrnewdeclarator = 26, RuleNewinitializer = 27, RuleDeleteexpression = 28, 
    RuleNoexceptexpression = 29, RuleCastexpression = 30, RulePmexpression = 31, 
    RuleMultiplicativeexpression = 32, RuleAdditiveexpression = 33, RuleShiftexpression = 34, 
    RuleShiftoperator = 35, RuleRelationalexpression = 36, RuleEqualityexpression = 37, 
    RuleAndexpression = 38, RuleExclusiveorexpression = 39, RuleInclusiveorexpression = 40, 
    RuleLogicalandexpression = 41, RuleLogicalorexpression = 42, RuleConditionalexpression = 43, 
    RuleAssignmentexpression = 44, RuleAssignmentoperator = 45, RuleExpression = 46, 
    RuleConstantexpression = 47, RuleStatement = 48, RuleLabeledstatement = 49, 
    RuleExpressionstatement = 50, RuleCompoundstatement = 51, RuleStatementseq = 52, 
    RuleSelectionstatement = 53, RuleCondition = 54, RuleIterationstatement = 55, 
    RuleForinitstatement = 56, RuleForrangedeclaration = 57, RuleForrangeinitializer = 58, 
    RuleJumpstatement = 59, RuleDeclarationstatement = 60, RuleDeclarationseq = 61, 
    RuleDeclaration = 62, RuleBlockdeclaration = 63, RuleAliasdeclaration = 64, 
    RuleSimpledeclaration = 65, RuleStatic_assertdeclaration = 66, RuleEmptydeclaration = 67, 
    RuleAttributedeclaration = 68, RuleDeclspecifier = 69, RuleDeclspecifierseq = 70, 
    RuleStorageclassspecifier = 71, RuleFunctionspecifier = 72, RuleTypedefname = 73, 
    RuleTypespecifier = 74, RuleTrailingtypespecifier = 75, RuleTypespecifierseq = 76, 
    RuleTrailingtypespecifierseq = 77, RuleSimpletypespecifier = 78, RuleThetypename = 79, 
    RuleDecltypespecifier = 80, RuleElaboratedtypespecifier = 81, RuleEnumname = 82, 
    RuleEnumspecifier = 83, RuleEnumhead = 84, RuleOpaqueenumdeclaration = 85, 
    RuleEnumkey = 86, RuleEnumbase = 87, RuleEnumeratorlist = 88, RuleEnumeratordefinition = 89, 
    RuleEnumerator = 90, RuleNamespacename = 91, RuleOriginalnamespacename = 92, 
    RuleNamespacedefinition = 93, RuleNamednamespacedefinition = 94, RuleOriginalnamespacedefinition = 95, 
    RuleExtensionnamespacedefinition = 96, RuleUnnamednamespacedefinition = 97, 
    RuleNamespacebody = 98, RuleNamespacealias = 99, RuleNamespacealiasdefinition = 100, 
    RuleQualifiednamespacespecifier = 101, RuleUsingdeclaration = 102, RuleUsingdirective = 103, 
    RuleAsmdefinition = 104, RuleLinkagespecification = 105, RuleAttributespecifierseq = 106, 
    RuleAttributespecifier = 107, RuleAlignmentspecifier = 108, RuleAttributelist = 109, 
    RuleAttribute = 110, RuleAttributetoken = 111, RuleAttributescopedtoken = 112, 
    RuleAttributenamespace = 113, RuleAttributeargumentclause = 114, RuleBalancedtokenseq = 115, 
    RuleBalancedtoken = 116, RuleInitdeclaratorlist = 117, RuleInitdeclarator = 118, 
    RuleDeclarator = 119, RulePtrdeclarator = 120, RuleNoptrdeclarator = 121, 
    RuleParametersandqualifiers = 122, RuleTrailingreturntype = 123, RulePtroperator = 124, 
    RuleCvqualifierseq = 125, RuleCvqualifier = 126, RuleRefqualifier = 127, 
    RuleDeclaratorid = 128, RuleThetypeid = 129, RuleAbstractdeclarator = 130, 
    RulePtrabstractdeclarator = 131, RuleNoptrabstractdeclarator = 132, 
    RuleAbstractpackdeclarator = 133, RuleNoptrabstractpackdeclarator = 134, 
    RuleParameterdeclarationclause = 135, RuleParameterdeclarationlist = 136, 
    RuleParameterdeclaration = 137, RuleFunctiondefinition = 138, RuleFunctionbody = 139, 
    RuleInitializer = 140, RuleBraceorequalinitializer = 141, RuleInitializerclause = 142, 
    RuleInitializerlist = 143, RuleBracedinitlist = 144, RuleClassname = 145, 
    RuleClassspecifier = 146, RuleClasshead = 147, RuleClassheadname = 148, 
    RuleClassvirtspecifier = 149, RuleClasskey = 150, RuleMemberspecification = 151, 
    RuleMemberdeclaration = 152, RuleMemberdeclaratorlist = 153, RuleMemberdeclarator = 154, 
    RuleVirtspecifierseq = 155, RuleVirtspecifier = 156, RulePurespecifier = 157, 
    RuleBaseclause = 158, RuleBasespecifierlist = 159, RuleBasespecifier = 160, 
    RuleClassordecltype = 161, RuleBasetypespecifier = 162, RuleAccessspecifier = 163, 
    RuleConversionfunctionid = 164, RuleConversiontypeid = 165, RuleConversiondeclarator = 166, 
    RuleCtorinitializer = 167, RuleMeminitializerlist = 168, RuleMeminitializer = 169, 
    RuleMeminitializerid = 170, RuleOperatorfunctionid = 171, RuleLiteraloperatorid = 172, 
    RuleTemplatedeclaration = 173, RuleTemplateparameterlist = 174, RuleTemplateparameter = 175, 
    RuleTypeparameter = 176, RuleSimpletemplateid = 177, RuleTemplateid = 178, 
    RuleTemplatename = 179, RuleTemplateargumentlist = 180, RuleTemplateargument = 181, 
    RuleTypenamespecifier = 182, RuleExplicitinstantiation = 183, RuleExplicitspecialization = 184, 
    RuleTryblock = 185, RuleFunctiontryblock = 186, RuleHandlerseq = 187, 
    RuleHandler = 188, RuleExceptiondeclaration = 189, RuleThrowexpression = 190, 
    RuleExceptionspecification = 191, RuleDynamicexceptionspecification = 192, 
    RuleTypeidlist = 193, RuleNoexceptspecification = 194, RuleTheoperator = 195, 
    RuleLiteral = 196, RuleBooleanliteral = 197, RulePointerliteral = 198, 
    RuleUserdefinedliteral = 199
  };

  CPP14Parser(antlr4::TokenStream *input);
  ~CPP14Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TranslationunitContext;
  class PrimaryexpressionContext;
  class IdexpressionContext;
  class UnqualifiedidContext;
  class QualifiedidContext;
  class NestednamespecifierContext;
  class LambdaexpressionContext;
  class LambdaintroducerContext;
  class LambdacaptureContext;
  class CapturedefaultContext;
  class CapturelistContext;
  class CaptureContext;
  class SimplecaptureContext;
  class InitcaptureContext;
  class LambdadeclaratorContext;
  class PostfixexpressionContext;
  class TypeidofexprContext;
  class TypeidofthetypeidContext;
  class ExpressionlistContext;
  class PseudodestructornameContext;
  class UnaryexpressionContext;
  class UnaryoperatorContext;
  class NewexpressionContext;
  class NewplacementContext;
  class NewtypeidContext;
  class NewdeclaratorContext;
  class NoptrnewdeclaratorContext;
  class NewinitializerContext;
  class DeleteexpressionContext;
  class NoexceptexpressionContext;
  class CastexpressionContext;
  class PmexpressionContext;
  class MultiplicativeexpressionContext;
  class AdditiveexpressionContext;
  class ShiftexpressionContext;
  class ShiftoperatorContext;
  class RelationalexpressionContext;
  class EqualityexpressionContext;
  class AndexpressionContext;
  class ExclusiveorexpressionContext;
  class InclusiveorexpressionContext;
  class LogicalandexpressionContext;
  class LogicalorexpressionContext;
  class ConditionalexpressionContext;
  class AssignmentexpressionContext;
  class AssignmentoperatorContext;
  class ExpressionContext;
  class ConstantexpressionContext;
  class StatementContext;
  class LabeledstatementContext;
  class ExpressionstatementContext;
  class CompoundstatementContext;
  class StatementseqContext;
  class SelectionstatementContext;
  class ConditionContext;
  class IterationstatementContext;
  class ForinitstatementContext;
  class ForrangedeclarationContext;
  class ForrangeinitializerContext;
  class JumpstatementContext;
  class DeclarationstatementContext;
  class DeclarationseqContext;
  class DeclarationContext;
  class BlockdeclarationContext;
  class AliasdeclarationContext;
  class SimpledeclarationContext;
  class Static_assertdeclarationContext;
  class EmptydeclarationContext;
  class AttributedeclarationContext;
  class DeclspecifierContext;
  class DeclspecifierseqContext;
  class StorageclassspecifierContext;
  class FunctionspecifierContext;
  class TypedefnameContext;
  class TypespecifierContext;
  class TrailingtypespecifierContext;
  class TypespecifierseqContext;
  class TrailingtypespecifierseqContext;
  class SimpletypespecifierContext;
  class ThetypenameContext;
  class DecltypespecifierContext;
  class ElaboratedtypespecifierContext;
  class EnumnameContext;
  class EnumspecifierContext;
  class EnumheadContext;
  class OpaqueenumdeclarationContext;
  class EnumkeyContext;
  class EnumbaseContext;
  class EnumeratorlistContext;
  class EnumeratordefinitionContext;
  class EnumeratorContext;
  class NamespacenameContext;
  class OriginalnamespacenameContext;
  class NamespacedefinitionContext;
  class NamednamespacedefinitionContext;
  class OriginalnamespacedefinitionContext;
  class ExtensionnamespacedefinitionContext;
  class UnnamednamespacedefinitionContext;
  class NamespacebodyContext;
  class NamespacealiasContext;
  class NamespacealiasdefinitionContext;
  class QualifiednamespacespecifierContext;
  class UsingdeclarationContext;
  class UsingdirectiveContext;
  class AsmdefinitionContext;
  class LinkagespecificationContext;
  class AttributespecifierseqContext;
  class AttributespecifierContext;
  class AlignmentspecifierContext;
  class AttributelistContext;
  class AttributeContext;
  class AttributetokenContext;
  class AttributescopedtokenContext;
  class AttributenamespaceContext;
  class AttributeargumentclauseContext;
  class BalancedtokenseqContext;
  class BalancedtokenContext;
  class InitdeclaratorlistContext;
  class InitdeclaratorContext;
  class DeclaratorContext;
  class PtrdeclaratorContext;
  class NoptrdeclaratorContext;
  class ParametersandqualifiersContext;
  class TrailingreturntypeContext;
  class PtroperatorContext;
  class CvqualifierseqContext;
  class CvqualifierContext;
  class RefqualifierContext;
  class DeclaratoridContext;
  class ThetypeidContext;
  class AbstractdeclaratorContext;
  class PtrabstractdeclaratorContext;
  class NoptrabstractdeclaratorContext;
  class AbstractpackdeclaratorContext;
  class NoptrabstractpackdeclaratorContext;
  class ParameterdeclarationclauseContext;
  class ParameterdeclarationlistContext;
  class ParameterdeclarationContext;
  class FunctiondefinitionContext;
  class FunctionbodyContext;
  class InitializerContext;
  class BraceorequalinitializerContext;
  class InitializerclauseContext;
  class InitializerlistContext;
  class BracedinitlistContext;
  class ClassnameContext;
  class ClassspecifierContext;
  class ClassheadContext;
  class ClassheadnameContext;
  class ClassvirtspecifierContext;
  class ClasskeyContext;
  class MemberspecificationContext;
  class MemberdeclarationContext;
  class MemberdeclaratorlistContext;
  class MemberdeclaratorContext;
  class VirtspecifierseqContext;
  class VirtspecifierContext;
  class PurespecifierContext;
  class BaseclauseContext;
  class BasespecifierlistContext;
  class BasespecifierContext;
  class ClassordecltypeContext;
  class BasetypespecifierContext;
  class AccessspecifierContext;
  class ConversionfunctionidContext;
  class ConversiontypeidContext;
  class ConversiondeclaratorContext;
  class CtorinitializerContext;
  class MeminitializerlistContext;
  class MeminitializerContext;
  class MeminitializeridContext;
  class OperatorfunctionidContext;
  class LiteraloperatoridContext;
  class TemplatedeclarationContext;
  class TemplateparameterlistContext;
  class TemplateparameterContext;
  class TypeparameterContext;
  class SimpletemplateidContext;
  class TemplateidContext;
  class TemplatenameContext;
  class TemplateargumentlistContext;
  class TemplateargumentContext;
  class TypenamespecifierContext;
  class ExplicitinstantiationContext;
  class ExplicitspecializationContext;
  class TryblockContext;
  class FunctiontryblockContext;
  class HandlerseqContext;
  class HandlerContext;
  class ExceptiondeclarationContext;
  class ThrowexpressionContext;
  class ExceptionspecificationContext;
  class DynamicexceptionspecificationContext;
  class TypeidlistContext;
  class NoexceptspecificationContext;
  class TheoperatorContext;
  class LiteralContext;
  class BooleanliteralContext;
  class PointerliteralContext;
  class UserdefinedliteralContext; 

  class  TranslationunitContext : public antlr4::ParserRuleContext {
  public:
    TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    DeclarationseqContext *declarationseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationunitContext* translationunit();

  class  PrimaryexpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *This();
    ExpressionContext *expression();
    IdexpressionContext *idexpression();
    LambdaexpressionContext *lambdaexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryexpressionContext* primaryexpression();

  class  IdexpressionContext : public antlr4::ParserRuleContext {
  public:
    IdexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedidContext *unqualifiedid();
    QualifiedidContext *qualifiedid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdexpressionContext* idexpression();

  class  UnqualifiedidContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorfunctionidContext *operatorfunctionid();
    ConversionfunctionidContext *conversionfunctionid();
    LiteraloperatoridContext *literaloperatorid();
    ClassnameContext *classname();
    DecltypespecifierContext *decltypespecifier();
    TemplateidContext *templateid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedidContext* unqualifiedid();

  class  QualifiedidContext : public antlr4::ParserRuleContext {
  public:
    QualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestednamespecifierContext *nestednamespecifier();
    UnqualifiedidContext *unqualifiedid();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedidContext* qualifiedid();

  class  NestednamespecifierContext : public antlr4::ParserRuleContext {
  public:
    NestednamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypenameContext *thetypename();
    NamespacenameContext *namespacename();
    DecltypespecifierContext *decltypespecifier();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestednamespecifierContext* nestednamespecifier();
  NestednamespecifierContext* nestednamespecifier(int precedence);
  class  LambdaexpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaintroducerContext *lambdaintroducer();
    CompoundstatementContext *compoundstatement();
    LambdadeclaratorContext *lambdadeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaexpressionContext* lambdaexpression();

  class  LambdaintroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaintroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdacaptureContext *lambdacapture();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaintroducerContext* lambdaintroducer();

  class  LambdacaptureContext : public antlr4::ParserRuleContext {
  public:
    LambdacaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CapturedefaultContext *capturedefault();
    CapturelistContext *capturelist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdacaptureContext* lambdacapture();

  class  CapturedefaultContext : public antlr4::ParserRuleContext {
  public:
    CapturedefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CapturedefaultContext* capturedefault();

  class  CapturelistContext : public antlr4::ParserRuleContext {
  public:
    CapturelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureContext *capture();
    CapturelistContext *capturelist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CapturelistContext* capturelist();
  CapturelistContext* capturelist(int precedence);
  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimplecaptureContext *simplecapture();
    InitcaptureContext *initcapture();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureContext* capture();

  class  SimplecaptureContext : public antlr4::ParserRuleContext {
  public:
    SimplecaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *This();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimplecaptureContext* simplecapture();

  class  InitcaptureContext : public antlr4::ParserRuleContext {
  public:
    InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitcaptureContext* initcapture();

  class  LambdadeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdadeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationclauseContext *parameterdeclarationclause();
    antlr4::tree::TerminalNode *Mutable();
    ExceptionspecificationContext *exceptionspecification();
    AttributespecifierseqContext *attributespecifierseq();
    TrailingreturntypeContext *trailingreturntype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdadeclaratorContext* lambdadeclarator();

  class  PostfixexpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryexpressionContext *primaryexpression();
    SimpletypespecifierContext *simpletypespecifier();
    ExpressionlistContext *expressionlist();
    TypenamespecifierContext *typenamespecifier();
    BracedinitlistContext *bracedinitlist();
    antlr4::tree::TerminalNode *Dynamic_cast();
    ThetypeidContext *thetypeid();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Static_cast();
    antlr4::tree::TerminalNode *Reinterpret_cast();
    antlr4::tree::TerminalNode *Const_cast();
    TypeidofthetypeidContext *typeidofthetypeid();
    PostfixexpressionContext *postfixexpression();
    IdexpressionContext *idexpression();
    antlr4::tree::TerminalNode *Template();
    PseudodestructornameContext *pseudodestructorname();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixexpressionContext* postfixexpression();
  PostfixexpressionContext* postfixexpression(int precedence);
  class  TypeidofexprContext : public antlr4::ParserRuleContext {
  public:
    TypeidofexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeid_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeidofexprContext* typeidofexpr();

  class  TypeidofthetypeidContext : public antlr4::ParserRuleContext {
  public:
    TypeidofthetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeid_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeidofthetypeidContext* typeidofthetypeid();

  class  ExpressionlistContext : public antlr4::ParserRuleContext {
  public:
    ExpressionlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerlistContext *initializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionlistContext* expressionlist();

  class  PseudodestructornameContext : public antlr4::ParserRuleContext {
  public:
    PseudodestructornameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ThetypenameContext *> thetypename();
    ThetypenameContext* thetypename(size_t i);
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Template();
    SimpletemplateidContext *simpletemplateid();
    DecltypespecifierContext *decltypespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudodestructornameContext* pseudodestructorname();

  class  UnaryexpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixexpressionContext *postfixexpression();
    CastexpressionContext *castexpression();
    UnaryoperatorContext *unaryoperator();
    antlr4::tree::TerminalNode *Sizeof();
    UnaryexpressionContext *unaryexpression();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Alignof();
    NoexceptexpressionContext *noexceptexpression();
    NewexpressionContext *newexpression();
    DeleteexpressionContext *deleteexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryexpressionContext* unaryexpression();

  class  UnaryoperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryoperatorContext* unaryoperator();

  class  NewexpressionContext : public antlr4::ParserRuleContext {
  public:
    NewexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    NewtypeidContext *newtypeid();
    NewplacementContext *newplacement();
    NewinitializerContext *newinitializer();
    ThetypeidContext *thetypeid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewexpressionContext* newexpression();

  class  NewplacementContext : public antlr4::ParserRuleContext {
  public:
    NewplacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionlistContext *expressionlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewplacementContext* newplacement();

  class  NewtypeidContext : public antlr4::ParserRuleContext {
  public:
    NewtypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    NewdeclaratorContext *newdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewtypeidContext* newtypeid();

  class  NewdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtroperatorContext *ptroperator();
    NewdeclaratorContext *newdeclarator();
    NoptrnewdeclaratorContext *noptrnewdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewdeclaratorContext* newdeclarator();

  class  NoptrnewdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrnewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AttributespecifierseqContext *attributespecifierseq();
    NoptrnewdeclaratorContext *noptrnewdeclarator();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrnewdeclaratorContext* noptrnewdeclarator();
  NoptrnewdeclaratorContext* noptrnewdeclarator(int precedence);
  class  NewinitializerContext : public antlr4::ParserRuleContext {
  public:
    NewinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionlistContext *expressionlist();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewinitializerContext* newinitializer();

  class  DeleteexpressionContext : public antlr4::ParserRuleContext {
  public:
    DeleteexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Delete();
    CastexpressionContext *castexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteexpressionContext* deleteexpression();

  class  NoexceptexpressionContext : public antlr4::ParserRuleContext {
  public:
    NoexceptexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoexceptexpressionContext* noexceptexpression();

  class  CastexpressionContext : public antlr4::ParserRuleContext {
  public:
    CastexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryexpressionContext *unaryexpression();
    ThetypeidContext *thetypeid();
    CastexpressionContext *castexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastexpressionContext* castexpression();

  class  PmexpressionContext : public antlr4::ParserRuleContext {
  public:
    PmexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastexpressionContext *castexpression();
    PmexpressionContext *pmexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PmexpressionContext* pmexpression();
  PmexpressionContext* pmexpression(int precedence);
  class  MultiplicativeexpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PmexpressionContext *pmexpression();
    MultiplicativeexpressionContext *multiplicativeexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeexpressionContext* multiplicativeexpression();
  MultiplicativeexpressionContext* multiplicativeexpression(int precedence);
  class  AdditiveexpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeexpressionContext *multiplicativeexpression();
    AdditiveexpressionContext *additiveexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveexpressionContext* additiveexpression();
  AdditiveexpressionContext* additiveexpression(int precedence);
  class  ShiftexpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveexpressionContext *additiveexpression();
    ShiftexpressionContext *shiftexpression();
    ShiftoperatorContext *shiftoperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftexpressionContext* shiftexpression();
  ShiftexpressionContext* shiftexpression(int precedence);
  class  ShiftoperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RightShift();
    antlr4::tree::TerminalNode *LeftShift();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftoperatorContext* shiftoperator();

  class  RelationalexpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftexpressionContext *shiftexpression();
    RelationalexpressionContext *relationalexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalexpressionContext* relationalexpression();
  RelationalexpressionContext* relationalexpression(int precedence);
  class  EqualityexpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalexpressionContext *relationalexpression();
    EqualityexpressionContext *equalityexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityexpressionContext* equalityexpression();
  EqualityexpressionContext* equalityexpression(int precedence);
  class  AndexpressionContext : public antlr4::ParserRuleContext {
  public:
    AndexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityexpressionContext *equalityexpression();
    AndexpressionContext *andexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndexpressionContext* andexpression();
  AndexpressionContext* andexpression(int precedence);
  class  ExclusiveorexpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndexpressionContext *andexpression();
    ExclusiveorexpressionContext *exclusiveorexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveorexpressionContext* exclusiveorexpression();
  ExclusiveorexpressionContext* exclusiveorexpression(int precedence);
  class  InclusiveorexpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveorexpressionContext *exclusiveorexpression();
    InclusiveorexpressionContext *inclusiveorexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveorexpressionContext* inclusiveorexpression();
  InclusiveorexpressionContext* inclusiveorexpression(int precedence);
  class  LogicalandexpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalandexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InclusiveorexpressionContext *inclusiveorexpression();
    LogicalandexpressionContext *logicalandexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalandexpressionContext* logicalandexpression();
  LogicalandexpressionContext* logicalandexpression(int precedence);
  class  LogicalorexpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalandexpressionContext *logicalandexpression();
    LogicalorexpressionContext *logicalorexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalorexpressionContext* logicalorexpression();
  LogicalorexpressionContext* logicalorexpression(int precedence);
  class  ConditionalexpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalorexpressionContext *logicalorexpression();
    ExpressionContext *expression();
    AssignmentexpressionContext *assignmentexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalexpressionContext* conditionalexpression();

  class  AssignmentexpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalexpressionContext *conditionalexpression();
    LogicalorexpressionContext *logicalorexpression();
    AssignmentoperatorContext *assignmentoperator();
    InitializerclauseContext *initializerclause();
    ThrowexpressionContext *throwexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentexpressionContext* assignmentexpression();

  class  AssignmentoperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentoperatorContext* assignmentoperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentexpressionContext *assignmentexpression();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ConstantexpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalexpressionContext *conditionalexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantexpressionContext* constantexpression();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledstatementContext *labeledstatement();
    ExpressionstatementContext *expressionstatement();
    AttributespecifierseqContext *attributespecifierseq();
    CompoundstatementContext *compoundstatement();
    SelectionstatementContext *selectionstatement();
    IterationstatementContext *iterationstatement();
    JumpstatementContext *jumpstatement();
    DeclarationstatementContext *declarationstatement();
    TryblockContext *tryblock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LabeledstatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    StatementContext *statement();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Case();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledstatementContext* labeledstatement();

  class  ExpressionstatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionstatementContext* expressionstatement();

  class  CompoundstatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementseqContext *statementseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundstatementContext* compoundstatement();

  class  StatementseqContext : public antlr4::ParserRuleContext {
  public:
    StatementseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementseqContext *statementseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementseqContext* statementseq();
  StatementseqContext* statementseq(int precedence);
  class  SelectionstatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionstatementContext* selectionstatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    InitializerclauseContext *initializerclause();
    AttributespecifierseqContext *attributespecifierseq();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  IterationstatementContext : public antlr4::ParserRuleContext {
  public:
    IterationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    ConditionContext *condition();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Do();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *For();
    ForinitstatementContext *forinitstatement();
    ForrangedeclarationContext *forrangedeclaration();
    ForrangeinitializerContext *forrangeinitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationstatementContext* iterationstatement();

  class  ForinitstatementContext : public antlr4::ParserRuleContext {
  public:
    ForinitstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionstatementContext *expressionstatement();
    SimpledeclarationContext *simpledeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForinitstatementContext* forinitstatement();

  class  ForrangedeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForrangedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForrangedeclarationContext* forrangedeclaration();

  class  ForrangeinitializerContext : public antlr4::ParserRuleContext {
  public:
    ForrangeinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForrangeinitializerContext* forrangeinitializer();

  class  JumpstatementContext : public antlr4::ParserRuleContext {
  public:
    JumpstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    ExpressionContext *expression();
    BracedinitlistContext *bracedinitlist();
    antlr4::tree::TerminalNode *Goto();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpstatementContext* jumpstatement();

  class  DeclarationstatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockdeclarationContext *blockdeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationstatementContext* declarationstatement();

  class  DeclarationseqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationseqContext *declarationseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationseqContext* declarationseq();
  DeclarationseqContext* declarationseq(int precedence);
  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockdeclarationContext *blockdeclaration();
    FunctiondefinitionContext *functiondefinition();
    TemplatedeclarationContext *templatedeclaration();
    ExplicitinstantiationContext *explicitinstantiation();
    ExplicitspecializationContext *explicitspecialization();
    LinkagespecificationContext *linkagespecification();
    NamespacedefinitionContext *namespacedefinition();
    EmptydeclarationContext *emptydeclaration();
    AttributedeclarationContext *attributedeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  BlockdeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpledeclarationContext *simpledeclaration();
    AsmdefinitionContext *asmdefinition();
    NamespacealiasdefinitionContext *namespacealiasdefinition();
    UsingdeclarationContext *usingdeclaration();
    UsingdirectiveContext *usingdirective();
    Static_assertdeclarationContext *static_assertdeclaration();
    AliasdeclarationContext *aliasdeclaration();
    OpaqueenumdeclarationContext *opaqueenumdeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockdeclarationContext* blockdeclaration();

  class  AliasdeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Identifier();
    ThetypeidContext *thetypeid();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasdeclarationContext* aliasdeclaration();

  class  SimpledeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpledeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    InitdeclaratorlistContext *initdeclaratorlist();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpledeclarationContext* simpledeclaration();

  class  Static_assertdeclarationContext : public antlr4::ParserRuleContext {
  public:
    Static_assertdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static_assert();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Stringliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Static_assertdeclarationContext* static_assertdeclaration();

  class  EmptydeclarationContext : public antlr4::ParserRuleContext {
  public:
    EmptydeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptydeclarationContext* emptydeclaration();

  class  AttributedeclarationContext : public antlr4::ParserRuleContext {
  public:
    AttributedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributedeclarationContext* attributedeclaration();

  class  DeclspecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageclassspecifierContext *storageclassspecifier();
    TypespecifierContext *typespecifier();
    FunctionspecifierContext *functionspecifier();
    antlr4::tree::TerminalNode *Friend();
    antlr4::tree::TerminalNode *Typedef();
    antlr4::tree::TerminalNode *Constexpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclspecifierContext* declspecifier();

  class  DeclspecifierseqContext : public antlr4::ParserRuleContext {
  public:
    DeclspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierContext *declspecifier();
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclspecifierseqContext* declspecifierseq();

  class  StorageclassspecifierContext : public antlr4::ParserRuleContext {
  public:
    StorageclassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Register();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Thread_local();
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Mutable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageclassspecifierContext* storageclassspecifier();

  class  FunctionspecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionspecifierContext* functionspecifier();

  class  TypedefnameContext : public antlr4::ParserRuleContext {
  public:
    TypedefnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedefnameContext* typedefname();

  class  TypespecifierContext : public antlr4::ParserRuleContext {
  public:
    TypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierContext *trailingtypespecifier();
    ClassspecifierContext *classspecifier();
    EnumspecifierContext *enumspecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypespecifierContext* typespecifier();

  class  TrailingtypespecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpletypespecifierContext *simpletypespecifier();
    ElaboratedtypespecifierContext *elaboratedtypespecifier();
    TypenamespecifierContext *typenamespecifier();
    CvqualifierContext *cvqualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingtypespecifierContext* trailingtypespecifier();

  class  TypespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    TypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierContext *typespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    TypespecifierseqContext *typespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypespecifierseqContext* typespecifierseq();

  class  TrailingtypespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    TrailingtypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierContext *trailingtypespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    TrailingtypespecifierseqContext *trailingtypespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingtypespecifierseqContext* trailingtypespecifierseq();

  class  SimpletypespecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpletypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypenameContext *thetypename();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Template();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Char16();
    antlr4::tree::TerminalNode *Char32();
    antlr4::tree::TerminalNode *Wchar();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Signed();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DecltypespecifierContext *decltypespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpletypespecifierContext* simpletypespecifier();

  class  ThetypenameContext : public antlr4::ParserRuleContext {
  public:
    ThetypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    EnumnameContext *enumname();
    TypedefnameContext *typedefname();
    SimpletemplateidContext *simpletemplateid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThetypenameContext* thetypename();

  class  DecltypespecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decltype();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Auto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecltypespecifierContext* decltypespecifier();

  class  ElaboratedtypespecifierContext : public antlr4::ParserRuleContext {
  public:
    ElaboratedtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClasskeyContext *classkey();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();
    NestednamespecifierContext *nestednamespecifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Enum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElaboratedtypespecifierContext* elaboratedtypespecifier();

  class  EnumnameContext : public antlr4::ParserRuleContext {
  public:
    EnumnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumnameContext* enumname();

  class  EnumspecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumheadContext *enumhead();
    EnumeratorlistContext *enumeratorlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumspecifierContext* enumspecifier();

  class  EnumheadContext : public antlr4::ParserRuleContext {
  public:
    EnumheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Identifier();
    EnumbaseContext *enumbase();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumheadContext* enumhead();

  class  OpaqueenumdeclarationContext : public antlr4::ParserRuleContext {
  public:
    OpaqueenumdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();
    EnumbaseContext *enumbase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpaqueenumdeclarationContext* opaqueenumdeclaration();

  class  EnumkeyContext : public antlr4::ParserRuleContext {
  public:
    EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumkeyContext* enumkey();

  class  EnumbaseContext : public antlr4::ParserRuleContext {
  public:
    EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumbaseContext* enumbase();

  class  EnumeratorlistContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratordefinitionContext *enumeratordefinition();
    EnumeratorlistContext *enumeratorlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorlistContext* enumeratorlist();
  EnumeratorlistContext* enumeratorlist(int precedence);
  class  EnumeratordefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratordefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratordefinitionContext* enumeratordefinition();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  NamespacenameContext : public antlr4::ParserRuleContext {
  public:
    NamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalnamespacenameContext *originalnamespacename();
    NamespacealiasContext *namespacealias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacenameContext* namespacename();

  class  OriginalnamespacenameContext : public antlr4::ParserRuleContext {
  public:
    OriginalnamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalnamespacenameContext* originalnamespacename();

  class  NamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamednamespacedefinitionContext *namednamespacedefinition();
    UnnamednamespacedefinitionContext *unnamednamespacedefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacedefinitionContext* namespacedefinition();

  class  NamednamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalnamespacedefinitionContext *originalnamespacedefinition();
    ExtensionnamespacedefinitionContext *extensionnamespacedefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamednamespacedefinitionContext* namednamespacedefinition();

  class  OriginalnamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    OriginalnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *Inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalnamespacedefinitionContext* originalnamespacedefinition();

  class  ExtensionnamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    ExtensionnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    OriginalnamespacenameContext *originalnamespacename();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *Inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionnamespacedefinitionContext* extensionnamespacedefinition();

  class  UnnamednamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnnamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *Inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnnamednamespacedefinitionContext* unnamednamespacedefinition();

  class  NamespacebodyContext : public antlr4::ParserRuleContext {
  public:
    NamespacebodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationseqContext *declarationseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacebodyContext* namespacebody();

  class  NamespacealiasContext : public antlr4::ParserRuleContext {
  public:
    NamespacealiasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacealiasContext* namespacealias();

  class  NamespacealiasdefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespacealiasdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    QualifiednamespacespecifierContext *qualifiednamespacespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacealiasdefinitionContext* namespacealiasdefinition();

  class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespacenameContext *namespacename();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiednamespacespecifierContext* qualifiednamespacespecifier();

  class  UsingdeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    NestednamespecifierContext *nestednamespecifier();
    UnqualifiedidContext *unqualifiedid();
    antlr4::tree::TerminalNode *Typename_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingdeclarationContext* usingdeclaration();

  class  UsingdirectiveContext : public antlr4::ParserRuleContext {
  public:
    UsingdirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Namespace();
    NamespacenameContext *namespacename();
    AttributespecifierseqContext *attributespecifierseq();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingdirectiveContext* usingdirective();

  class  AsmdefinitionContext : public antlr4::ParserRuleContext {
  public:
    AsmdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    antlr4::tree::TerminalNode *Stringliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsmdefinitionContext* asmdefinition();

  class  LinkagespecificationContext : public antlr4::ParserRuleContext {
  public:
    LinkagespecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Stringliteral();
    DeclarationseqContext *declarationseq();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinkagespecificationContext* linkagespecification();

  class  AttributespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    AttributespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierContext *attributespecifier();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributespecifierseqContext* attributespecifierseq();
  AttributespecifierseqContext* attributespecifierseq(int precedence);
  class  AttributespecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributelistContext *attributelist();
    AlignmentspecifierContext *alignmentspecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributespecifierContext* attributespecifier();

  class  AlignmentspecifierContext : public antlr4::ParserRuleContext {
  public:
    AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Alignas();
    ThetypeidContext *thetypeid();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlignmentspecifierContext* alignmentspecifier();

  class  AttributelistContext : public antlr4::ParserRuleContext {
  public:
    AttributelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    AttributelistContext *attributelist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributelistContext* attributelist();
  AttributelistContext* attributelist(int precedence);
  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributetokenContext *attributetoken();
    AttributeargumentclauseContext *attributeargumentclause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  AttributetokenContext : public antlr4::ParserRuleContext {
  public:
    AttributetokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributescopedtokenContext *attributescopedtoken();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributetokenContext* attributetoken();

  class  AttributescopedtokenContext : public antlr4::ParserRuleContext {
  public:
    AttributescopedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributenamespaceContext *attributenamespace();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributescopedtokenContext* attributescopedtoken();

  class  AttributenamespaceContext : public antlr4::ParserRuleContext {
  public:
    AttributenamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributenamespaceContext* attributenamespace();

  class  AttributeargumentclauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeargumentclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedtokenseqContext *balancedtokenseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeargumentclauseContext* attributeargumentclause();

  class  BalancedtokenseqContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedtokenContext *balancedtoken();
    BalancedtokenseqContext *balancedtokenseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenseqContext* balancedtokenseq();
  BalancedtokenseqContext* balancedtokenseq(int precedence);
  class  BalancedtokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedtokenseqContext *balancedtokenseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenContext* balancedtoken();

  class  InitdeclaratorlistContext : public antlr4::ParserRuleContext {
  public:
    InitdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitdeclaratorContext *initdeclarator();
    InitdeclaratorlistContext *initdeclaratorlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitdeclaratorlistContext* initdeclaratorlist();
  InitdeclaratorlistContext* initdeclaratorlist(int precedence);
  class  InitdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitdeclaratorContext* initdeclarator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtrdeclaratorContext *ptrdeclarator();
    NoptrdeclaratorContext *noptrdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    TrailingreturntypeContext *trailingreturntype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  PtrdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PtrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrdeclaratorContext *noptrdeclarator();
    PtroperatorContext *ptroperator();
    PtrdeclaratorContext *ptrdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrdeclaratorContext* ptrdeclarator();

  class  NoptrdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratoridContext *declaratorid();
    AttributespecifierseqContext *attributespecifierseq();
    PtrdeclaratorContext *ptrdeclarator();
    NoptrdeclaratorContext *noptrdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrdeclaratorContext* noptrdeclarator();
  NoptrdeclaratorContext* noptrdeclarator(int precedence);
  class  ParametersandqualifiersContext : public antlr4::ParserRuleContext {
  public:
    ParametersandqualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationclauseContext *parameterdeclarationclause();
    CvqualifierseqContext *cvqualifierseq();
    RefqualifierContext *refqualifier();
    ExceptionspecificationContext *exceptionspecification();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersandqualifiersContext* parametersandqualifiers();

  class  TrailingreturntypeContext : public antlr4::ParserRuleContext {
  public:
    TrailingreturntypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierseqContext *trailingtypespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingreturntypeContext* trailingreturntype();

  class  PtroperatorContext : public antlr4::ParserRuleContext {
  public:
    PtroperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierseqContext *attributespecifierseq();
    CvqualifierseqContext *cvqualifierseq();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtroperatorContext* ptroperator();

  class  CvqualifierseqContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CvqualifierContext *cvqualifier();
    CvqualifierseqContext *cvqualifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvqualifierseqContext* cvqualifierseq();

  class  CvqualifierContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvqualifierContext* cvqualifier();

  class  RefqualifierContext : public antlr4::ParserRuleContext {
  public:
    RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefqualifierContext* refqualifier();

  class  DeclaratoridContext : public antlr4::ParserRuleContext {
  public:
    DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdexpressionContext *idexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratoridContext* declaratorid();

  class  ThetypeidContext : public antlr4::ParserRuleContext {
  public:
    ThetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThetypeidContext* thetypeid();

  class  AbstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtrabstractdeclaratorContext *ptrabstractdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    TrailingreturntypeContext *trailingreturntype();
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();
    AbstractpackdeclaratorContext *abstractpackdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractdeclaratorContext* abstractdeclarator();

  class  PtrabstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PtrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();
    PtroperatorContext *ptroperator();
    PtrabstractdeclaratorContext *ptrabstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrabstractdeclaratorContext* ptrabstractdeclarator();

  class  NoptrabstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersandqualifiersContext *parametersandqualifiers();
    ConstantexpressionContext *constantexpression();
    AttributespecifierseqContext *attributespecifierseq();
    PtrabstractdeclaratorContext *ptrabstractdeclarator();
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrabstractdeclaratorContext* noptrabstractdeclarator();
  NoptrabstractdeclaratorContext* noptrabstractdeclarator(int precedence);
  class  AbstractpackdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
    PtroperatorContext *ptroperator();
    AbstractpackdeclaratorContext *abstractpackdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractpackdeclaratorContext* abstractpackdeclarator();

  class  NoptrabstractpackdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrabstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    ConstantexpressionContext *constantexpression();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator();
  NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator(int precedence);
  class  ParameterdeclarationclauseContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationlistContext *parameterdeclarationlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationclauseContext* parameterdeclarationclause();

  class  ParameterdeclarationlistContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationContext *parameterdeclaration();
    ParameterdeclarationlistContext *parameterdeclarationlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationlistContext* parameterdeclarationlist();
  ParameterdeclarationlistContext* parameterdeclarationlist(int precedence);
  class  ParameterdeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();
    InitializerclauseContext *initializerclause();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationContext* parameterdeclaration();

  class  FunctiondefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    FunctionbodyContext *functionbody();
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();
    VirtspecifierseqContext *virtspecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiondefinitionContext* functiondefinition();

  class  FunctionbodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundstatementContext *compoundstatement();
    CtorinitializerContext *ctorinitializer();
    FunctiontryblockContext *functiontryblock();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Delete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionbodyContext* functionbody();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceorequalinitializerContext *braceorequalinitializer();
    ExpressionlistContext *expressionlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  BraceorequalinitializerContext : public antlr4::ParserRuleContext {
  public:
    BraceorequalinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerclauseContext *initializerclause();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceorequalinitializerContext* braceorequalinitializer();

  class  InitializerclauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentexpressionContext *assignmentexpression();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerclauseContext* initializerclause();

  class  InitializerlistContext : public antlr4::ParserRuleContext {
  public:
    InitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerclauseContext *initializerclause();
    InitializerlistContext *initializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerlistContext* initializerlist();
  InitializerlistContext* initializerlist(int precedence);
  class  BracedinitlistContext : public antlr4::ParserRuleContext {
  public:
    BracedinitlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerlistContext *initializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracedinitlistContext* bracedinitlist();

  class  ClassnameContext : public antlr4::ParserRuleContext {
  public:
    ClassnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassnameContext* classname();

  class  ClassspecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassheadContext *classhead();
    MemberspecificationContext *memberspecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassspecifierContext* classspecifier();

  class  ClassheadContext : public antlr4::ParserRuleContext {
  public:
    ClassheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClasskeyContext *classkey();
    ClassheadnameContext *classheadname();
    AttributespecifierseqContext *attributespecifierseq();
    ClassvirtspecifierContext *classvirtspecifier();
    BaseclauseContext *baseclause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassheadContext* classhead();

  class  ClassheadnameContext : public antlr4::ParserRuleContext {
  public:
    ClassheadnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    NestednamespecifierContext *nestednamespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassheadnameContext* classheadname();

  class  ClassvirtspecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassvirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassvirtspecifierContext* classvirtspecifier();

  class  ClasskeyContext : public antlr4::ParserRuleContext {
  public:
    ClasskeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *Union();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClasskeyContext* classkey();

  class  MemberspecificationContext : public antlr4::ParserRuleContext {
  public:
    MemberspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberdeclarationContext *memberdeclaration();
    MemberspecificationContext *memberspecification();
    AccessspecifierContext *accessspecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberspecificationContext* memberspecification();

  class  MemberdeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();
    MemberdeclaratorlistContext *memberdeclaratorlist();
    FunctiondefinitionContext *functiondefinition();
    UsingdeclarationContext *usingdeclaration();
    Static_assertdeclarationContext *static_assertdeclaration();
    TemplatedeclarationContext *templatedeclaration();
    AliasdeclarationContext *aliasdeclaration();
    EmptydeclarationContext *emptydeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclarationContext* memberdeclaration();

  class  MemberdeclaratorlistContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberdeclaratorContext *memberdeclarator();
    MemberdeclaratorlistContext *memberdeclaratorlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclaratorlistContext* memberdeclaratorlist();
  MemberdeclaratorlistContext* memberdeclaratorlist(int precedence);
  class  MemberdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    VirtspecifierseqContext *virtspecifierseq();
    PurespecifierContext *purespecifier();
    BraceorequalinitializerContext *braceorequalinitializer();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclaratorContext* memberdeclarator();

  class  VirtspecifierseqContext : public antlr4::ParserRuleContext {
  public:
    VirtspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VirtspecifierContext *virtspecifier();
    VirtspecifierseqContext *virtspecifierseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtspecifierseqContext* virtspecifierseq();
  VirtspecifierseqContext* virtspecifierseq(int precedence);
  class  VirtspecifierContext : public antlr4::ParserRuleContext {
  public:
    VirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtspecifierContext* virtspecifier();

  class  PurespecifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *val = nullptr;;
    PurespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Octalliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PurespecifierContext* purespecifier();

  class  BaseclauseContext : public antlr4::ParserRuleContext {
  public:
    BaseclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasespecifierlistContext *basespecifierlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseclauseContext* baseclause();

  class  BasespecifierlistContext : public antlr4::ParserRuleContext {
  public:
    BasespecifierlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasespecifierContext *basespecifier();
    BasespecifierlistContext *basespecifierlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasespecifierlistContext* basespecifierlist();
  BasespecifierlistContext* basespecifierlist(int precedence);
  class  BasespecifierContext : public antlr4::ParserRuleContext {
  public:
    BasespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasetypespecifierContext *basetypespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Virtual();
    AccessspecifierContext *accessspecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasespecifierContext* basespecifier();

  class  ClassordecltypeContext : public antlr4::ParserRuleContext {
  public:
    ClassordecltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    NestednamespecifierContext *nestednamespecifier();
    DecltypespecifierContext *decltypespecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassordecltypeContext* classordecltype();

  class  BasetypespecifierContext : public antlr4::ParserRuleContext {
  public:
    BasetypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassordecltypeContext *classordecltype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasetypespecifierContext* basetypespecifier();

  class  AccessspecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessspecifierContext* accessspecifier();

  class  ConversionfunctionidContext : public antlr4::ParserRuleContext {
  public:
    ConversionfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    ConversiontypeidContext *conversiontypeid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionfunctionidContext* conversionfunctionid();

  class  ConversiontypeidContext : public antlr4::ParserRuleContext {
  public:
    ConversiontypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    ConversiondeclaratorContext *conversiondeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversiontypeidContext* conversiontypeid();

  class  ConversiondeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConversiondeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtroperatorContext *ptroperator();
    ConversiondeclaratorContext *conversiondeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversiondeclaratorContext* conversiondeclarator();

  class  CtorinitializerContext : public antlr4::ParserRuleContext {
  public:
    CtorinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializerlistContext *meminitializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CtorinitializerContext* ctorinitializer();

  class  MeminitializerlistContext : public antlr4::ParserRuleContext {
  public:
    MeminitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializerContext *meminitializer();
    MeminitializerlistContext *meminitializerlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializerlistContext* meminitializerlist();

  class  MeminitializerContext : public antlr4::ParserRuleContext {
  public:
    MeminitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializeridContext *meminitializerid();
    ExpressionlistContext *expressionlist();
    BracedinitlistContext *bracedinitlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializerContext* meminitializer();

  class  MeminitializeridContext : public antlr4::ParserRuleContext {
  public:
    MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassordecltypeContext *classordecltype();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializeridContext* meminitializerid();

  class  OperatorfunctionidContext : public antlr4::ParserRuleContext {
  public:
    OperatorfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    TheoperatorContext *theoperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorfunctionidContext* operatorfunctionid();

  class  LiteraloperatoridContext : public antlr4::ParserRuleContext {
  public:
    LiteraloperatoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    antlr4::tree::TerminalNode *Stringliteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Userdefinedstringliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteraloperatoridContext* literaloperatorid();

  class  TemplatedeclarationContext : public antlr4::ParserRuleContext {
  public:
    TemplatedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    TemplateparameterlistContext *templateparameterlist();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplatedeclarationContext* templatedeclaration();

  class  TemplateparameterlistContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateparameterContext *templateparameter();
    TemplateparameterlistContext *templateparameterlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateparameterlistContext* templateparameterlist();
  TemplateparameterlistContext* templateparameterlist(int precedence);
  class  TemplateparameterContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeparameterContext *typeparameter();
    ParameterdeclarationContext *parameterdeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateparameterContext* templateparameter();

  class  TypeparameterContext : public antlr4::ParserRuleContext {
  public:
    TypeparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Typename_();
    antlr4::tree::TerminalNode *Template();
    TemplateparameterlistContext *templateparameterlist();
    IdexpressionContext *idexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeparameterContext* typeparameter();

  class  SimpletemplateidContext : public antlr4::ParserRuleContext {
  public:
    SimpletemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplatenameContext *templatename();
    TemplateargumentlistContext *templateargumentlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpletemplateidContext* simpletemplateid();

  class  TemplateidContext : public antlr4::ParserRuleContext {
  public:
    TemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpletemplateidContext *simpletemplateid();
    OperatorfunctionidContext *operatorfunctionid();
    TemplateargumentlistContext *templateargumentlist();
    LiteraloperatoridContext *literaloperatorid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateidContext* templateid();

  class  TemplatenameContext : public antlr4::ParserRuleContext {
  public:
    TemplatenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplatenameContext* templatename();

  class  TemplateargumentlistContext : public antlr4::ParserRuleContext {
  public:
    TemplateargumentlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateargumentContext *templateargument();
    TemplateargumentlistContext *templateargumentlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateargumentlistContext* templateargumentlist();
  TemplateargumentlistContext* templateargumentlist(int precedence);
  class  TemplateargumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateargumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypeidContext *thetypeid();
    ConstantexpressionContext *constantexpression();
    IdexpressionContext *idexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateargumentContext* templateargument();

  class  TypenamespecifierContext : public antlr4::ParserRuleContext {
  public:
    TypenamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typename_();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypenamespecifierContext* typenamespecifier();

  class  ExplicitinstantiationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitinstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *Extern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitinstantiationContext* explicitinstantiation();

  class  ExplicitspecializationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitspecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitspecializationContext* explicitspecialization();

  class  TryblockContext : public antlr4::ParserRuleContext {
  public:
    TryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundstatementContext *compoundstatement();
    HandlerseqContext *handlerseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryblockContext* tryblock();

  class  FunctiontryblockContext : public antlr4::ParserRuleContext {
  public:
    FunctiontryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundstatementContext *compoundstatement();
    HandlerseqContext *handlerseq();
    CtorinitializerContext *ctorinitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiontryblockContext* functiontryblock();

  class  HandlerseqContext : public antlr4::ParserRuleContext {
  public:
    HandlerseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandlerContext *handler();
    HandlerseqContext *handlerseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerseqContext* handlerseq();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    ExceptiondeclarationContext *exceptiondeclaration();
    CompoundstatementContext *compoundstatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerContext* handler();

  class  ExceptiondeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExceptiondeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptiondeclarationContext* exceptiondeclaration();

  class  ThrowexpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentexpressionContext *assignmentexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowexpressionContext* throwexpression();

  class  ExceptionspecificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DynamicexceptionspecificationContext *dynamicexceptionspecification();
    NoexceptspecificationContext *noexceptspecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionspecificationContext* exceptionspecification();

  class  DynamicexceptionspecificationContext : public antlr4::ParserRuleContext {
  public:
    DynamicexceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    TypeidlistContext *typeidlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DynamicexceptionspecificationContext* dynamicexceptionspecification();

  class  TypeidlistContext : public antlr4::ParserRuleContext {
  public:
    TypeidlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypeidContext *thetypeid();
    TypeidlistContext *typeidlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeidlistContext* typeidlist();
  TypeidlistContext* typeidlist(int precedence);
  class  NoexceptspecificationContext : public antlr4::ParserRuleContext {
  public:
    NoexceptspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    ConstantexpressionContext *constantexpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoexceptspecificationContext* noexceptspecification();

  class  TheoperatorContext : public antlr4::ParserRuleContext {
  public:
    TheoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *RightShift();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheoperatorContext* theoperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integerliteral();
    antlr4::tree::TerminalNode *Characterliteral();
    antlr4::tree::TerminalNode *Floatingliteral();
    antlr4::tree::TerminalNode *Stringliteral();
    BooleanliteralContext *booleanliteral();
    PointerliteralContext *pointerliteral();
    UserdefinedliteralContext *userdefinedliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  BooleanliteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *False();
    antlr4::tree::TerminalNode *True();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanliteralContext* booleanliteral();

  class  PointerliteralContext : public antlr4::ParserRuleContext {
  public:
    PointerliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Nullptr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerliteralContext* pointerliteral();

  class  UserdefinedliteralContext : public antlr4::ParserRuleContext {
  public:
    UserdefinedliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Userdefinedintegerliteral();
    antlr4::tree::TerminalNode *Userdefinedfloatingliteral();
    antlr4::tree::TerminalNode *Userdefinedstringliteral();
    antlr4::tree::TerminalNode *Userdefinedcharacterliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserdefinedliteralContext* userdefinedliteral();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex);
  bool capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex);
  bool postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex);
  bool noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex);
  bool pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex);
  bool multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex);
  bool additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex);
  bool shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex);
  bool relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex);
  bool equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex);
  bool andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex);
  bool exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex);
  bool inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex);
  bool logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex);
  bool logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex);
  bool declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex);
  bool enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex);
  bool attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex);
  bool attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex);
  bool balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex);
  bool initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex);
  bool noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex);
  bool noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex);
  bool noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex);
  bool parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex);
  bool initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex);
  bool memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex);
  bool virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex);
  bool basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex);
  bool templateparameterlistSempred(TemplateparameterlistContext *_localctx, size_t predicateIndex);
  bool templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex);
  bool typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

