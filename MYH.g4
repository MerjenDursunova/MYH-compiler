grammar MYH;

// ================= PARSER RULES =================

program
    : ( function | declaration ';' )* EOF
    ;

// ----------------- FUNCTIONS -----------------
function
    : type ID '(' params? ')' block
    ;

params
    : param ( ',' param )*
    ;

param
    : type ID
    ;

// ----------------- BLOCKS -----------------
block
    : '{' statement* '}'
    ;

// ----------------- STATEMENTS -----------------
statement
    : declaration ';'
    | assignment ';'
    | ifStmt
    | whileStmt
    | forStmt
    | returnStmt ';'
    | expr ';'
    | block                     // block as a statement
    ;

ifStmt
    : IF '(' expr ')' statement ( ELSE statement )?
    ;

whileStmt
    : WHILE '(' expr ')' statement
    ;

forStmt
    : FOR '(' forInit? ';' forCond? ';' forUpdate? ')' statement
    ;

forInit
    : declaration
    | assignment
    | expr
    ;

forCond
    : expr
    ;

forUpdate
    : assignment
    | expr
    ;

// ----------------- DECLARATIONS -----------------
declaration
    : 'const'? type initDeclarator ( ',' initDeclarator )*
    ;

initDeclarator
    : ID arraySuffix? ( '=' initializer )?
    ;

arraySuffix
    : '[' expr? ']' ( '[' expr ']' )*      // only first dimension may omit size
    ;

initializer
    : expr
    | '{' initializerList? '}'
    ;

initializerList
    : initializer ( ',' initializer )*
    ;

// ----------------- ASSIGNMENT -----------------
assignment
    : ID ( '[' expr ']' )* '=' expr
    ;

// ----------------- RETURN -----------------
returnStmt
    : RETURN expr
    ;

// ----------------- EXPRESSIONS (with precedence) -----------------
expr
    : expr op='||' expr
    | expr op='&&' expr
    | expr op='==' expr
    | expr op='!=' expr
    | expr op='<' expr
    | expr op='>' expr
    | expr op='<=' expr
    | expr op='>=' expr
    | expr op='+' expr
    | expr op='-' expr
    | expr op='*' expr
    | expr op='/' expr
    | expr op='%' expr
    | '!' expr
    | '-' expr
    | '(' expr ')'
    | functionCall
    | arrayAccess
    | INT
    | HEX
    | OCT
    | ID
    ;

functionCall
    : ID '(' args? ')'
    ;

args
    : expr ( ',' expr )*
    ;

arrayAccess
    : ID ( '[' expr ']' )+
    ;

// ----------------- TYPES -----------------
type
    : INT_TYPE
    ;

// ================= LEXER RULES =================

// Keywords
IF      : 'if' ;
ELSE    : 'else' ;
WHILE   : 'while' ;
FOR     : 'for' ;
RETURN  : 'return' ;
CONST   : 'const' ;
INT_TYPE: 'int' ;

// Operators (single characters and multi‑character)
AND     : '&&' ;
OR      : '||' ;
EQ      : '==' ;
NE      : '!=' ;
LE      : '<=' ;
GE      : '>=' ;

// Literals
HEX : '0x' [0-9a-fA-F]+ ;
OCT : '0' [0-7]+ ;
INT : [1-9][0-9]* | '0' ;

// Identifier
ID  : [a-zA-Z_][a-zA-Z0-9_]* ;

// Whitespace and comments
WS  : [ \t\r\n]+ -> skip ;
LINE_COMMENT : '//' ~[\r\n]* -> skip ;

// Catch‑all for characters not in any rule (optional, for error reporting)
UNEXPECTED : . ;