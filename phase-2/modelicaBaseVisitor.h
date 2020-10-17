
// Generated from modelica.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "modelicaVisitor.h"
#include "ast.h"
using namespace std;


/**
 * This class provides an empty implementation of modelicaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  modelicaBaseVisitor : public modelicaVisitor {
public:

  virtual antlrcpp::Any visitProgram(modelicaParser::ProgramContext *ctx) override {
    vector<FunctionDefinitionASTnode_noob *> node;
    for(int i=0;i<ctx->function_def().size();i++){
      cout << "In visitProgram" << endl;
      node.push_back(visit(ctx->function_def(i)));
    }
    ProgramASTnode_noob *new_node;
    new_node = new ProgramASTnode_noob(node);
    return new_node;
  }

  virtual antlrcpp::Any visitData_type(modelicaParser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(modelicaParser::IdentifierContext *ctx) override {
    cout << "In visitIdentifier" << endl;
    string var = ctx->IDENTIFIER()->getText();
    IdentifierASTnode_noob *node = new IdentifierASTnode_noob(var);
    // cout << var << endl;
    return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitString(modelicaParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(modelicaParser::ConstantContext *ctx) 
  {
    cout << "In visitConst" << endl;
    IntLitASTnode_noob *node = new IntLitASTnode_noob(stoi(ctx->getText()));
    return (ASTNode_noob *) node;
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
        string dtype = ctx->data_type()->getText();
        // cout <<"isssa declaration------------------------------------------" << endl;
    // cout << ctx->expression().size() << endl;
    DeclarationStatementASTnode_noob *node;
    std::vector<DeclarationASTnode_noob *> declarations;
    for(int i=0;i<ctx->expression().size();i++){
      cout << "In visitDeclaration" << endl;
      ASTNode_noob *temp;
      temp = visit(ctx->expression(i));
      IdentifierASTnode_noob *temp_iden;
      BinaryOpASTnode_noob *temp_declr;
      temp_iden = dynamic_cast<IdentifierASTnode_noob *>(temp);
      if(temp_iden){
        // cout << "first if" << endl;
        DeclarationASTnode_noob *declr_iden_temp;
        declr_iden_temp = new DeclarationASTnode_noob(dtype,temp_iden,(ASTNode_noob *)nullptr);
        declarations.push_back(declr_iden_temp);
        // cout << declarations.size() << endl;
        // cout <<"upar declaration ka size" << endl;
      }

      temp_declr = dynamic_cast<BinaryOpASTnode_noob *>(temp);
      if(temp_declr){
        DeclarationASTnode_noob *declr_expr_temp;
        IdentifierASTnode_noob *temp_declr_iden;
        temp_declr_iden = dynamic_cast<IdentifierASTnode_noob *>(temp_declr->left);
        declr_expr_temp = new DeclarationASTnode_noob(dtype,temp_declr_iden,temp_declr->right);
        declarations.push_back(declr_expr_temp);
      }
      
    }
    node = new DeclarationStatementASTnode_noob(declarations);
    // cout << node->declarations.size() << endl;
    // cout <<"upar declaration ka size" << endl;
    return (StatementASTnode_noob *) node;
    // return visitChildren(ctx);
  }
  virtual antlrcpp::Any visitIdentifier_var(modelicaParser::Identifier_varContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant_lit(modelicaParser::Constant_litContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_calling(modelicaParser::Function_callingContext *ctx) override {
        return visit(ctx->function_call());

    // return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(modelicaParser::Function_callContext *ctx) override {
      cout << "In visitFunction_call" << endl;
      IdentifierASTnode_noob *iden;
      FuncCallASTNode_noob *node;
      ASTNode_noob *temp;
      ParameterASTnode_noob *parameters;
      parameters = visit(ctx->parameter());
      temp = visit(ctx->identifier());
      iden = dynamic_cast<IdentifierASTnode_noob*>(temp);
      node = new FuncCallASTNode_noob(iden,parameters);
    return (ASTNode_noob *)node;
  }

  virtual antlrcpp::Any visitParameter(modelicaParser::ParameterContext *ctx) override {
    ParameterASTnode_noob *node;
    vector<ASTNode_noob *> parameters;
    for(int i=0;i<ctx->expression().size();i++){
      cout << "In visitParameter" << endl;
      ASTNode_noob* param;
      param = visit(ctx->expression(i));
      parameters.push_back(param);
    }
    node = new ParameterASTnode_noob(parameters);
    return node;
    // cout << ctx->expression().size() << endl;
    // ParameterStatementASTnode_noob *node;
    // std::vector<ParameterASTnode_noob *> declarations;
    // for(int i=0;i<ctx->expression().size();i++){
    //   cout << "In visitParameter" << endl;
    //   ASTNode_noob *temp;
    //   temp = visit(ctx->expression(i));
    //   IdentifierASTnode_noob *temp_iden;
    //   ParameterASTnode_noob *temp_declr;
    //   temp_iden = dynamic_cast<IdentifierASTnode_noob *>(temp);
    //   if(temp_iden){
    //     ParameterASTnode_noob *declr_iden_temp;
    //     declr_iden_temp = new ParameterASTnode_noob(temp_iden,(ASTNode_noob *)nullptr);
    //     declarations.push_back(declr_iden_temp);
    //   }
    //   temp_declr = (ParameterASTnode_noob *)(temp);
    //   if(temp_declr){
    //     ParameterASTnode_noob *declr_expr_temp;
    //     declr_expr_temp = new ParameterASTnode_noob(temp_declr->iden,temp_declr->expr);
    //     declarations.push_back(declr_expr_temp);
    //   }
    // }
    // cout << "l" << endl;
    // // node = new ParameterStatementASTnode_noob(declarations);
    // // StatementASTnode_noob* new_n;
    // // new_n =  (StatementASTnode_noob *)node;
    // ASTNode_noob* lol;
    // lol = (ASTNode_noob *)new_n;
    // return (ASTNode_noob *) node;
    // return lol;

    // return lol;
    //     cout << "In visitParameter" << endl;
    // StatementASTnode_noob *node;
    // return (ASTNode_noob *)node;
    // return visitChildren(ctx);

  }

  virtual antlrcpp::Any visitAnd_bop_expr(modelicaParser::And_bop_exprContext *ctx)  
  {
        cout << "In visitAnd_bop_expr" << endl;
        ASTNode_noob *left;
        ASTNode_noob *right;
       
        BinaryOpASTnode_noob *node;

        left = visit(ctx->expression(0));
        right = visit(ctx->expression(1));

        string op = ctx->and_bop()->getText();
        // cout << op << endl;
        node = new BinaryOpASTnode_noob(op, left, right);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitRelational_exps(modelicaParser::Relational_expsContext *ctx)  {
        cout << "In visitRelational_exps" << endl;
        ASTNode_noob *left;
        ASTNode_noob *right;
       
        BinaryOpASTnode_noob *node;

        left = visit(ctx->expression(0));
        right = visit(ctx->expression(1));

        string op = ctx->binary_rel()->getText();
        // cout << op << endl;
        node = new BinaryOpASTnode_noob(op, left, right);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitExpr_equality(modelicaParser::Expr_equalityContext *ctx) 
  {
        cout << "In visitExpr_equality" << endl;
        ASTNode_noob *left;
        ASTNode_noob *right;
       
        BinaryOpASTnode_noob *node;

        left = visit(ctx->expression(0));
        right = visit(ctx->expression(1));

        string op = "=";
        // cout << op << endl;
        node = new BinaryOpASTnode_noob(op, left, right);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitValue_expr(modelicaParser::Value_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_rem_expr(modelicaParser::Mul_div_rem_exprContext *ctx)  
  {
        cout << "In visitExprMulDivRem" << endl;
        ASTNode_noob *left;
        ASTNode_noob *right;
       
        BinaryOpASTnode_noob *node;

        left = visit(ctx->expression(0));
        right = visit(ctx->expression(1));

        string op = ctx->binary_mdr()->getText();
        // cout << op << endl;
        node = new BinaryOpASTnode_noob(op, left, right);

          return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitArray_expr(modelicaParser::Array_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expr(modelicaParser::Unary_exprContext *ctx) 
  {
        cout << "In visitUnary_expr" << endl;
        ASTNode_noob *left;

        PostUnaryOpASTnode_noob *node;

        left = visit(ctx->expression());

        string op = ctx->unary_op()->getText();
        // cout << op << endl;
        node = new PostUnaryOpASTnode_noob(op, left);
        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitAdd_sub_exps(modelicaParser::Add_sub_expsContext *ctx)  
  {
        cout << "In visitAdd_sub_exps" << endl;
        ASTNode_noob *left;
        ASTNode_noob *right;
       
        BinaryOpASTnode_noob *node;

        left = visit(ctx->expression(0));
        right = visit(ctx->expression(1));

        string op = ctx->binary_as()->getText();
        // cout << op << endl;
        node = new BinaryOpASTnode_noob(op, left, right);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitExpr_binop_expr(modelicaParser::Expr_binop_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegative_numbers(modelicaParser::Negative_numbersContext *ctx) 
   {
        cout << "In visitNegative_numbers" << endl;
        ASTNode_noob *left;

        PostUnaryOpASTnode_noob *node;

        left = visit(ctx->expression());

        string op = ctx->binary_minus()->getText();
        // cout << op << endl;
        node = new PostUnaryOpASTnode_noob(op, left);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitLogical_not(modelicaParser::Logical_notContext *ctx) 
   {
        cout << "In visitLogical_not" << endl;
        ASTNode_noob *left;

        PostUnaryOpASTnode_noob *node;

        left = visit(ctx->expression());

        string op = ctx->negation()->getText();
        // cout << op << endl;
        node = new PostUnaryOpASTnode_noob(op, left);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitExpr_bracket(modelicaParser::Expr_bracketContext *ctx) override {
    return visit(ctx->expression());
    // return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality_expr(modelicaParser::Equality_exprContext *ctx)  {
        cout << "In visitEquality_expr" << endl;
        ASTNode_noob *left;
        ASTNode_noob *right;
       
        BinaryOpASTnode_noob *node;

        left = visit(ctx->expression(0));
        right = visit(ctx->expression(1));

        string op = ctx->binary_eq()->getText();
        // cout << op << endl;
        node = new BinaryOpASTnode_noob(op, left, right);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitLmao(modelicaParser::LmaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_unary(modelicaParser::Expr_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr_bop_expr(modelicaParser::Or_bop_exprContext *ctx) {
        cout << "In visitOr_bop_expr" << endl;
        ASTNode_noob *left;
        ASTNode_noob *right;
       
        BinaryOpASTnode_noob *node;

        left = visit(ctx->expression(0));
        right = visit(ctx->expression(1));

        string op = ctx->or_bop()->getText();
        // cout << op << endl;
        node = new BinaryOpASTnode_noob(op, left, right);

        return (ASTNode_noob *) node;
  }

  virtual antlrcpp::Any visitDeclaration_call(modelicaParser::Declaration_callContext *ctx) override {
    return visit(ctx->declaration());
  }
  virtual antlrcpp::Any visitExpr_call(modelicaParser::Expr_callContext *ctx) override {
    ExpressionStatementASTnode_noob* node;
    ASTNode_noob* temp;
    temp = visit(ctx->expression());
    node = new ExpressionStatementASTnode_noob(temp);
    return (StatementASTnode_noob* )node;
  }

  virtual antlrcpp::Any visitFunc_call(modelicaParser::Func_callContext *ctx) override {
    cout << "In visitFunc_call" << endl;
    ContinueStatementASTnode_noob *node;
    return (StatementASTnode_noob *)node;
  }

  virtual antlrcpp::Any visitBreak_call(modelicaParser::Break_callContext *ctx) override {
    cout << "In visitBreak_call" << endl;
    BreakStatementASTnode_noob *node;
    return (StatementASTnode_noob *)node;
  }

  virtual antlrcpp::Any visitContinue_call(modelicaParser::Continue_callContext *ctx) override {
    cout << "In visitContinue_call" << endl;
    ContinueStatementASTnode_noob *node;
    return (StatementASTnode_noob *)node;
  }

  virtual antlrcpp::Any visitInput_call(modelicaParser::Input_callContext *ctx) override {
    cout << "In visitInput_call" << endl;
    ContinueStatementASTnode_noob *node;
    return (StatementASTnode_noob *)node;
  }

  virtual antlrcpp::Any visitOut_call(modelicaParser::Out_callContext *ctx) override {
    cout << "In visitOut_call" << endl;
    ContinueStatementASTnode_noob *node;
    return (StatementASTnode_noob *)node;  }

  virtual antlrcpp::Any visitIf_call(modelicaParser::If_callContext *ctx) override {
      
    // IfStatementnode_noob *node;
    // return (StatementASTnode_noob *)node;
    // ContinueStatementASTnode_noob *node;
    return visitChildren(ctx);

  }

  virtual antlrcpp::Any visitElse_call(modelicaParser::Else_callContext *ctx) override {
    // cout << "In visitElse_call" << endl;
    // ElseStatementnode_noob *node;
    // CompoundStatementASTnode_noob *block;
    // block = visit(ctx->else_stmt());
    // node = new ElseStatementnode_noob(block);
    // return (StatementASTnode_noob *)node;
        return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_call(modelicaParser::For_callContext *ctx) override {
        return visitChildren(ctx);

  }

  virtual antlrcpp::Any visitReturn_call(modelicaParser::Return_callContext *ctx) override {
    //    cout << "In visitReturn_call" << endl;
    // ContinueStatementASTnode_noob *node;
    // return (StatementASTnode_noob *)node;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_call(modelicaParser::While_callContext *ctx) override {
    return visitChildren(ctx);
  }

 

  virtual antlrcpp::Any visitBlock(modelicaParser::BlockContext *ctx) override {
    CompoundStatementASTnode_noob *node;
    std::vector<StatementASTnode_noob *> declarations;
    for(int i=0;i<ctx->statement().size();i++){
      cout << "In visitBlock" << endl;
      StatementASTnode_noob *temp;
      temp = visit(ctx->statement(i));
      declarations.push_back(temp);
    }
    node = new CompoundStatementASTnode_noob(declarations);
    return node;
  }

  virtual antlrcpp::Any visitWhile_stmt(modelicaParser::While_stmtContext *ctx) override {
    cout << "In visitWhile_stmt " << endl;
    WhileStatementnode_noob *node;
    ASTNode_noob *expr;
    CompoundStatementASTnode_noob *block;
    expr = visit(ctx->expression());
    block = visit(ctx->block());
    node = new WhileStatementnode_noob(expr,block);
    return (StatementASTnode_noob *)node;
    // return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_stmt(modelicaParser::For_stmtContext *ctx) override {
      cout << "For statement" << endl;
      ForStatementASTnode_noob *node;
      ASTNode_noob *init;
      ASTNode_noob *cond;
      ASTNode_noob *end;
      CompoundStatementASTnode_noob *block;
      block = visit(ctx->block());
      init = visit(ctx->expression(0));
      cond = visit(ctx->expression(1));
      end = visit(ctx->expression(2));
      node = new ForStatementASTnode_noob(init,cond,end,block);
      return (StatementASTnode_noob *)node;
  }

  virtual antlrcpp::Any visitTernary_stmt(modelicaParser::Ternary_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(modelicaParser::If_stmtContext *ctx) override {
    cout << "In visitIf_stmt" << endl;

    IfStatementnode_noob *node;
    ASTNode_noob *expr;
    CompoundStatementASTnode_noob *block;
    ElseStatementnode_noob *else_block;
    expr = visit(ctx->expression());
    block = visit(ctx->block());
    else_block = visit(ctx->else_stmt());
    node = new IfStatementnode_noob(expr,block,else_block);
    return (StatementASTnode_noob *)node;

  }

  virtual antlrcpp::Any visitElse_stmt(modelicaParser::Else_stmtContext *ctx) override {
        cout << "In visitElse_stmt" << endl;
    ElseStatementnode_noob *node;
    CompoundStatementASTnode_noob *block;
    block = visit(ctx->block());
    node = new ElseStatementnode_noob(block);
    return node;

  }

  virtual antlrcpp::Any visitFunction_def(modelicaParser::Function_defContext *ctx) {
    
      cout << "In visitFunction_def" << endl;
      
      FunctionDefinitionASTnode_noob *node; 
      CompoundStatementASTnode_noob* block;
      block = visit(ctx->block());  
      StatementASTnode_noob *func_name; //dynamic_cast into DeclarationASTnode_noob
      func_name = visit(ctx->declaration(0));
      DeclarationStatementASTnode_noob *func_name_1;
      func_name_1 = dynamic_cast<DeclarationStatementASTnode_noob*>(func_name);
      // cout << func_name_1 << endl;
      DeclarationASTnode_noob *func_name_2;
      DeclarationASTnode_noob *func_name_3;
      func_name_2 = dynamic_cast<DeclarationASTnode_noob*>((func_name_1->declarations)[0]);
      // cout << func_name_2 << endl;
      vector<DeclarationASTnode_noob *> new_node;
      for(int i=1;i< ctx->declaration().size();i++){
      cout << "In visitFunction_def" << endl;
      func_name = visit(ctx->declaration(i));
      func_name_1 = dynamic_cast<DeclarationStatementASTnode_noob*>(func_name);
      func_name_3 = dynamic_cast<DeclarationASTnode_noob*>((func_name_1->declarations)[0]);
      new_node.push_back(func_name_3);

      }
      node = new FunctionDefinitionASTnode_noob(func_name_2,new_node,block);
      return node;
  }

  virtual antlrcpp::Any visitReturn_stmt(modelicaParser::Return_stmtContext *ctx) override {
    cout << "In visitReturn_stmt" << endl;
    ReturnStatementASTnode_noob *node;
    ASTNode_noob *expr;
    expr = visit(ctx->expression());
    node = new ReturnStatementASTnode_noob(expr);
    return (StatementASTnode_noob *)node;
    // return visitChildren(ctx);
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

