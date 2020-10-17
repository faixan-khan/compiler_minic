
// Generated from modelica.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "modelicaVisitor.h"


/**
 * This class provides an empty implementation of modelicaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  modelicaBaseVisitor : public modelicaVisitor {
public:

  virtual antlrcpp::Any visitProgram(modelicaParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type(modelicaParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(modelicaParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(modelicaParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(modelicaParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_op(modelicaParser::Unary_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_op(modelicaParser::Binary_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_minus(modelicaParser::Binary_minusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_logical(modelicaParser::Binary_logicalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_mdr(modelicaParser::Binary_mdrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_as(modelicaParser::Binary_asContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_rel(modelicaParser::Binary_relContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_eq(modelicaParser::Binary_eqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCont(modelicaParser::ContContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet(modelicaParser::RetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEl_if(modelicaParser::El_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInput(modelicaParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOutput(modelicaParser::OutputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty(modelicaParser::EmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInput_stmt(modelicaParser::Input_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut_stmt(modelicaParser::Out_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(modelicaParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier_var(modelicaParser::Identifier_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant_lit(modelicaParser::Constant_litContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_calling(modelicaParser::Function_callingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(modelicaParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(modelicaParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd_bop_expr(modelicaParser::And_bop_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_exps(modelicaParser::Relational_expsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_equality(modelicaParser::Expr_equalityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_expr(modelicaParser::Value_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_rem_expr(modelicaParser::Mul_div_rem_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_expr(modelicaParser::Array_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expr(modelicaParser::Unary_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_exps(modelicaParser::Add_sub_expsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_binop_expr(modelicaParser::Expr_binop_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegative_numbers(modelicaParser::Negative_numbersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_not(modelicaParser::Logical_notContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_bracket(modelicaParser::Expr_bracketContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality_expr(modelicaParser::Equality_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLmao(modelicaParser::LmaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_unary(modelicaParser::Expr_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr_bop_expr(modelicaParser::Or_bop_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_call(modelicaParser::Declaration_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_call(modelicaParser::Expr_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call(modelicaParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak_call(modelicaParser::Break_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinue_call(modelicaParser::Continue_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInput_call(modelicaParser::Input_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut_call(modelicaParser::Out_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_call(modelicaParser::If_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_call(modelicaParser::Else_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_call(modelicaParser::For_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_call(modelicaParser::Return_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_call(modelicaParser::While_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(modelicaParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_stmt(modelicaParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_stmt(modelicaParser::For_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernary_stmt(modelicaParser::Ternary_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(modelicaParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_stmt(modelicaParser::Else_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_def(modelicaParser::Function_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(modelicaParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitO_c_b(modelicaParser::O_c_bContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitC_c_b(modelicaParser::C_c_bContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitO_s_b(modelicaParser::O_s_bContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitC_s_b(modelicaParser::C_s_bContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQ_mark(modelicaParser::Q_markContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSemi_c(modelicaParser::Semi_cContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColon(modelicaParser::ColonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitL_o_b(modelicaParser::L_o_bContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitR_c_b(modelicaParser::R_c_bContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(modelicaParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubtract(modelicaParser::SubtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuotes(modelicaParser::QuotesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiply(modelicaParser::MultiplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivide(modelicaParser::DivideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGt(modelicaParser::GtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLt(modelicaParser::LtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEq(modelicaParser::EqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquals(modelicaParser::EqualsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot_equals(modelicaParser::Not_equalsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLt_equal(modelicaParser::Lt_equalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGt_equal(modelicaParser::Gt_equalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr_bop(modelicaParser::Or_bopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd_bop(modelicaParser::And_bopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegation(modelicaParser::NegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus_equal(modelicaParser::Plus_equalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeft_shift(modelicaParser::Left_shiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRight_shift(modelicaParser::Right_shiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPoint(modelicaParser::PointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComma(modelicaParser::CommaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMod(modelicaParser::ModContext *ctx) override {
    return visitChildren(ctx);
  }


};

