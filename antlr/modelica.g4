grammar modelica;

program
   : (function_def)+
   ;

data_type 
   : ('int' | 'uint' | 'char' | 'bool'|'float') 
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
   : (CONSTANT_START) (CONSTANT_END)* | NO_VAL | CONSTANT_END* '.' CONSTANT_END*
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
   : (or_bop|and_bop|plus_equal|left_shift|right_shift)
   ;

binary_minus
   : subtract
   ;

binary_logical
   : negation
   ;

binary_mdr
   : (multiply|divide|mod)
   ;

binary_as
   : (add|subtract)
   ;

binary_rel
   : (lt|lt_equal|gt_equal|gt)
   ;

binary_eq
   : (equals | not_equals)
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
   : input l_o_b (|expression |identifier|constant) r_c_b
   ;

out_stmt
   : output l_o_b (expression|string|WS|) r_c_b
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
   : binary_minus expression # negative_numbers
   | negation expression #logical_not
   | expression binary_mdr expression #mul_div_rem
   | expression binary_as expression #add_sub
   | expression binary_rel expression #relational
   | expression binary_eq expression #equality
   | expression and_bop expression #andlog
   | expression or_bop expression #orlog
   | expression '=' expression #ahsv
   | expression binary_op expression #h| expression c_s_b expression o_s_b  #lol 
   | l_o_b expression binary_op expression r_c_b #ebe
   | unary_op expression #ue
   | expression unary_op #eu
   | expression (c_s_b expression o_s_b) #array 
   | value #l
   ;

declaration
   : data_type expression ( c_s_b (identifier|) o_s_b)* (comma expression ( c_s_b (identifier|) o_s_b)* )*
   ;

statement
   : (( declaration | expression | function_call | 'break' | cont | input_stmt | out_stmt |empty) semi_c | if_stmt | else_stmt | for_stmt | return_stmt | while_stmt)
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
not_equals
   : '!='
   ;

lt_equal
   : '<=' 
   ;

gt_equal
   : '>=' 
   ;

or_bop
   : '||'
   ;

and_bop
   : '&&'
   ;

negation
   : '~'
   ;

plus_equal
   : '+='
   ;

left_shift
   : '<<'
   ;

right_shift
   : '>>'
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