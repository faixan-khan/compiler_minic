using namespace std;

class DeclarationASTnode_noob;
class ParameterASTnode_noob;
class PostUnaryOpASTnode_noob;
class BinaryOpASTnode_noob;
class IdentifierASTnode_noob;
class AssignmentASTnode_noob;
class IntLitASTnode_noob;
class StatementASTnode_noob;
class DeclarationStatementASTnode_noob;
class ParameterStatementASTnode_noob;
class CompoundStatementASTnode_noob;
class ForStatementASTnode_noob;
class ElseStatementnode_noob;
class IfStatementnode_noob;
class WhileStatementnode_noob;
class ExpressionStatementASTnode_noob;
class ReturnStatementASTnode_noob;
class BreakStatementASTnode_noob;
class ContinueStatementASTnode_noob;
class FunctionDefinitionASTnode_noob;
class FuncCallASTNode_noob;
class ProgramASTnode_noob;
class ASTNode_noob;

class ASTvisitor
{
public:
    virtual void visit(ProgramASTnode_noob &node) = 0;
    virtual void visit(FunctionDefinitionASTnode_noob &node) = 0;
    virtual void visit(CompoundStatementASTnode_noob &node) = 0;
    virtual void visit(BinaryOpASTnode_noob &node) = 0;
    virtual void visit(StatementASTnode_noob &node) = 0;
    virtual void visit(DeclarationASTnode_noob &node) = 0;
    virtual void visit(AssignmentASTnode_noob &node) = 0;
    virtual void visit(ExpressionStatementASTnode_noob &node) = 0;
    virtual void visit(DeclarationStatementASTnode_noob &node) = 0;
    virtual void visit(IdentifierASTnode_noob &node) = 0;
    virtual void visit(IntLitASTnode_noob &node) = 0;
    virtual void visit(ASTNode_noob &node) = 0;
	virtual void visit(ParameterASTnode_noob &node) = 0;
	virtual void visit(PostUnaryOpASTnode_noob &node) = 0;
	virtual void visit(ParameterStatementASTnode_noob &node) = 0;
	virtual void visit(ForStatementASTnode_noob &node) = 0;
	virtual void visit(ElseStatementnode_noob &node) = 0;
	virtual void visit(WhileStatementnode_noob &node) = 0;
	virtual void visit(IfStatementnode_noob &node) = 0;
	virtual void visit(ReturnStatementASTnode_noob &node) = 0;
	virtual void visit(BreakStatementASTnode_noob &node) = 0;
	virtual void visit(ContinueStatementASTnode_noob &node) = 0;
	virtual void visit(FuncCallASTNode_noob &node) = 0;

};


class ASTNode_noob {
public:
	string datatype;
    virtual ~ASTNode_noob()
    {
    }
    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class DeclarationASTnode_noob : public ASTNode_noob {
public :
	std::string datatype;
	ASTNode_noob *expr;
	IdentifierASTnode_noob *iden;
	DeclarationASTnode_noob(std::string _datatype,IdentifierASTnode_noob *_iden, ASTNode_noob *_expr) {
		this->datatype = _datatype;
		this->iden = _iden;
		this->expr = _expr;
	}
	~DeclarationASTnode_noob() {}
	string get_ID(){
		return datatype;
	}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ParameterASTnode_noob : public ASTNode_noob {
public :
	std::vector<ASTNode_noob *> parameters;
	ParameterASTnode_noob(std::vector<ASTNode_noob *> _parameters) {
		this->parameters = _parameters;
	}
	~ParameterASTnode_noob() {}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class FuncCallASTNode_noob : public ASTNode_noob {
public :
	IdentifierASTnode_noob *iden;
	ParameterASTnode_noob *params;
	FuncCallASTNode_noob(IdentifierASTnode_noob *_iden,ParameterASTnode_noob *_params) {
		this->iden = _iden;
		this->params = _params;
	}
	~FuncCallASTNode_noob() {}
		virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class AssignmentASTnode_noob : public ASTNode_noob {
public :
	ASTNode_noob *expr;
	IdentifierASTnode_noob *iden;
	AssignmentASTnode_noob(IdentifierASTnode_noob *_iden, ASTNode_noob *_expr) {
		this->iden = _iden;
		this->expr = _expr;
	}
	~AssignmentASTnode_noob() {}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class PostUnaryOpASTnode_noob : public ASTNode_noob {
public :
	ASTNode_noob *expr;
	std::string UnaryOp;
	PostUnaryOpASTnode_noob(std::string op, ASTNode_noob *_expr){
		this->UnaryOp = op;
		this->expr = expr;
	}
	~PostUnaryOpASTnode_noob() {}
	string get_ID(){
		return UnaryOp;
	}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class BinaryOpASTnode_noob : public ASTNode_noob {
public :
	ASTNode_noob *left;
	std::string BinaryOp;
	ASTNode_noob *right;
	BinaryOpASTnode_noob(std::string _BinaryOp, ASTNode_noob *_left, ASTNode_noob *_right) {
		this->BinaryOp = _BinaryOp;
		this->left = _left;
		this->right = _right;
	}
	~BinaryOpASTnode_noob() {}
	string get_ID(){
		return BinaryOp;
	}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class IdentifierASTnode_noob: public ASTNode_noob {
public:
	string iden;
    IdentifierASTnode_noob(string _iden) {
		this->iden = _iden;
	}
	~IdentifierASTnode_noob() {}
	string get_ID(){
		return iden;
	}
    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};


class IntLitASTnode_noob: public ASTNode_noob {
public:
	int intlit;
    IntLitASTnode_noob(int _intlit) {
		this->intlit = _intlit;
	}
	~IntLitASTnode_noob() {}
	int get_ID(){
		return intlit;
	}
    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class StatementASTnode_noob : public ASTNode_noob {
public:
	StatementASTnode_noob(){};
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class DeclarationStatementASTnode_noob : public StatementASTnode_noob {
public :
	std::vector<DeclarationASTnode_noob *> declarations;
	DeclarationStatementASTnode_noob(std::vector<DeclarationASTnode_noob *> _declarations) {
		this->declarations = _declarations;
	}
	~DeclarationStatementASTnode_noob() {}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ParameterStatementASTnode_noob : public ASTNode_noob {
public :
	std::vector<ParameterASTnode_noob *> declarations;
	ParameterStatementASTnode_noob(std::vector<ParameterASTnode_noob *> _declarations) {
		this->declarations = _declarations;
	}
	~ParameterStatementASTnode_noob() {}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};
 

class CompoundStatementASTnode_noob: public StatementASTnode_noob {
public:
	std::vector<StatementASTnode_noob *> statements;
	CompoundStatementASTnode_noob(std::vector<StatementASTnode_noob *> _statements) {
		this->statements = _statements;
	}
	~CompoundStatementASTnode_noob() {}

	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ForStatementASTnode_noob: public StatementASTnode_noob {
public:
	ASTNode_noob *init;
	ASTNode_noob *cond;
	ASTNode_noob *end;
	CompoundStatementASTnode_noob *block;
	ForStatementASTnode_noob(ASTNode_noob *_init,ASTNode_noob *_cond,ASTNode_noob *_end,CompoundStatementASTnode_noob *_block) {
		this->init = _init;
		this->cond = _cond;
		this->end = _end;
		this->block = _block;
	}
	~ForStatementASTnode_noob() {}
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ElseStatementnode_noob: public StatementASTnode_noob {
public:
	CompoundStatementASTnode_noob *block;
	ElseStatementnode_noob(CompoundStatementASTnode_noob *_block) {
		this->block = _block;
	}
	~ElseStatementnode_noob(){}
		virtual void accept(ASTvisitor &v)
	{
		v.visit(*this);
	}

};

class IfStatementnode_noob: public StatementASTnode_noob {
public:
	ASTNode_noob *expr;
	CompoundStatementASTnode_noob *block;
	ElseStatementnode_noob *else_block;
	IfStatementnode_noob(ASTNode_noob *_expr,CompoundStatementASTnode_noob *_block,ElseStatementnode_noob *_else_block) {
		this->expr = _expr;
		this->block = _block;
		this->else_block = _else_block;
	}
	~IfStatementnode_noob() {}
	virtual void accept(ASTvisitor &v)
	{
		v.visit(*this);
	}
};

class WhileStatementnode_noob: public StatementASTnode_noob {
public:
	ASTNode_noob *expr;
	CompoundStatementASTnode_noob *block;
	WhileStatementnode_noob(ASTNode_noob *_expr,CompoundStatementASTnode_noob *_block) {
		this->expr = _expr;
		this->block = _block;
	}
	~WhileStatementnode_noob() {}
	virtual void accept(ASTvisitor &v)
	{
		v.visit(*this);
	}	
};

class ExpressionStatementASTnode_noob: public StatementASTnode_noob {
public:
	ASTNode_noob *expr;
	ExpressionStatementASTnode_noob(ASTNode_noob *_expr) {
		this->expr = _expr;
	}
	~ExpressionStatementASTnode_noob() {}

	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ReturnStatementASTnode_noob: public StatementASTnode_noob {
public:
	ASTNode_noob *expr;
	ReturnStatementASTnode_noob(ASTNode_noob *_expr) {
		this->expr = _expr;
	}
	~ReturnStatementASTnode_noob(){};
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class BreakStatementASTnode_noob: public StatementASTnode_noob {
public:
	BreakStatementASTnode_noob(){};
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ContinueStatementASTnode_noob: public StatementASTnode_noob {
public:
	ContinueStatementASTnode_noob(){};
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class FunctionDefinitionASTnode_noob : public ASTNode_noob {
public :
	DeclarationASTnode_noob *iden;
	std::vector<DeclarationASTnode_noob *> parameters;
	CompoundStatementASTnode_noob *block;
	FunctionDefinitionASTnode_noob(DeclarationASTnode_noob *_iden, std::vector<DeclarationASTnode_noob *> _parameters, CompoundStatementASTnode_noob *_block ) {
		this->iden = _iden;
		this->parameters = _parameters;
		this->block = _block;
	}
	~FunctionDefinitionASTnode_noob(){};
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ProgramASTnode_noob : public ASTNode_noob {
public :
	std::vector<FunctionDefinitionASTnode_noob *> functions;
	ProgramASTnode_noob(std::vector<FunctionDefinitionASTnode_noob *> _functions) {
		this->functions = _functions;
	}
	~ProgramASTnode_noob(){};
	virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};
