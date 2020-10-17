
// Generated from modelica.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "modelicaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by modelicaParser.
 */
class  modelicaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by modelicaParser.
   */
    virtual antlrcpp::Any visitProgram(modelicaParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitData_type(modelicaParser::Data_typeContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(modelicaParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitString(modelicaParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitConstant(modelicaParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitUnary_op(modelicaParser::Unary_opContext *context) = 0;

    virtual antlrcpp::Any visitBinary_op(modelicaParser::Binary_opContext *context) = 0;

    virtual antlrcpp::Any visitBinary_minus(modelicaParser::Binary_minusContext *context) = 0;

    virtual antlrcpp::Any visitBinary_logical(modelicaParser::Binary_logicalContext *context) = 0;

    virtual antlrcpp::Any visitBinary_mdr(modelicaParser::Binary_mdrContext *context) = 0;

    virtual antlrcpp::Any visitBinary_as(modelicaParser::Binary_asContext *context) = 0;

    virtual antlrcpp::Any visitBinary_rel(modelicaParser::Binary_relContext *context) = 0;

    virtual antlrcpp::Any visitBinary_eq(modelicaParser::Binary_eqContext *context) = 0;

    virtual antlrcpp::Any visitCont(modelicaParser::ContContext *context) = 0;

    virtual antlrcpp::Any visitRet(modelicaParser::RetContext *context) = 0;

    virtual antlrcpp::Any visitEl_if(modelicaParser::El_ifContext *context) = 0;

    virtual antlrcpp::Any visitInput(modelicaParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitOutput(modelicaParser::OutputContext *context) = 0;

    virtual antlrcpp::Any visitEmpty(modelicaParser::EmptyContext *context) = 0;

    virtual antlrcpp::Any visitInput_stmt(modelicaParser::Input_stmtContext *context) = 0;

    virtual antlrcpp::Any visitOut_stmt(modelicaParser::Out_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(modelicaParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier_var(modelicaParser::Identifier_varContext *context) = 0;

    virtual antlrcpp::Any visitConstant_lit(modelicaParser::Constant_litContext *context) = 0;

    virtual antlrcpp::Any visitFunction_calling(modelicaParser::Function_callingContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(modelicaParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitParameter(modelicaParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitAnd_bop_expr(modelicaParser::And_bop_exprContext *context) = 0;

    virtual antlrcpp::Any visitRelational_exps(modelicaParser::Relational_expsContext *context) = 0;

    virtual antlrcpp::Any visitExpr_equality(modelicaParser::Expr_equalityContext *context) = 0;

    virtual antlrcpp::Any visitValue_expr(modelicaParser::Value_exprContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_rem_expr(modelicaParser::Mul_div_rem_exprContext *context) = 0;

    virtual antlrcpp::Any visitArray_expr(modelicaParser::Array_exprContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expr(modelicaParser::Unary_exprContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_exps(modelicaParser::Add_sub_expsContext *context) = 0;

    virtual antlrcpp::Any visitExpr_binop_expr(modelicaParser::Expr_binop_exprContext *context) = 0;

    virtual antlrcpp::Any visitNegative_numbers(modelicaParser::Negative_numbersContext *context) = 0;

    virtual antlrcpp::Any visitLogical_not(modelicaParser::Logical_notContext *context) = 0;

    virtual antlrcpp::Any visitExpr_bracket(modelicaParser::Expr_bracketContext *context) = 0;

    virtual antlrcpp::Any visitEquality_expr(modelicaParser::Equality_exprContext *context) = 0;

    virtual antlrcpp::Any visitLmao(modelicaParser::LmaoContext *context) = 0;

    virtual antlrcpp::Any visitExpr_unary(modelicaParser::Expr_unaryContext *context) = 0;

    virtual antlrcpp::Any visitOr_bop_expr(modelicaParser::Or_bop_exprContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_call(modelicaParser::Declaration_callContext *context) = 0;

    virtual antlrcpp::Any visitExpr_call(modelicaParser::Expr_callContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call(modelicaParser::Func_callContext *context) = 0;

    virtual antlrcpp::Any visitBreak_call(modelicaParser::Break_callContext *context) = 0;

    virtual antlrcpp::Any visitContinue_call(modelicaParser::Continue_callContext *context) = 0;

    virtual antlrcpp::Any visitInput_call(modelicaParser::Input_callContext *context) = 0;

    virtual antlrcpp::Any visitOut_call(modelicaParser::Out_callContext *context) = 0;

    virtual antlrcpp::Any visitIf_call(modelicaParser::If_callContext *context) = 0;

    virtual antlrcpp::Any visitElse_call(modelicaParser::Else_callContext *context) = 0;

    virtual antlrcpp::Any visitFor_call(modelicaParser::For_callContext *context) = 0;

    virtual antlrcpp::Any visitReturn_call(modelicaParser::Return_callContext *context) = 0;

    virtual antlrcpp::Any visitWhile_call(modelicaParser::While_callContext *context) = 0;

    virtual antlrcpp::Any visitBlock(modelicaParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(modelicaParser::While_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFor_stmt(modelicaParser::For_stmtContext *context) = 0;

    virtual antlrcpp::Any visitTernary_stmt(modelicaParser::Ternary_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(modelicaParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitElse_stmt(modelicaParser::Else_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFunction_def(modelicaParser::Function_defContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(modelicaParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitO_c_b(modelicaParser::O_c_bContext *context) = 0;

    virtual antlrcpp::Any visitC_c_b(modelicaParser::C_c_bContext *context) = 0;

    virtual antlrcpp::Any visitO_s_b(modelicaParser::O_s_bContext *context) = 0;

    virtual antlrcpp::Any visitC_s_b(modelicaParser::C_s_bContext *context) = 0;

    virtual antlrcpp::Any visitQ_mark(modelicaParser::Q_markContext *context) = 0;

    virtual antlrcpp::Any visitSemi_c(modelicaParser::Semi_cContext *context) = 0;

    virtual antlrcpp::Any visitColon(modelicaParser::ColonContext *context) = 0;

    virtual antlrcpp::Any visitL_o_b(modelicaParser::L_o_bContext *context) = 0;

    virtual antlrcpp::Any visitR_c_b(modelicaParser::R_c_bContext *context) = 0;

    virtual antlrcpp::Any visitAdd(modelicaParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitSubtract(modelicaParser::SubtractContext *context) = 0;

    virtual antlrcpp::Any visitQuotes(modelicaParser::QuotesContext *context) = 0;

    virtual antlrcpp::Any visitMultiply(modelicaParser::MultiplyContext *context) = 0;

    virtual antlrcpp::Any visitDivide(modelicaParser::DivideContext *context) = 0;

    virtual antlrcpp::Any visitGt(modelicaParser::GtContext *context) = 0;

    virtual antlrcpp::Any visitLt(modelicaParser::LtContext *context) = 0;

    virtual antlrcpp::Any visitEq(modelicaParser::EqContext *context) = 0;

    virtual antlrcpp::Any visitEquals(modelicaParser::EqualsContext *context) = 0;

    virtual antlrcpp::Any visitNot_equals(modelicaParser::Not_equalsContext *context) = 0;

    virtual antlrcpp::Any visitLt_equal(modelicaParser::Lt_equalContext *context) = 0;

    virtual antlrcpp::Any visitGt_equal(modelicaParser::Gt_equalContext *context) = 0;

    virtual antlrcpp::Any visitOr_bop(modelicaParser::Or_bopContext *context) = 0;

    virtual antlrcpp::Any visitAnd_bop(modelicaParser::And_bopContext *context) = 0;

    virtual antlrcpp::Any visitNegation(modelicaParser::NegationContext *context) = 0;

    virtual antlrcpp::Any visitPlus_equal(modelicaParser::Plus_equalContext *context) = 0;

    virtual antlrcpp::Any visitLeft_shift(modelicaParser::Left_shiftContext *context) = 0;

    virtual antlrcpp::Any visitRight_shift(modelicaParser::Right_shiftContext *context) = 0;

    virtual antlrcpp::Any visitPoint(modelicaParser::PointContext *context) = 0;

    virtual antlrcpp::Any visitComma(modelicaParser::CommaContext *context) = 0;

    virtual antlrcpp::Any visitMod(modelicaParser::ModContext *context) = 0;


};

