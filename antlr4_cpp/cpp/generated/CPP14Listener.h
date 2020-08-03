
// Generated from CPP14.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CPP14Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CPP14Parser.
 */
class  CPP14Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationunit(CPP14Parser::TranslationunitContext *ctx) = 0;
  virtual void exitTranslationunit(CPP14Parser::TranslationunitContext *ctx) = 0;

  virtual void enterPrimaryexpression(CPP14Parser::PrimaryexpressionContext *ctx) = 0;
  virtual void exitPrimaryexpression(CPP14Parser::PrimaryexpressionContext *ctx) = 0;

  virtual void enterIdexpression(CPP14Parser::IdexpressionContext *ctx) = 0;
  virtual void exitIdexpression(CPP14Parser::IdexpressionContext *ctx) = 0;

  virtual void enterUnqualifiedid(CPP14Parser::UnqualifiedidContext *ctx) = 0;
  virtual void exitUnqualifiedid(CPP14Parser::UnqualifiedidContext *ctx) = 0;

  virtual void enterQualifiedid(CPP14Parser::QualifiedidContext *ctx) = 0;
  virtual void exitQualifiedid(CPP14Parser::QualifiedidContext *ctx) = 0;

  virtual void enterNestednamespecifier(CPP14Parser::NestednamespecifierContext *ctx) = 0;
  virtual void exitNestednamespecifier(CPP14Parser::NestednamespecifierContext *ctx) = 0;

  virtual void enterLambdaexpression(CPP14Parser::LambdaexpressionContext *ctx) = 0;
  virtual void exitLambdaexpression(CPP14Parser::LambdaexpressionContext *ctx) = 0;

  virtual void enterLambdaintroducer(CPP14Parser::LambdaintroducerContext *ctx) = 0;
  virtual void exitLambdaintroducer(CPP14Parser::LambdaintroducerContext *ctx) = 0;

  virtual void enterLambdacapture(CPP14Parser::LambdacaptureContext *ctx) = 0;
  virtual void exitLambdacapture(CPP14Parser::LambdacaptureContext *ctx) = 0;

  virtual void enterCapturedefault(CPP14Parser::CapturedefaultContext *ctx) = 0;
  virtual void exitCapturedefault(CPP14Parser::CapturedefaultContext *ctx) = 0;

  virtual void enterCapturelist(CPP14Parser::CapturelistContext *ctx) = 0;
  virtual void exitCapturelist(CPP14Parser::CapturelistContext *ctx) = 0;

  virtual void enterCapture(CPP14Parser::CaptureContext *ctx) = 0;
  virtual void exitCapture(CPP14Parser::CaptureContext *ctx) = 0;

  virtual void enterSimplecapture(CPP14Parser::SimplecaptureContext *ctx) = 0;
  virtual void exitSimplecapture(CPP14Parser::SimplecaptureContext *ctx) = 0;

  virtual void enterInitcapture(CPP14Parser::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(CPP14Parser::InitcaptureContext *ctx) = 0;

  virtual void enterLambdadeclarator(CPP14Parser::LambdadeclaratorContext *ctx) = 0;
  virtual void exitLambdadeclarator(CPP14Parser::LambdadeclaratorContext *ctx) = 0;

  virtual void enterPostfixexpression(CPP14Parser::PostfixexpressionContext *ctx) = 0;
  virtual void exitPostfixexpression(CPP14Parser::PostfixexpressionContext *ctx) = 0;

  virtual void enterTypeidofexpr(CPP14Parser::TypeidofexprContext *ctx) = 0;
  virtual void exitTypeidofexpr(CPP14Parser::TypeidofexprContext *ctx) = 0;

  virtual void enterTypeidofthetypeid(CPP14Parser::TypeidofthetypeidContext *ctx) = 0;
  virtual void exitTypeidofthetypeid(CPP14Parser::TypeidofthetypeidContext *ctx) = 0;

  virtual void enterExpressionlist(CPP14Parser::ExpressionlistContext *ctx) = 0;
  virtual void exitExpressionlist(CPP14Parser::ExpressionlistContext *ctx) = 0;

  virtual void enterPseudodestructorname(CPP14Parser::PseudodestructornameContext *ctx) = 0;
  virtual void exitPseudodestructorname(CPP14Parser::PseudodestructornameContext *ctx) = 0;

  virtual void enterUnaryexpression(CPP14Parser::UnaryexpressionContext *ctx) = 0;
  virtual void exitUnaryexpression(CPP14Parser::UnaryexpressionContext *ctx) = 0;

  virtual void enterUnaryoperator(CPP14Parser::UnaryoperatorContext *ctx) = 0;
  virtual void exitUnaryoperator(CPP14Parser::UnaryoperatorContext *ctx) = 0;

  virtual void enterNewexpression(CPP14Parser::NewexpressionContext *ctx) = 0;
  virtual void exitNewexpression(CPP14Parser::NewexpressionContext *ctx) = 0;

  virtual void enterNewplacement(CPP14Parser::NewplacementContext *ctx) = 0;
  virtual void exitNewplacement(CPP14Parser::NewplacementContext *ctx) = 0;

  virtual void enterNewtypeid(CPP14Parser::NewtypeidContext *ctx) = 0;
  virtual void exitNewtypeid(CPP14Parser::NewtypeidContext *ctx) = 0;

  virtual void enterNewdeclarator(CPP14Parser::NewdeclaratorContext *ctx) = 0;
  virtual void exitNewdeclarator(CPP14Parser::NewdeclaratorContext *ctx) = 0;

  virtual void enterNoptrnewdeclarator(CPP14Parser::NoptrnewdeclaratorContext *ctx) = 0;
  virtual void exitNoptrnewdeclarator(CPP14Parser::NoptrnewdeclaratorContext *ctx) = 0;

  virtual void enterNewinitializer(CPP14Parser::NewinitializerContext *ctx) = 0;
  virtual void exitNewinitializer(CPP14Parser::NewinitializerContext *ctx) = 0;

  virtual void enterDeleteexpression(CPP14Parser::DeleteexpressionContext *ctx) = 0;
  virtual void exitDeleteexpression(CPP14Parser::DeleteexpressionContext *ctx) = 0;

  virtual void enterNoexceptexpression(CPP14Parser::NoexceptexpressionContext *ctx) = 0;
  virtual void exitNoexceptexpression(CPP14Parser::NoexceptexpressionContext *ctx) = 0;

  virtual void enterCastexpression(CPP14Parser::CastexpressionContext *ctx) = 0;
  virtual void exitCastexpression(CPP14Parser::CastexpressionContext *ctx) = 0;

  virtual void enterPmexpression(CPP14Parser::PmexpressionContext *ctx) = 0;
  virtual void exitPmexpression(CPP14Parser::PmexpressionContext *ctx) = 0;

  virtual void enterMultiplicativeexpression(CPP14Parser::MultiplicativeexpressionContext *ctx) = 0;
  virtual void exitMultiplicativeexpression(CPP14Parser::MultiplicativeexpressionContext *ctx) = 0;

  virtual void enterAdditiveexpression(CPP14Parser::AdditiveexpressionContext *ctx) = 0;
  virtual void exitAdditiveexpression(CPP14Parser::AdditiveexpressionContext *ctx) = 0;

  virtual void enterShiftexpression(CPP14Parser::ShiftexpressionContext *ctx) = 0;
  virtual void exitShiftexpression(CPP14Parser::ShiftexpressionContext *ctx) = 0;

  virtual void enterShiftoperator(CPP14Parser::ShiftoperatorContext *ctx) = 0;
  virtual void exitShiftoperator(CPP14Parser::ShiftoperatorContext *ctx) = 0;

  virtual void enterRelationalexpression(CPP14Parser::RelationalexpressionContext *ctx) = 0;
  virtual void exitRelationalexpression(CPP14Parser::RelationalexpressionContext *ctx) = 0;

  virtual void enterEqualityexpression(CPP14Parser::EqualityexpressionContext *ctx) = 0;
  virtual void exitEqualityexpression(CPP14Parser::EqualityexpressionContext *ctx) = 0;

  virtual void enterAndexpression(CPP14Parser::AndexpressionContext *ctx) = 0;
  virtual void exitAndexpression(CPP14Parser::AndexpressionContext *ctx) = 0;

  virtual void enterExclusiveorexpression(CPP14Parser::ExclusiveorexpressionContext *ctx) = 0;
  virtual void exitExclusiveorexpression(CPP14Parser::ExclusiveorexpressionContext *ctx) = 0;

  virtual void enterInclusiveorexpression(CPP14Parser::InclusiveorexpressionContext *ctx) = 0;
  virtual void exitInclusiveorexpression(CPP14Parser::InclusiveorexpressionContext *ctx) = 0;

  virtual void enterLogicalandexpression(CPP14Parser::LogicalandexpressionContext *ctx) = 0;
  virtual void exitLogicalandexpression(CPP14Parser::LogicalandexpressionContext *ctx) = 0;

  virtual void enterLogicalorexpression(CPP14Parser::LogicalorexpressionContext *ctx) = 0;
  virtual void exitLogicalorexpression(CPP14Parser::LogicalorexpressionContext *ctx) = 0;

  virtual void enterConditionalexpression(CPP14Parser::ConditionalexpressionContext *ctx) = 0;
  virtual void exitConditionalexpression(CPP14Parser::ConditionalexpressionContext *ctx) = 0;

  virtual void enterAssignmentexpression(CPP14Parser::AssignmentexpressionContext *ctx) = 0;
  virtual void exitAssignmentexpression(CPP14Parser::AssignmentexpressionContext *ctx) = 0;

  virtual void enterAssignmentoperator(CPP14Parser::AssignmentoperatorContext *ctx) = 0;
  virtual void exitAssignmentoperator(CPP14Parser::AssignmentoperatorContext *ctx) = 0;

  virtual void enterExpression(CPP14Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CPP14Parser::ExpressionContext *ctx) = 0;

  virtual void enterConstantexpression(CPP14Parser::ConstantexpressionContext *ctx) = 0;
  virtual void exitConstantexpression(CPP14Parser::ConstantexpressionContext *ctx) = 0;

  virtual void enterStatement(CPP14Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(CPP14Parser::StatementContext *ctx) = 0;

  virtual void enterLabeledstatement(CPP14Parser::LabeledstatementContext *ctx) = 0;
  virtual void exitLabeledstatement(CPP14Parser::LabeledstatementContext *ctx) = 0;

  virtual void enterExpressionstatement(CPP14Parser::ExpressionstatementContext *ctx) = 0;
  virtual void exitExpressionstatement(CPP14Parser::ExpressionstatementContext *ctx) = 0;

  virtual void enterCompoundstatement(CPP14Parser::CompoundstatementContext *ctx) = 0;
  virtual void exitCompoundstatement(CPP14Parser::CompoundstatementContext *ctx) = 0;

  virtual void enterStatementseq(CPP14Parser::StatementseqContext *ctx) = 0;
  virtual void exitStatementseq(CPP14Parser::StatementseqContext *ctx) = 0;

  virtual void enterSelectionstatement(CPP14Parser::SelectionstatementContext *ctx) = 0;
  virtual void exitSelectionstatement(CPP14Parser::SelectionstatementContext *ctx) = 0;

  virtual void enterCondition(CPP14Parser::ConditionContext *ctx) = 0;
  virtual void exitCondition(CPP14Parser::ConditionContext *ctx) = 0;

  virtual void enterIterationstatement(CPP14Parser::IterationstatementContext *ctx) = 0;
  virtual void exitIterationstatement(CPP14Parser::IterationstatementContext *ctx) = 0;

  virtual void enterForinitstatement(CPP14Parser::ForinitstatementContext *ctx) = 0;
  virtual void exitForinitstatement(CPP14Parser::ForinitstatementContext *ctx) = 0;

  virtual void enterForrangedeclaration(CPP14Parser::ForrangedeclarationContext *ctx) = 0;
  virtual void exitForrangedeclaration(CPP14Parser::ForrangedeclarationContext *ctx) = 0;

  virtual void enterForrangeinitializer(CPP14Parser::ForrangeinitializerContext *ctx) = 0;
  virtual void exitForrangeinitializer(CPP14Parser::ForrangeinitializerContext *ctx) = 0;

  virtual void enterJumpstatement(CPP14Parser::JumpstatementContext *ctx) = 0;
  virtual void exitJumpstatement(CPP14Parser::JumpstatementContext *ctx) = 0;

  virtual void enterDeclarationstatement(CPP14Parser::DeclarationstatementContext *ctx) = 0;
  virtual void exitDeclarationstatement(CPP14Parser::DeclarationstatementContext *ctx) = 0;

  virtual void enterDeclarationseq(CPP14Parser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(CPP14Parser::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(CPP14Parser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CPP14Parser::DeclarationContext *ctx) = 0;

  virtual void enterBlockdeclaration(CPP14Parser::BlockdeclarationContext *ctx) = 0;
  virtual void exitBlockdeclaration(CPP14Parser::BlockdeclarationContext *ctx) = 0;

  virtual void enterAliasdeclaration(CPP14Parser::AliasdeclarationContext *ctx) = 0;
  virtual void exitAliasdeclaration(CPP14Parser::AliasdeclarationContext *ctx) = 0;

  virtual void enterSimpledeclaration(CPP14Parser::SimpledeclarationContext *ctx) = 0;
  virtual void exitSimpledeclaration(CPP14Parser::SimpledeclarationContext *ctx) = 0;

  virtual void enterStatic_assertdeclaration(CPP14Parser::Static_assertdeclarationContext *ctx) = 0;
  virtual void exitStatic_assertdeclaration(CPP14Parser::Static_assertdeclarationContext *ctx) = 0;

  virtual void enterEmptydeclaration(CPP14Parser::EmptydeclarationContext *ctx) = 0;
  virtual void exitEmptydeclaration(CPP14Parser::EmptydeclarationContext *ctx) = 0;

  virtual void enterAttributedeclaration(CPP14Parser::AttributedeclarationContext *ctx) = 0;
  virtual void exitAttributedeclaration(CPP14Parser::AttributedeclarationContext *ctx) = 0;

  virtual void enterDeclspecifier(CPP14Parser::DeclspecifierContext *ctx) = 0;
  virtual void exitDeclspecifier(CPP14Parser::DeclspecifierContext *ctx) = 0;

  virtual void enterDeclspecifierseq(CPP14Parser::DeclspecifierseqContext *ctx) = 0;
  virtual void exitDeclspecifierseq(CPP14Parser::DeclspecifierseqContext *ctx) = 0;

  virtual void enterStorageclassspecifier(CPP14Parser::StorageclassspecifierContext *ctx) = 0;
  virtual void exitStorageclassspecifier(CPP14Parser::StorageclassspecifierContext *ctx) = 0;

  virtual void enterFunctionspecifier(CPP14Parser::FunctionspecifierContext *ctx) = 0;
  virtual void exitFunctionspecifier(CPP14Parser::FunctionspecifierContext *ctx) = 0;

  virtual void enterTypedefname(CPP14Parser::TypedefnameContext *ctx) = 0;
  virtual void exitTypedefname(CPP14Parser::TypedefnameContext *ctx) = 0;

  virtual void enterTypespecifier(CPP14Parser::TypespecifierContext *ctx) = 0;
  virtual void exitTypespecifier(CPP14Parser::TypespecifierContext *ctx) = 0;

  virtual void enterTrailingtypespecifier(CPP14Parser::TrailingtypespecifierContext *ctx) = 0;
  virtual void exitTrailingtypespecifier(CPP14Parser::TrailingtypespecifierContext *ctx) = 0;

  virtual void enterTypespecifierseq(CPP14Parser::TypespecifierseqContext *ctx) = 0;
  virtual void exitTypespecifierseq(CPP14Parser::TypespecifierseqContext *ctx) = 0;

  virtual void enterTrailingtypespecifierseq(CPP14Parser::TrailingtypespecifierseqContext *ctx) = 0;
  virtual void exitTrailingtypespecifierseq(CPP14Parser::TrailingtypespecifierseqContext *ctx) = 0;

  virtual void enterSimpletypespecifier(CPP14Parser::SimpletypespecifierContext *ctx) = 0;
  virtual void exitSimpletypespecifier(CPP14Parser::SimpletypespecifierContext *ctx) = 0;

  virtual void enterThetypename(CPP14Parser::ThetypenameContext *ctx) = 0;
  virtual void exitThetypename(CPP14Parser::ThetypenameContext *ctx) = 0;

  virtual void enterDecltypespecifier(CPP14Parser::DecltypespecifierContext *ctx) = 0;
  virtual void exitDecltypespecifier(CPP14Parser::DecltypespecifierContext *ctx) = 0;

  virtual void enterElaboratedtypespecifier(CPP14Parser::ElaboratedtypespecifierContext *ctx) = 0;
  virtual void exitElaboratedtypespecifier(CPP14Parser::ElaboratedtypespecifierContext *ctx) = 0;

  virtual void enterEnumname(CPP14Parser::EnumnameContext *ctx) = 0;
  virtual void exitEnumname(CPP14Parser::EnumnameContext *ctx) = 0;

  virtual void enterEnumspecifier(CPP14Parser::EnumspecifierContext *ctx) = 0;
  virtual void exitEnumspecifier(CPP14Parser::EnumspecifierContext *ctx) = 0;

  virtual void enterEnumhead(CPP14Parser::EnumheadContext *ctx) = 0;
  virtual void exitEnumhead(CPP14Parser::EnumheadContext *ctx) = 0;

  virtual void enterOpaqueenumdeclaration(CPP14Parser::OpaqueenumdeclarationContext *ctx) = 0;
  virtual void exitOpaqueenumdeclaration(CPP14Parser::OpaqueenumdeclarationContext *ctx) = 0;

  virtual void enterEnumkey(CPP14Parser::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(CPP14Parser::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(CPP14Parser::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(CPP14Parser::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorlist(CPP14Parser::EnumeratorlistContext *ctx) = 0;
  virtual void exitEnumeratorlist(CPP14Parser::EnumeratorlistContext *ctx) = 0;

  virtual void enterEnumeratordefinition(CPP14Parser::EnumeratordefinitionContext *ctx) = 0;
  virtual void exitEnumeratordefinition(CPP14Parser::EnumeratordefinitionContext *ctx) = 0;

  virtual void enterEnumerator(CPP14Parser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(CPP14Parser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespacename(CPP14Parser::NamespacenameContext *ctx) = 0;
  virtual void exitNamespacename(CPP14Parser::NamespacenameContext *ctx) = 0;

  virtual void enterOriginalnamespacename(CPP14Parser::OriginalnamespacenameContext *ctx) = 0;
  virtual void exitOriginalnamespacename(CPP14Parser::OriginalnamespacenameContext *ctx) = 0;

  virtual void enterNamespacedefinition(CPP14Parser::NamespacedefinitionContext *ctx) = 0;
  virtual void exitNamespacedefinition(CPP14Parser::NamespacedefinitionContext *ctx) = 0;

  virtual void enterNamednamespacedefinition(CPP14Parser::NamednamespacedefinitionContext *ctx) = 0;
  virtual void exitNamednamespacedefinition(CPP14Parser::NamednamespacedefinitionContext *ctx) = 0;

  virtual void enterOriginalnamespacedefinition(CPP14Parser::OriginalnamespacedefinitionContext *ctx) = 0;
  virtual void exitOriginalnamespacedefinition(CPP14Parser::OriginalnamespacedefinitionContext *ctx) = 0;

  virtual void enterExtensionnamespacedefinition(CPP14Parser::ExtensionnamespacedefinitionContext *ctx) = 0;
  virtual void exitExtensionnamespacedefinition(CPP14Parser::ExtensionnamespacedefinitionContext *ctx) = 0;

  virtual void enterUnnamednamespacedefinition(CPP14Parser::UnnamednamespacedefinitionContext *ctx) = 0;
  virtual void exitUnnamednamespacedefinition(CPP14Parser::UnnamednamespacedefinitionContext *ctx) = 0;

  virtual void enterNamespacebody(CPP14Parser::NamespacebodyContext *ctx) = 0;
  virtual void exitNamespacebody(CPP14Parser::NamespacebodyContext *ctx) = 0;

  virtual void enterNamespacealias(CPP14Parser::NamespacealiasContext *ctx) = 0;
  virtual void exitNamespacealias(CPP14Parser::NamespacealiasContext *ctx) = 0;

  virtual void enterNamespacealiasdefinition(CPP14Parser::NamespacealiasdefinitionContext *ctx) = 0;
  virtual void exitNamespacealiasdefinition(CPP14Parser::NamespacealiasdefinitionContext *ctx) = 0;

  virtual void enterQualifiednamespacespecifier(CPP14Parser::QualifiednamespacespecifierContext *ctx) = 0;
  virtual void exitQualifiednamespacespecifier(CPP14Parser::QualifiednamespacespecifierContext *ctx) = 0;

  virtual void enterUsingdeclaration(CPP14Parser::UsingdeclarationContext *ctx) = 0;
  virtual void exitUsingdeclaration(CPP14Parser::UsingdeclarationContext *ctx) = 0;

  virtual void enterUsingdirective(CPP14Parser::UsingdirectiveContext *ctx) = 0;
  virtual void exitUsingdirective(CPP14Parser::UsingdirectiveContext *ctx) = 0;

  virtual void enterAsmdefinition(CPP14Parser::AsmdefinitionContext *ctx) = 0;
  virtual void exitAsmdefinition(CPP14Parser::AsmdefinitionContext *ctx) = 0;

  virtual void enterLinkagespecification(CPP14Parser::LinkagespecificationContext *ctx) = 0;
  virtual void exitLinkagespecification(CPP14Parser::LinkagespecificationContext *ctx) = 0;

  virtual void enterAttributespecifierseq(CPP14Parser::AttributespecifierseqContext *ctx) = 0;
  virtual void exitAttributespecifierseq(CPP14Parser::AttributespecifierseqContext *ctx) = 0;

  virtual void enterAttributespecifier(CPP14Parser::AttributespecifierContext *ctx) = 0;
  virtual void exitAttributespecifier(CPP14Parser::AttributespecifierContext *ctx) = 0;

  virtual void enterAlignmentspecifier(CPP14Parser::AlignmentspecifierContext *ctx) = 0;
  virtual void exitAlignmentspecifier(CPP14Parser::AlignmentspecifierContext *ctx) = 0;

  virtual void enterAttributelist(CPP14Parser::AttributelistContext *ctx) = 0;
  virtual void exitAttributelist(CPP14Parser::AttributelistContext *ctx) = 0;

  virtual void enterAttribute(CPP14Parser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(CPP14Parser::AttributeContext *ctx) = 0;

  virtual void enterAttributetoken(CPP14Parser::AttributetokenContext *ctx) = 0;
  virtual void exitAttributetoken(CPP14Parser::AttributetokenContext *ctx) = 0;

  virtual void enterAttributescopedtoken(CPP14Parser::AttributescopedtokenContext *ctx) = 0;
  virtual void exitAttributescopedtoken(CPP14Parser::AttributescopedtokenContext *ctx) = 0;

  virtual void enterAttributenamespace(CPP14Parser::AttributenamespaceContext *ctx) = 0;
  virtual void exitAttributenamespace(CPP14Parser::AttributenamespaceContext *ctx) = 0;

  virtual void enterAttributeargumentclause(CPP14Parser::AttributeargumentclauseContext *ctx) = 0;
  virtual void exitAttributeargumentclause(CPP14Parser::AttributeargumentclauseContext *ctx) = 0;

  virtual void enterBalancedtokenseq(CPP14Parser::BalancedtokenseqContext *ctx) = 0;
  virtual void exitBalancedtokenseq(CPP14Parser::BalancedtokenseqContext *ctx) = 0;

  virtual void enterBalancedtoken(CPP14Parser::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(CPP14Parser::BalancedtokenContext *ctx) = 0;

  virtual void enterInitdeclaratorlist(CPP14Parser::InitdeclaratorlistContext *ctx) = 0;
  virtual void exitInitdeclaratorlist(CPP14Parser::InitdeclaratorlistContext *ctx) = 0;

  virtual void enterInitdeclarator(CPP14Parser::InitdeclaratorContext *ctx) = 0;
  virtual void exitInitdeclarator(CPP14Parser::InitdeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(CPP14Parser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(CPP14Parser::DeclaratorContext *ctx) = 0;

  virtual void enterPtrdeclarator(CPP14Parser::PtrdeclaratorContext *ctx) = 0;
  virtual void exitPtrdeclarator(CPP14Parser::PtrdeclaratorContext *ctx) = 0;

  virtual void enterNoptrdeclarator(CPP14Parser::NoptrdeclaratorContext *ctx) = 0;
  virtual void exitNoptrdeclarator(CPP14Parser::NoptrdeclaratorContext *ctx) = 0;

  virtual void enterParametersandqualifiers(CPP14Parser::ParametersandqualifiersContext *ctx) = 0;
  virtual void exitParametersandqualifiers(CPP14Parser::ParametersandqualifiersContext *ctx) = 0;

  virtual void enterTrailingreturntype(CPP14Parser::TrailingreturntypeContext *ctx) = 0;
  virtual void exitTrailingreturntype(CPP14Parser::TrailingreturntypeContext *ctx) = 0;

  virtual void enterPtroperator(CPP14Parser::PtroperatorContext *ctx) = 0;
  virtual void exitPtroperator(CPP14Parser::PtroperatorContext *ctx) = 0;

  virtual void enterCvqualifierseq(CPP14Parser::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(CPP14Parser::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvqualifier(CPP14Parser::CvqualifierContext *ctx) = 0;
  virtual void exitCvqualifier(CPP14Parser::CvqualifierContext *ctx) = 0;

  virtual void enterRefqualifier(CPP14Parser::RefqualifierContext *ctx) = 0;
  virtual void exitRefqualifier(CPP14Parser::RefqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(CPP14Parser::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(CPP14Parser::DeclaratoridContext *ctx) = 0;

  virtual void enterThetypeid(CPP14Parser::ThetypeidContext *ctx) = 0;
  virtual void exitThetypeid(CPP14Parser::ThetypeidContext *ctx) = 0;

  virtual void enterAbstractdeclarator(CPP14Parser::AbstractdeclaratorContext *ctx) = 0;
  virtual void exitAbstractdeclarator(CPP14Parser::AbstractdeclaratorContext *ctx) = 0;

  virtual void enterPtrabstractdeclarator(CPP14Parser::PtrabstractdeclaratorContext *ctx) = 0;
  virtual void exitPtrabstractdeclarator(CPP14Parser::PtrabstractdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractdeclarator(CPP14Parser::NoptrabstractdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractdeclarator(CPP14Parser::NoptrabstractdeclaratorContext *ctx) = 0;

  virtual void enterAbstractpackdeclarator(CPP14Parser::AbstractpackdeclaratorContext *ctx) = 0;
  virtual void exitAbstractpackdeclarator(CPP14Parser::AbstractpackdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractpackdeclarator(CPP14Parser::NoptrabstractpackdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractpackdeclarator(CPP14Parser::NoptrabstractpackdeclaratorContext *ctx) = 0;

  virtual void enterParameterdeclarationclause(CPP14Parser::ParameterdeclarationclauseContext *ctx) = 0;
  virtual void exitParameterdeclarationclause(CPP14Parser::ParameterdeclarationclauseContext *ctx) = 0;

  virtual void enterParameterdeclarationlist(CPP14Parser::ParameterdeclarationlistContext *ctx) = 0;
  virtual void exitParameterdeclarationlist(CPP14Parser::ParameterdeclarationlistContext *ctx) = 0;

  virtual void enterParameterdeclaration(CPP14Parser::ParameterdeclarationContext *ctx) = 0;
  virtual void exitParameterdeclaration(CPP14Parser::ParameterdeclarationContext *ctx) = 0;

  virtual void enterFunctiondefinition(CPP14Parser::FunctiondefinitionContext *ctx) = 0;
  virtual void exitFunctiondefinition(CPP14Parser::FunctiondefinitionContext *ctx) = 0;

  virtual void enterFunctionbody(CPP14Parser::FunctionbodyContext *ctx) = 0;
  virtual void exitFunctionbody(CPP14Parser::FunctionbodyContext *ctx) = 0;

  virtual void enterInitializer(CPP14Parser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(CPP14Parser::InitializerContext *ctx) = 0;

  virtual void enterBraceorequalinitializer(CPP14Parser::BraceorequalinitializerContext *ctx) = 0;
  virtual void exitBraceorequalinitializer(CPP14Parser::BraceorequalinitializerContext *ctx) = 0;

  virtual void enterInitializerclause(CPP14Parser::InitializerclauseContext *ctx) = 0;
  virtual void exitInitializerclause(CPP14Parser::InitializerclauseContext *ctx) = 0;

  virtual void enterInitializerlist(CPP14Parser::InitializerlistContext *ctx) = 0;
  virtual void exitInitializerlist(CPP14Parser::InitializerlistContext *ctx) = 0;

  virtual void enterBracedinitlist(CPP14Parser::BracedinitlistContext *ctx) = 0;
  virtual void exitBracedinitlist(CPP14Parser::BracedinitlistContext *ctx) = 0;

  virtual void enterClassname(CPP14Parser::ClassnameContext *ctx) = 0;
  virtual void exitClassname(CPP14Parser::ClassnameContext *ctx) = 0;

  virtual void enterClassspecifier(CPP14Parser::ClassspecifierContext *ctx) = 0;
  virtual void exitClassspecifier(CPP14Parser::ClassspecifierContext *ctx) = 0;

  virtual void enterClasshead(CPP14Parser::ClassheadContext *ctx) = 0;
  virtual void exitClasshead(CPP14Parser::ClassheadContext *ctx) = 0;

  virtual void enterClassheadname(CPP14Parser::ClassheadnameContext *ctx) = 0;
  virtual void exitClassheadname(CPP14Parser::ClassheadnameContext *ctx) = 0;

  virtual void enterClassvirtspecifier(CPP14Parser::ClassvirtspecifierContext *ctx) = 0;
  virtual void exitClassvirtspecifier(CPP14Parser::ClassvirtspecifierContext *ctx) = 0;

  virtual void enterClasskey(CPP14Parser::ClasskeyContext *ctx) = 0;
  virtual void exitClasskey(CPP14Parser::ClasskeyContext *ctx) = 0;

  virtual void enterMemberspecification(CPP14Parser::MemberspecificationContext *ctx) = 0;
  virtual void exitMemberspecification(CPP14Parser::MemberspecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(CPP14Parser::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(CPP14Parser::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberdeclaratorlist(CPP14Parser::MemberdeclaratorlistContext *ctx) = 0;
  virtual void exitMemberdeclaratorlist(CPP14Parser::MemberdeclaratorlistContext *ctx) = 0;

  virtual void enterMemberdeclarator(CPP14Parser::MemberdeclaratorContext *ctx) = 0;
  virtual void exitMemberdeclarator(CPP14Parser::MemberdeclaratorContext *ctx) = 0;

  virtual void enterVirtspecifierseq(CPP14Parser::VirtspecifierseqContext *ctx) = 0;
  virtual void exitVirtspecifierseq(CPP14Parser::VirtspecifierseqContext *ctx) = 0;

  virtual void enterVirtspecifier(CPP14Parser::VirtspecifierContext *ctx) = 0;
  virtual void exitVirtspecifier(CPP14Parser::VirtspecifierContext *ctx) = 0;

  virtual void enterPurespecifier(CPP14Parser::PurespecifierContext *ctx) = 0;
  virtual void exitPurespecifier(CPP14Parser::PurespecifierContext *ctx) = 0;

  virtual void enterBaseclause(CPP14Parser::BaseclauseContext *ctx) = 0;
  virtual void exitBaseclause(CPP14Parser::BaseclauseContext *ctx) = 0;

  virtual void enterBasespecifierlist(CPP14Parser::BasespecifierlistContext *ctx) = 0;
  virtual void exitBasespecifierlist(CPP14Parser::BasespecifierlistContext *ctx) = 0;

  virtual void enterBasespecifier(CPP14Parser::BasespecifierContext *ctx) = 0;
  virtual void exitBasespecifier(CPP14Parser::BasespecifierContext *ctx) = 0;

  virtual void enterClassordecltype(CPP14Parser::ClassordecltypeContext *ctx) = 0;
  virtual void exitClassordecltype(CPP14Parser::ClassordecltypeContext *ctx) = 0;

  virtual void enterBasetypespecifier(CPP14Parser::BasetypespecifierContext *ctx) = 0;
  virtual void exitBasetypespecifier(CPP14Parser::BasetypespecifierContext *ctx) = 0;

  virtual void enterAccessspecifier(CPP14Parser::AccessspecifierContext *ctx) = 0;
  virtual void exitAccessspecifier(CPP14Parser::AccessspecifierContext *ctx) = 0;

  virtual void enterConversionfunctionid(CPP14Parser::ConversionfunctionidContext *ctx) = 0;
  virtual void exitConversionfunctionid(CPP14Parser::ConversionfunctionidContext *ctx) = 0;

  virtual void enterConversiontypeid(CPP14Parser::ConversiontypeidContext *ctx) = 0;
  virtual void exitConversiontypeid(CPP14Parser::ConversiontypeidContext *ctx) = 0;

  virtual void enterConversiondeclarator(CPP14Parser::ConversiondeclaratorContext *ctx) = 0;
  virtual void exitConversiondeclarator(CPP14Parser::ConversiondeclaratorContext *ctx) = 0;

  virtual void enterCtorinitializer(CPP14Parser::CtorinitializerContext *ctx) = 0;
  virtual void exitCtorinitializer(CPP14Parser::CtorinitializerContext *ctx) = 0;

  virtual void enterMeminitializerlist(CPP14Parser::MeminitializerlistContext *ctx) = 0;
  virtual void exitMeminitializerlist(CPP14Parser::MeminitializerlistContext *ctx) = 0;

  virtual void enterMeminitializer(CPP14Parser::MeminitializerContext *ctx) = 0;
  virtual void exitMeminitializer(CPP14Parser::MeminitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(CPP14Parser::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(CPP14Parser::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorfunctionid(CPP14Parser::OperatorfunctionidContext *ctx) = 0;
  virtual void exitOperatorfunctionid(CPP14Parser::OperatorfunctionidContext *ctx) = 0;

  virtual void enterLiteraloperatorid(CPP14Parser::LiteraloperatoridContext *ctx) = 0;
  virtual void exitLiteraloperatorid(CPP14Parser::LiteraloperatoridContext *ctx) = 0;

  virtual void enterTemplatedeclaration(CPP14Parser::TemplatedeclarationContext *ctx) = 0;
  virtual void exitTemplatedeclaration(CPP14Parser::TemplatedeclarationContext *ctx) = 0;

  virtual void enterTemplateparameterlist(CPP14Parser::TemplateparameterlistContext *ctx) = 0;
  virtual void exitTemplateparameterlist(CPP14Parser::TemplateparameterlistContext *ctx) = 0;

  virtual void enterTemplateparameter(CPP14Parser::TemplateparameterContext *ctx) = 0;
  virtual void exitTemplateparameter(CPP14Parser::TemplateparameterContext *ctx) = 0;

  virtual void enterTypeparameter(CPP14Parser::TypeparameterContext *ctx) = 0;
  virtual void exitTypeparameter(CPP14Parser::TypeparameterContext *ctx) = 0;

  virtual void enterSimpletemplateid(CPP14Parser::SimpletemplateidContext *ctx) = 0;
  virtual void exitSimpletemplateid(CPP14Parser::SimpletemplateidContext *ctx) = 0;

  virtual void enterTemplateid(CPP14Parser::TemplateidContext *ctx) = 0;
  virtual void exitTemplateid(CPP14Parser::TemplateidContext *ctx) = 0;

  virtual void enterTemplatename(CPP14Parser::TemplatenameContext *ctx) = 0;
  virtual void exitTemplatename(CPP14Parser::TemplatenameContext *ctx) = 0;

  virtual void enterTemplateargumentlist(CPP14Parser::TemplateargumentlistContext *ctx) = 0;
  virtual void exitTemplateargumentlist(CPP14Parser::TemplateargumentlistContext *ctx) = 0;

  virtual void enterTemplateargument(CPP14Parser::TemplateargumentContext *ctx) = 0;
  virtual void exitTemplateargument(CPP14Parser::TemplateargumentContext *ctx) = 0;

  virtual void enterTypenamespecifier(CPP14Parser::TypenamespecifierContext *ctx) = 0;
  virtual void exitTypenamespecifier(CPP14Parser::TypenamespecifierContext *ctx) = 0;

  virtual void enterExplicitinstantiation(CPP14Parser::ExplicitinstantiationContext *ctx) = 0;
  virtual void exitExplicitinstantiation(CPP14Parser::ExplicitinstantiationContext *ctx) = 0;

  virtual void enterExplicitspecialization(CPP14Parser::ExplicitspecializationContext *ctx) = 0;
  virtual void exitExplicitspecialization(CPP14Parser::ExplicitspecializationContext *ctx) = 0;

  virtual void enterTryblock(CPP14Parser::TryblockContext *ctx) = 0;
  virtual void exitTryblock(CPP14Parser::TryblockContext *ctx) = 0;

  virtual void enterFunctiontryblock(CPP14Parser::FunctiontryblockContext *ctx) = 0;
  virtual void exitFunctiontryblock(CPP14Parser::FunctiontryblockContext *ctx) = 0;

  virtual void enterHandlerseq(CPP14Parser::HandlerseqContext *ctx) = 0;
  virtual void exitHandlerseq(CPP14Parser::HandlerseqContext *ctx) = 0;

  virtual void enterHandler(CPP14Parser::HandlerContext *ctx) = 0;
  virtual void exitHandler(CPP14Parser::HandlerContext *ctx) = 0;

  virtual void enterExceptiondeclaration(CPP14Parser::ExceptiondeclarationContext *ctx) = 0;
  virtual void exitExceptiondeclaration(CPP14Parser::ExceptiondeclarationContext *ctx) = 0;

  virtual void enterThrowexpression(CPP14Parser::ThrowexpressionContext *ctx) = 0;
  virtual void exitThrowexpression(CPP14Parser::ThrowexpressionContext *ctx) = 0;

  virtual void enterExceptionspecification(CPP14Parser::ExceptionspecificationContext *ctx) = 0;
  virtual void exitExceptionspecification(CPP14Parser::ExceptionspecificationContext *ctx) = 0;

  virtual void enterDynamicexceptionspecification(CPP14Parser::DynamicexceptionspecificationContext *ctx) = 0;
  virtual void exitDynamicexceptionspecification(CPP14Parser::DynamicexceptionspecificationContext *ctx) = 0;

  virtual void enterTypeidlist(CPP14Parser::TypeidlistContext *ctx) = 0;
  virtual void exitTypeidlist(CPP14Parser::TypeidlistContext *ctx) = 0;

  virtual void enterNoexceptspecification(CPP14Parser::NoexceptspecificationContext *ctx) = 0;
  virtual void exitNoexceptspecification(CPP14Parser::NoexceptspecificationContext *ctx) = 0;

  virtual void enterTheoperator(CPP14Parser::TheoperatorContext *ctx) = 0;
  virtual void exitTheoperator(CPP14Parser::TheoperatorContext *ctx) = 0;

  virtual void enterLiteral(CPP14Parser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CPP14Parser::LiteralContext *ctx) = 0;

  virtual void enterBooleanliteral(CPP14Parser::BooleanliteralContext *ctx) = 0;
  virtual void exitBooleanliteral(CPP14Parser::BooleanliteralContext *ctx) = 0;

  virtual void enterPointerliteral(CPP14Parser::PointerliteralContext *ctx) = 0;
  virtual void exitPointerliteral(CPP14Parser::PointerliteralContext *ctx) = 0;

  virtual void enterUserdefinedliteral(CPP14Parser::UserdefinedliteralContext *ctx) = 0;
  virtual void exitUserdefinedliteral(CPP14Parser::UserdefinedliteralContext *ctx) = 0;


};

