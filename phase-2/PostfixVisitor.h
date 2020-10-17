// #include "ast.h"
#include <iostream>
using namespace std;

class PostFixVisitor : public ASTvisitor
{
public:
    vector<map<string,string> *> scope_chk;
    // int lookup_table(some_node &node){
    //     cout <<"inside lookup table" << endl;
    //     for(from reverse->start in scope_table vector,it){
    //         scope = *it->find(string(node->iden));
    //         if(scope==endofscopetable)
    //             return 1;
    //     }
    //     return 0;
    // }

    string redeclaration(string iden){
        cout << "Inside redeclaration to check redeclaration" << endl;
        for(auto it= scope_chk.rbegin(); it != scope_chk.rend();it++){
            map<string, string>::iterator it1 ; 
            it1 = (*it)->find(iden); 
            if(it1 != (*it)->end()) {
                // cout << it1->second << "exit time" << endl; 
                return it1->second;
            }
        }
        return string("");
    }

    string lookup_datatype(string iden){
        cout <<"inside lookup table to check data type" << endl;
        for(auto it= scope_chk.rbegin(); it != scope_chk.rend();it++){
            map<string, string>::iterator it1 ; 
            it1 = (*it)->find(iden); 
            if(it1 != (*it)->end()) {
                return it1->second;
            }
        }
        return string("");
    }

    virtual void visit(ProgramASTnode_noob &node)
    {
        scope_chk.push_back(new map<string,string>());

        cout << "PostFixVisit traversal invoked" << endl;
        int i = 1;
        
        for (auto statement : node.functions)
        {
            cout << "line " << i << " : ";
            statement->accept(*this);
            cout << endl;
            i = i + 1;

        }
        scope_chk.pop_back();
    }

    virtual void visit(ASTNode_noob &node)
    {
        cout << " Inside ASTNode_noob" << endl;
    }

    virtual void visit(DeclarationASTnode_noob &node)
    {   

        cout << "PostFixVisit DeclarationASTNode_noob traversal invoked" << endl;
        string data_type = node.get_ID();
        string name = node.iden->iden;
        if(lookup_datatype(node.iden->iden)!=""){
            cout << "variable already declared" << endl;
            exit(0);
        }
        cout << "Inserting variable " << name << endl; 
        (*scope_chk.back()).insert({name,data_type});
        // cout << name << " name of the declaration variable" << endl;
        // scope_chk.insert(data_type,name);
        // scope_chk.push_back(new map<data_type,name>());

        // cout << data_type << " yaha node id" <<endl;

        if(node.expr!=nullptr){
            node.expr->accept(*this);
        }
        node.iden->accept(*this);

    }

    virtual void visit(ParameterASTnode_noob &node)
    {
        cout << "Inside ParameterASTnode_noob" << endl;
        int i=1;
        for(auto statement : node.parameters){
            cout << "statement " << i << " : ";
            statement->accept(*this);
            i = i + 1;
        }
        // cout << "ParameterASTnode_noob" << endl;
        // node.expr->accept(*this);
        // node.iden->accept(*this);
    }

    virtual void visit(AssignmentASTnode_noob &node)
    {
        cout << "Inside AssignmentASTnode_noob" << endl;
        node.expr->accept(*this);
        node.iden->accept(*this);

    }

    virtual void visit(PostUnaryOpASTnode_noob &node)
    {
        cout << "Inside PostUnaryOpASTnode_noob" << endl;
        node.expr->accept(*this);
        string op = node.get_ID();
    }

    virtual void visit(BinaryOpASTnode_noob &node)
    {
        // ASTNode_noob *left = node.getLeft();
        // ASTNode_noob *right = node.getRight();
        cout << "Inside BinaryOpASTnode_noob" << endl;
        // string left = lookup_datatype(node.left->iden);
        node.left->accept(*this);
        node.right->accept(*this);
        if(node.left->datatype==node.right->datatype){
            node.datatype = node.left->datatype;
        }
        else{
            cout << "not compatible type" << endl;
            cout << node.left->datatype << "  " << node.right->datatype << endl;
            exit(0);
        }
        // cout << node.left->datatype << endl;

        // cout << "checking" << endl;
        // cout << node.left->datatype << endl;
        // + node.getBin_operator();
    }

    virtual void visit(IdentifierASTnode_noob &node)
    {
        cout << "Inside IdentifierASTnode_noob" << endl;
        string chk = lookup_datatype(node.iden); 
        if(chk==""){
            // cout << node.iden << endl;
            cout << "variable not declared" << endl;
            exit(0);
        }
        else{
            node.datatype = chk;
        }
        // cout << node.get_ID() << endl;

    }
    virtual void visit(IntLitASTnode_noob &node)
    {
        cout << "Inside IntLitASTnode_noob" << endl;
        node.datatype = "int";
    }
    virtual void visit(StatementASTnode_noob &node)
    {
        cout << "Inside StatementASTnode_noob" << endl;
    }
    virtual void visit(DeclarationStatementASTnode_noob &node)
    {
        cout << "Inside DeclarationStatementASTnode_noob" << endl;
        int i=1;
        for(auto statement : node.declarations){
            cout << "statement " << i << " : ";
            statement->accept(*this);
            i = i + 1;
        }
    }
    virtual void visit(ParameterStatementASTnode_noob &node)
    {   
        cout << "Inside ParameterStatementASTnode_noob" << endl;
        int i=1;
        for(auto statement : node.declarations){
            cout << "Statement " << i << " : ";
            statement->accept(*this);
            cout << endl;
            i = i + 1;
        }
    }
    virtual void visit(CompoundStatementASTnode_noob &node)
    {
        cout << "Inside CompoundStatementASTnode_noob" << endl;
        int i=1;
        for(auto statement : node.statements){
            cout << "statement " << i << " : ";
            statement->accept(*this);
            cout << endl;
            i = i + 1;
        }
    }
    virtual void visit(ForStatementASTnode_noob &node)
    {
        cout <<"Inside ForStatementASTnode_noob" << endl;
        node.init->accept(*this);
        node.cond->accept(*this);
        node.end->accept(*this);
        node.block->accept(*this);
    }
    virtual void visit(ExpressionStatementASTnode_noob &node)
    {
        cout << "Inside ExpressionStatementASTnode_noob" << endl;
        node.expr->accept(*this);
    }
    virtual void visit(ReturnStatementASTnode_noob &node){
        cout << "Inside ReturnStatementASTnode_noob" << endl;
        if(node.expr!=nullptr){
            node.expr->accept(*this);
        }
    }
    virtual void visit(BreakStatementASTnode_noob &node){
        cout << "Inside BreakStatementASTnode_noob" << endl;
    }
    virtual void visit(ContinueStatementASTnode_noob &){
        cout << "Inside ContinueStatementASTnode_noob" << endl;
    }
    virtual void visit(FunctionDefinitionASTnode_noob &node)
    {
        cout << "PostFixVisit function traversal invoked" << endl;
        int i = 1   ;
        node.iden->accept(*this);
        // cout << "not" << endl;
        scope_chk.push_back(new map<string,string>());
        for(auto statement : node.parameters){
            cout << "statement " << i << " : ";
            statement->accept(*this);
            i = i + 1;
            cout << endl;
        }
        node.block->accept(*this);
        scope_chk.pop_back();
        
        // for (auto statement : node.block)
        // {
        //     cout << "line " << i << " : ";
        //     statement->accept(*this);
        //     cout << endl;
        //     i = i + 1;
        // }
    }
    virtual void visit(ElseStatementnode_noob &node)
    {
        cout << "Inside ElseStatementnode_noob" << endl;
        node.block->accept(*this);
    }
    virtual void visit(IfStatementnode_noob &node)
    {
        cout << "Inside IfStatementnode_noob" << endl;
        node.expr->accept(*this);
        node.block->accept(*this);
        node.else_block->accept(*this);
    }
    virtual void visit(WhileStatementnode_noob &node)
    {
        cout << "Inside WhileStatementnode_noob" << endl;
        node.expr->accept(*this);
        node.block->accept(*this);
    }    
    virtual void visit(FuncCallASTNode_noob &node)
    {
        cout << "Inside FuncCallASTNode" << endl;
        node.iden->accept(*this);
        node.params->accept(*this);
        node.datatype = lookup_datatype(node.iden->iden);
    }

};
