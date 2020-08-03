
// Generated from CPP14.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CPP14Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CPP14Parser.
 */
class  CPP14Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CPP14Parser.
   */
    virtual antlrcpp::Any visitTranslationunit(CPP14Parser::TranslationunitContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryexpression(CPP14Parser::PrimaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdexpression(CPP14Parser::IdexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnqualifiedid(CPP14Parser::UnqualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedid(CPP14Parser::QualifiedidContext *context) = 0;

    virtual antlrcpp::Any visitNestednamespecifier(CPP14Parser::NestednamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitLambdaexpression(CPP14Parser::LambdaexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaintroducer(CPP14Parser::LambdaintroducerContext *context) = 0;

    virtual antlrcpp::Any visitLambdacapture(CPP14Parser::LambdacaptureContext *context) = 0;

    virtual antlrcpp::Any visitCapturedefault(CPP14Parser::CapturedefaultContext *context) = 0;

    virtual antlrcpp::Any visitCapturelist(CPP14Parser::CapturelistContext *context) = 0;

    virtual antlrcpp::Any visitCapture(CPP14Parser::CaptureContext *context) = 0;

    virtual antlrcpp::Any visitSimplecapture(CPP14Parser::SimplecaptureContext *context) = 0;

    virtual antlrcpp::Any visitInitcapture(CPP14Parser::InitcaptureContext *context) = 0;

    virtual antlrcpp::Any visitLambdadeclarator(CPP14Parser::LambdadeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPostfixexpression(CPP14Parser::PostfixexpressionContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofexpr(CPP14Parser::TypeidofexprContext *context) = 0;

    virtual antlrcpp::Any visitTypeidofthetypeid(CPP14Parser::TypeidofthetypeidContext *context) = 0;

    virtual antlrcpp::Any visitExpressionlist(CPP14Parser::ExpressionlistContext *context) = 0;

    virtual antlrcpp::Any visitPseudodestructorname(CPP14Parser::PseudodestructornameContext *context) = 0;

    virtual antlrcpp::Any visitUnaryexpression(CPP14Parser::UnaryexpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryoperator(CPP14Parser::UnaryoperatorContext *context) = 0;

    virtual antlrcpp::Any visitNewexpression(CPP14Parser::NewexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNewplacement(CPP14Parser::NewplacementContext *context) = 0;

    virtual antlrcpp::Any visitNewtypeid(CPP14Parser::NewtypeidContext *context) = 0;

    virtual antlrcpp::Any visitNewdeclarator(CPP14Parser::NewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrnewdeclarator(CPP14Parser::NoptrnewdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNewinitializer(CPP14Parser::NewinitializerContext *context) = 0;

    virtual antlrcpp::Any visitDeleteexpression(CPP14Parser::DeleteexpressionContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptexpression(CPP14Parser::NoexceptexpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastexpression(CPP14Parser::CastexpressionContext *context) = 0;

    virtual antlrcpp::Any visitPmexpression(CPP14Parser::PmexpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeexpression(CPP14Parser::MultiplicativeexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveexpression(CPP14Parser::AdditiveexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftexpression(CPP14Parser::ShiftexpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftoperator(CPP14Parser::ShiftoperatorContext *context) = 0;

    virtual antlrcpp::Any visitRelationalexpression(CPP14Parser::RelationalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityexpression(CPP14Parser::EqualityexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndexpression(CPP14Parser::AndexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveorexpression(CPP14Parser::ExclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveorexpression(CPP14Parser::InclusiveorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalandexpression(CPP14Parser::LogicalandexpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalorexpression(CPP14Parser::LogicalorexpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalexpression(CPP14Parser::ConditionalexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentexpression(CPP14Parser::AssignmentexpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentoperator(CPP14Parser::AssignmentoperatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CPP14Parser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConstantexpression(CPP14Parser::ConstantexpressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CPP14Parser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledstatement(CPP14Parser::LabeledstatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionstatement(CPP14Parser::ExpressionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundstatement(CPP14Parser::CompoundstatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementseq(CPP14Parser::StatementseqContext *context) = 0;

    virtual antlrcpp::Any visitSelectionstatement(CPP14Parser::SelectionstatementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(CPP14Parser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitIterationstatement(CPP14Parser::IterationstatementContext *context) = 0;

    virtual antlrcpp::Any visitForinitstatement(CPP14Parser::ForinitstatementContext *context) = 0;

    virtual antlrcpp::Any visitForrangedeclaration(CPP14Parser::ForrangedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitForrangeinitializer(CPP14Parser::ForrangeinitializerContext *context) = 0;

    virtual antlrcpp::Any visitJumpstatement(CPP14Parser::JumpstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationstatement(CPP14Parser::DeclarationstatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationseq(CPP14Parser::DeclarationseqContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(CPP14Parser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitBlockdeclaration(CPP14Parser::BlockdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAliasdeclaration(CPP14Parser::AliasdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSimpledeclaration(CPP14Parser::SimpledeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatic_assertdeclaration(CPP14Parser::Static_assertdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEmptydeclaration(CPP14Parser::EmptydeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAttributedeclaration(CPP14Parser::AttributedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifier(CPP14Parser::DeclspecifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclspecifierseq(CPP14Parser::DeclspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitStorageclassspecifier(CPP14Parser::StorageclassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionspecifier(CPP14Parser::FunctionspecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypedefname(CPP14Parser::TypedefnameContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifier(CPP14Parser::TypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifier(CPP14Parser::TrailingtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypespecifierseq(CPP14Parser::TypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitTrailingtypespecifierseq(CPP14Parser::TrailingtypespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitSimpletypespecifier(CPP14Parser::SimpletypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitThetypename(CPP14Parser::ThetypenameContext *context) = 0;

    virtual antlrcpp::Any visitDecltypespecifier(CPP14Parser::DecltypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitElaboratedtypespecifier(CPP14Parser::ElaboratedtypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumname(CPP14Parser::EnumnameContext *context) = 0;

    virtual antlrcpp::Any visitEnumspecifier(CPP14Parser::EnumspecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumhead(CPP14Parser::EnumheadContext *context) = 0;

    virtual antlrcpp::Any visitOpaqueenumdeclaration(CPP14Parser::OpaqueenumdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumkey(CPP14Parser::EnumkeyContext *context) = 0;

    virtual antlrcpp::Any visitEnumbase(CPP14Parser::EnumbaseContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorlist(CPP14Parser::EnumeratorlistContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratordefinition(CPP14Parser::EnumeratordefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(CPP14Parser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitNamespacename(CPP14Parser::NamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacename(CPP14Parser::OriginalnamespacenameContext *context) = 0;

    virtual antlrcpp::Any visitNamespacedefinition(CPP14Parser::NamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamednamespacedefinition(CPP14Parser::NamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitOriginalnamespacedefinition(CPP14Parser::OriginalnamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitExtensionnamespacedefinition(CPP14Parser::ExtensionnamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitUnnamednamespacedefinition(CPP14Parser::UnnamednamespacedefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamespacebody(CPP14Parser::NamespacebodyContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealias(CPP14Parser::NamespacealiasContext *context) = 0;

    virtual antlrcpp::Any visitNamespacealiasdefinition(CPP14Parser::NamespacealiasdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitQualifiednamespacespecifier(CPP14Parser::QualifiednamespacespecifierContext *context) = 0;

    virtual antlrcpp::Any visitUsingdeclaration(CPP14Parser::UsingdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUsingdirective(CPP14Parser::UsingdirectiveContext *context) = 0;

    virtual antlrcpp::Any visitAsmdefinition(CPP14Parser::AsmdefinitionContext *context) = 0;

    virtual antlrcpp::Any visitLinkagespecification(CPP14Parser::LinkagespecificationContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifierseq(CPP14Parser::AttributespecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitAttributespecifier(CPP14Parser::AttributespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAlignmentspecifier(CPP14Parser::AlignmentspecifierContext *context) = 0;

    virtual antlrcpp::Any visitAttributelist(CPP14Parser::AttributelistContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(CPP14Parser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAttributetoken(CPP14Parser::AttributetokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributescopedtoken(CPP14Parser::AttributescopedtokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributenamespace(CPP14Parser::AttributenamespaceContext *context) = 0;

    virtual antlrcpp::Any visitAttributeargumentclause(CPP14Parser::AttributeargumentclauseContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtokenseq(CPP14Parser::BalancedtokenseqContext *context) = 0;

    virtual antlrcpp::Any visitBalancedtoken(CPP14Parser::BalancedtokenContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclaratorlist(CPP14Parser::InitdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitInitdeclarator(CPP14Parser::InitdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(CPP14Parser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrdeclarator(CPP14Parser::PtrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrdeclarator(CPP14Parser::NoptrdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParametersandqualifiers(CPP14Parser::ParametersandqualifiersContext *context) = 0;

    virtual antlrcpp::Any visitTrailingreturntype(CPP14Parser::TrailingreturntypeContext *context) = 0;

    virtual antlrcpp::Any visitPtroperator(CPP14Parser::PtroperatorContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifierseq(CPP14Parser::CvqualifierseqContext *context) = 0;

    virtual antlrcpp::Any visitCvqualifier(CPP14Parser::CvqualifierContext *context) = 0;

    virtual antlrcpp::Any visitRefqualifier(CPP14Parser::RefqualifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclaratorid(CPP14Parser::DeclaratoridContext *context) = 0;

    virtual antlrcpp::Any visitThetypeid(CPP14Parser::ThetypeidContext *context) = 0;

    virtual antlrcpp::Any visitAbstractdeclarator(CPP14Parser::AbstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPtrabstractdeclarator(CPP14Parser::PtrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractdeclarator(CPP14Parser::NoptrabstractdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAbstractpackdeclarator(CPP14Parser::AbstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoptrabstractpackdeclarator(CPP14Parser::NoptrabstractpackdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationclause(CPP14Parser::ParameterdeclarationclauseContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclarationlist(CPP14Parser::ParameterdeclarationlistContext *context) = 0;

    virtual antlrcpp::Any visitParameterdeclaration(CPP14Parser::ParameterdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctiondefinition(CPP14Parser::FunctiondefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionbody(CPP14Parser::FunctionbodyContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(CPP14Parser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitBraceorequalinitializer(CPP14Parser::BraceorequalinitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerclause(CPP14Parser::InitializerclauseContext *context) = 0;

    virtual antlrcpp::Any visitInitializerlist(CPP14Parser::InitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitBracedinitlist(CPP14Parser::BracedinitlistContext *context) = 0;

    virtual antlrcpp::Any visitClassname(CPP14Parser::ClassnameContext *context) = 0;

    virtual antlrcpp::Any visitClassspecifier(CPP14Parser::ClassspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasshead(CPP14Parser::ClassheadContext *context) = 0;

    virtual antlrcpp::Any visitClassheadname(CPP14Parser::ClassheadnameContext *context) = 0;

    virtual antlrcpp::Any visitClassvirtspecifier(CPP14Parser::ClassvirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitClasskey(CPP14Parser::ClasskeyContext *context) = 0;

    virtual antlrcpp::Any visitMemberspecification(CPP14Parser::MemberspecificationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaration(CPP14Parser::MemberdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclaratorlist(CPP14Parser::MemberdeclaratorlistContext *context) = 0;

    virtual antlrcpp::Any visitMemberdeclarator(CPP14Parser::MemberdeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifierseq(CPP14Parser::VirtspecifierseqContext *context) = 0;

    virtual antlrcpp::Any visitVirtspecifier(CPP14Parser::VirtspecifierContext *context) = 0;

    virtual antlrcpp::Any visitPurespecifier(CPP14Parser::PurespecifierContext *context) = 0;

    virtual antlrcpp::Any visitBaseclause(CPP14Parser::BaseclauseContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifierlist(CPP14Parser::BasespecifierlistContext *context) = 0;

    virtual antlrcpp::Any visitBasespecifier(CPP14Parser::BasespecifierContext *context) = 0;

    virtual antlrcpp::Any visitClassordecltype(CPP14Parser::ClassordecltypeContext *context) = 0;

    virtual antlrcpp::Any visitBasetypespecifier(CPP14Parser::BasetypespecifierContext *context) = 0;

    virtual antlrcpp::Any visitAccessspecifier(CPP14Parser::AccessspecifierContext *context) = 0;

    virtual antlrcpp::Any visitConversionfunctionid(CPP14Parser::ConversionfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitConversiontypeid(CPP14Parser::ConversiontypeidContext *context) = 0;

    virtual antlrcpp::Any visitConversiondeclarator(CPP14Parser::ConversiondeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitCtorinitializer(CPP14Parser::CtorinitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerlist(CPP14Parser::MeminitializerlistContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializer(CPP14Parser::MeminitializerContext *context) = 0;

    virtual antlrcpp::Any visitMeminitializerid(CPP14Parser::MeminitializeridContext *context) = 0;

    virtual antlrcpp::Any visitOperatorfunctionid(CPP14Parser::OperatorfunctionidContext *context) = 0;

    virtual antlrcpp::Any visitLiteraloperatorid(CPP14Parser::LiteraloperatoridContext *context) = 0;

    virtual antlrcpp::Any visitTemplatedeclaration(CPP14Parser::TemplatedeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameterlist(CPP14Parser::TemplateparameterlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateparameter(CPP14Parser::TemplateparameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeparameter(CPP14Parser::TypeparameterContext *context) = 0;

    virtual antlrcpp::Any visitSimpletemplateid(CPP14Parser::SimpletemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplateid(CPP14Parser::TemplateidContext *context) = 0;

    virtual antlrcpp::Any visitTemplatename(CPP14Parser::TemplatenameContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargumentlist(CPP14Parser::TemplateargumentlistContext *context) = 0;

    virtual antlrcpp::Any visitTemplateargument(CPP14Parser::TemplateargumentContext *context) = 0;

    virtual antlrcpp::Any visitTypenamespecifier(CPP14Parser::TypenamespecifierContext *context) = 0;

    virtual antlrcpp::Any visitExplicitinstantiation(CPP14Parser::ExplicitinstantiationContext *context) = 0;

    virtual antlrcpp::Any visitExplicitspecialization(CPP14Parser::ExplicitspecializationContext *context) = 0;

    virtual antlrcpp::Any visitTryblock(CPP14Parser::TryblockContext *context) = 0;

    virtual antlrcpp::Any visitFunctiontryblock(CPP14Parser::FunctiontryblockContext *context) = 0;

    virtual antlrcpp::Any visitHandlerseq(CPP14Parser::HandlerseqContext *context) = 0;

    virtual antlrcpp::Any visitHandler(CPP14Parser::HandlerContext *context) = 0;

    virtual antlrcpp::Any visitExceptiondeclaration(CPP14Parser::ExceptiondeclarationContext *context) = 0;

    virtual antlrcpp::Any visitThrowexpression(CPP14Parser::ThrowexpressionContext *context) = 0;

    virtual antlrcpp::Any visitExceptionspecification(CPP14Parser::ExceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitDynamicexceptionspecification(CPP14Parser::DynamicexceptionspecificationContext *context) = 0;

    virtual antlrcpp::Any visitTypeidlist(CPP14Parser::TypeidlistContext *context) = 0;

    virtual antlrcpp::Any visitNoexceptspecification(CPP14Parser::NoexceptspecificationContext *context) = 0;

    virtual antlrcpp::Any visitTheoperator(CPP14Parser::TheoperatorContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(CPP14Parser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanliteral(CPP14Parser::BooleanliteralContext *context) = 0;

    virtual antlrcpp::Any visitPointerliteral(CPP14Parser::PointerliteralContext *context) = 0;

    virtual antlrcpp::Any visitUserdefinedliteral(CPP14Parser::UserdefinedliteralContext *context) = 0;


};

