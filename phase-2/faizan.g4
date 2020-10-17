grammar modelica;

program
   : (function_def)+
   ;

data_type 
   : ('int' | 'uint' | 'char' | 'bool') 
   ;

identifier
   : IDENTIFIER
   ;

IDENTIFIER
   : VALID_ID_START (VALID_IN_CHAR)*
   ;


string
   : '"' (ZERO|CONSTANT|IDENTIFIER)* '"'
   ;

VALID_ID_START
   : ('a'..'z') | ('A'..'Z') | '_'
   ;

fragment VALID_IN_CHAR
   : (VALID_ID_START | CONSTANT_END )
   ;

fragment NO_VAL
   : [0]
   ;

constant
   : CONSTANT
   ;

CONSTANT
   : (CONSTANT_START)+  (CONSTANT_END)* | NO_VAL
   ;

fragment CONSTANT_START
   : [1-9]
   ;

fragment CONSTANT_END
   : [0-9]
   ;


unary_op
   : ( '++' | '--' | '!' | '-' )
   ;

binary_op
   : (add|subtract|multiply|divide|lt|lt_equal|gt|gt_equal|eq|equals|mod|'||'|'&&'|'~'|'+=')
   ;

cont
   : 'continue' 
   ;

ret
   : 'return' 
   ;

el_if
   : 'elif' 
   ;

input
   : 'scan' 
   ;

output 
   : 'print' 
   ;

empty
   : ('e' | 'E') 
   ;

input_stmt
   : input l_o_b (identifier|constant) r_c_b
   ;

out_stmt
   : output l_o_b (identifier|constant|string|WS|expression) r_c_b
   ;

value
   : (identifier|constant|function_call)
   ;

function_call
   : identifier l_o_b parameter r_c_b
   ;

parameter
   : expression ( comma expression)*
   ;

expression
   : expression binary_op expression #lol 
   | l_o_b expression binary_op expression r_c_b #ebe
   | unary_op expression #ue
   | expression unary_op #eu
   | expression (c_s_b expression o_s_b) #da
   | value #l
   ;

declaration
   : data_type expression ( c_s_b (identifier|) o_s_b)* (comma expression ( c_s_b (identifier|) o_s_b)* )*
   ;

statement
   : (( declaration | expression | function_call | 'break' | cont | input_stmt | out_stmt |empty) semi_c | if_stmt | for_stmt | return_stmt | while_stmt)
   ;

block
   : statement | (o_c_b statement* c_c_b)
   ;

while_stmt
   : 'while' l_o_b (expression) r_c_b block
   ;

for_stmt
   : 'for' l_o_b expression semi_c expression semi_c expression r_c_b block
   ;

ternary_stmt
   : o_c_b expression r_c_b q_mark expression colon expression
   ;

if_stmt
   : 'if' l_o_b expression r_c_b block (else_stmt)*
   ;

else_stmt
   : 'else' block | el_if l_o_b expression r_c_b block
   ;

function_def
   : declaration l_o_b ( declaration (comma declaration)* | ) r_c_b block
   ;

return_stmt
   : ret expression semi_c
   ;

o_c_b 
   : '{' 
   ;

c_c_b 
   : '}' 
   ;

o_s_b 
   : ']' 
   ;

c_s_b 
   : '[' 
   ;

q_mark
   : '?' 
   ;

semi_c 
   : ';' 
   ;

colon
   : ':'
   ;

l_o_b
   : '(' 
   ;

r_c_b
   : ')' 
   ;

add
   : '+' 
   ;

subtract
   : '-' 
   ;

quotes
   : '"'
   ;

multiply
   : '*' 
   ;

divide
   : '/' 
   ;

gt
   : '>' 
   ;

lt
   : '<' 
   ; 

eq
   : '=' 
   ;

equals
   : '==' 
   ;

lt_equal
   : '<=' 
   ;

gt_equal
   : '>=' 
   ;


point
   : '.' 
   ;

comma
   : ',' 
   ;
mod
   : '%'
   ;
WS
   : [ \r\n\t] + -> skip
   ;