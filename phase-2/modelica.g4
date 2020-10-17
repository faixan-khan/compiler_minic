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


declaration
   : data_type expression ( c_s_b (identifier|) o_s_b)* (comma expression ( c_s_b (identifier|) o_s_b)* )*
   ;

value
   : identifier   #identifier_var
   |constant      #constant_lit
   |function_call #function_calling
   ;

function_call
   : identifier l_o_b parameter r_c_b
   ;

parameter
   : expression ( comma expression)*
   ;


   
expression
   : l_o_b expression r_c_b                                                   #expr_bracket
   | binary_minus expression                                                  #negative_numbers
   | negation expression                                                      #logical_not
   | expression binary_mdr expression                                         #mul_div_rem_expr
   | expression binary_as expression                                          #add_sub_exps
   | expression binary_rel expression                                         #relational_exps
   | expression binary_eq expression                                          #equality_expr
   | expression and_bop expression                                            #and_bop_expr
   | expression or_bop expression                                             #or_bop_expr
   | expression '=' expression                                                #expr_equality
   | expression (c_s_b expression o_s_b)                                      #lmao
   | expression binary_op expression #expr_binop_expr| expression c_s_b expression o_s_b    #array_expr 
   | unary_op expression                                                      #unary_expr
   | expression unary_op                                                      #expr_unary
   | value                                                                    #value_expr
   ;


statement
   : declaration semi_c       #declaration_call
   | expression semi_c        #expr_call
   | function_call semi_c     #func_call
   | 'break' semi_c           #break_call
   | cont semi_c              #continue_call
   | input_stmt semi_c        #input_call
   | out_stmt semi_c          #out_call
   | if_stmt                  #if_call
   | else_stmt                #else_call
   | for_stmt                 #for_call
   | return_stmt              #return_call
   | while_stmt               #while_call
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
   : 'if' l_o_b expression r_c_b block (else_stmt)
   ;

else_stmt
   : 'else' block 
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
EF
   : [EOF] + -> skip
   ;