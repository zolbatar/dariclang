grammar Daric;

program
    : statements EOF
    ;

statements
    : separator+
    | (separator* statement (separator | EOF)?)*
    ;

statementsl
    : (COLON* statement (COLON | EOF)?)+
    ;

statement
    : assign
    | call
    | case
    | const
    | data
    | dataLabel
    | dim
    | end
    | for
    | if
    | ifml
    | input
    | importlib
    | option
    | procedure
    | print
    | read
    | repeat
    | restore
    | return
    | struct
    | structDim
    | structInstance
    | swap
    | while
    ;

separator
    : (COLON | NEWLINE)+
    ;

assign:         LET? variable (COLON type)? EQ expression ;
call:           IDENTIFIER name=LPAREN? expression? (COMMA expression)* name=RPAREN? ;
case:           CASE expression OF separator? when* (OTHERWISE statements)? END CASE ;
const:          CONST IDENTIFIER EQ literal (COMMA IDENTIFIER EQ literal)* (COLON type)? ;
data:           DATA integerLiteral (COMMA integerLiteral)* ;
dataLabel:      DATALABEL stringLiteral ;
dim:            DIM IDENTIFIER COLON (
                    (type SOPEN expression? (COMMA expression)* SCLOSE) |
                    (VECTOR SOPEN typeOrStruct SCLOSE) |
                    (LIST SOPEN typeOrStruct SCLOSE) |
                    (SET SOPEN (BYTE | INT | FLOAT | STRING) SCLOSE) |
                    (MAP SOPEN (BYTE | INT | FLOAT | STRING) COMMA typeOrStruct SCLOSE) |
                    (STACK SOPEN typeOrStruct SCLOSE) |
                    (QUEUE SOPEN typeOrStruct SCLOSE)
                ) ;
exprcall:       IDENTIFIER LPAREN expression? (COMMA expression)* RPAREN ;
end:            QUIT ;
for:            FOR IDENTIFIER (COLON type)? EQ expression TO expression (STEP expression)? statements NEXT ;
importlib:      IMPORT stringLiteral ;
if:             IF expression THEN? statementsl (ELSE statementsl)? ;
ifml:           IF expression THEN? NEWLINE statements (ELSE NEWLINE statements)? NEWLINE END IF ;
input:          INPUT variable ;
option:         OPTION IDENTIFIER (IDENTIFIER | integerLiteral) ;
parameter:      REF? IDENTIFIER (COLON (type | IDENTIFIER))? ;
print:          PRINT SYS? (value=expression (WITH? format=expression)? SEMICOLON?)? ;
procedure:      DEF IDENTIFIER (COLON type)? LPAREN? NEWLINE* parameter? (COMMA NEWLINE* parameter)* RPAREN? separator* statements END DEF ;
repeat:         REPEAT statements UNTIL expression ;
read:           READ variable (COMMA variable)* ;
restore:        RESTORE stringLiteral ;
return:         RETURN expression? ;
struct:         RECORD IDENTIFIER NEWLINE* IDENTIFIER COLON typeOrStruct (NEWLINE+ IDENTIFIER COLON typeOrStruct)* NEWLINE* END RECORD ;
structDim:      DIM IDENTIFIER COLON IDENTIFIER SOPEN expression? (COMMA expression)* SCLOSE ;
structInstance: DIM IDENTIFIER COLON IDENTIFIER (LPAREN (IDENTIFIER EQ expression)? (COMMA IDENTIFIER EQ expression)* RPAREN)? ;
swap:           SWAP variable COMMA variable ;
when:           WHEN expression (COMMA expression)* statements ;
while:          WHILE expression statements END WHILE ;

variable
    : IDENTIFIER
        (SOPEN expression? (COMMA expression)* SCLOSE)?
        (DOT IDENTIFIER)*
    ;

expression
    : LPAREN expression RPAREN
    | MAIN
    | literal
    | exprcall
    | variable

    // Unary
    | MINUS expression
    | PLUS expression

    // Conversion
    | INT expression
    | FLOAT expression
    | STRING LPAREN? expression (WITH expression)? RPAREN?

    // Absolute
    | ABS expression

    // Versions of NOT
    | COMP expression // Complement
    | NOT expression

    // Booleans
    | TRUE
    | FALSE

    // Maths functions
    | PI
    | DEG expression
    | RAD expression
    | SGN expression
    | ACS expression
    | ASN expression
    | ATN expression
    | COS expression
    | EXP expression
    | FLOOR expression
    | ROUND expression
    | LN expression
    | LOG expression
    | SIN expression
    | SQR expression
    | TAN expression

    // String functions
    | ASC expression
    | CHR expression
    | INSTR LPAREN? expression COMMA expression COMMA expression RPAREN?
    | LEFT LPAREN? expression COMMA expression RPAREN?
    | MID LPAREN? expression COMMA expression COMMA expression RPAREN?
    | RIGHT LPAREN? expression COMMA expression RPAREN?
    | LEN expression

    // Array functions
    | SIZE LPAREN? IDENTIFIER RPAREN?

    // Maths
    | <assoc=right> expression HAT expression
    | expression DIVIDE expression
    | expression MULTIPLY expression
    | expression DIV expression
    | expression MOD expression
    | expression PLUS expression
    | expression MINUS expression

    // Bit shifts
    | expression SHL expression
    | expression SHR expression

    // Comparison
    | expression EQ expression
    | expression NE expression
    | expression GT expression
    | expression GE expression
    | expression LT expression
    | expression LE expression

    // Boolean
    | expression AND expression
    | expression OR expression
    | expression EOR expression
    ;

type
    : BYTE
    | FLOAT
    | INT
    | STRING
    ;

typeOrStruct
    : BYTE
    | FLOAT
    | INT
    | STRING
    | IDENTIFIER
    ;

// Literals
literal
    : floatLiteral
    | integerLiteral
    | stringLiteral
    ;

floatLiteral
    : (PLUS | MINUS)? FLOATLITERAL
    ;

integerLiteral
    : HEXNUMBER
    | BINARYNUMBER
    | (PLUS | MINUS)? INTEGERLITERAL
    ;

stringLiteral
    : STRINGLITERAL
    ;

BlockComment:   '#{' .*? '}#' -> skip;
LineComment:    (REM | '\'') ~ [\r\n]* -> skip;

CASE            : 'CASE' | 'Case' ;
CONST           : 'CONST' | 'Const' ;
DATA            : 'DATA' | 'Data' ;
DATALABEL       : 'DATALABEL' | 'DataLabel' ;
DEF             : 'DEF' | 'Def' ;
DIM             : 'DIM' | 'Dim' ;
ELSE            : 'ELSE' | 'Else' ;
END             : 'END' | 'End' ;
FOR             : 'FOR' | 'For' ;
IF              : 'IF' | 'If' ;
IMPORT          : 'IMPORT' | 'Import' ;
INPUT           : 'INPUT' | 'Input' ;
LET             : 'LET' | 'Let' ;
NEXT            : 'NEXT' | 'Next' ;
OF              : 'OF' | 'Of' ;
OPTION          : 'OPTION' | 'Option' ;
OTHERWISE       : 'OTHERWISE' | 'Otherwise' ;
PRINT           : 'PRINT' | 'Print' ;
QUIT            : 'QUIT' | 'Quit' ;
READ            : 'READ' | 'Read' ;
RECORD          : 'RECORD' | 'Record' ;
REF             : 'BYREF' | 'ByRef' ;
REM             : 'REM' | 'Rem' ;
REPEAT          : 'REPEAT' | 'Repeat' ;
RESTORE         : 'RESTORE' | 'Restore' ;
RETURN          : 'RETURN' | 'Return' ;
THEN            : 'THEN' | 'Then' ;
SIZE            : 'SIZE' | 'Size' ;
STEP            : 'STEP' | 'Step' ;
SYS             : 'SYS' | 'Sys' ;
SWAP            : 'SWAP' | 'Swap ' ;
TO              : 'TO' | 'To' ;
UNTIL           : 'UNTIL' | 'Until' ;
WHEN            : 'WHEN' | 'When' ;
WITH            : 'WITH' | 'With' ;
WHILE           : 'WHILE' | 'While' ;

MAIN            : '@MAIN' | '@Main' ;

ABS             : 'ABS' | 'Abs' ;
ACS             : 'ACS' | 'Acs' ;
ASN             : 'ASN' | 'Asn' ;
ATN             : 'ATN' | 'Atn' ;
COS             : 'COS' | 'Cos' ;
DEG             : 'DEG' | 'Deg' ;
EXP             : 'EXP' | 'Exp' ;
FLOOR           : 'FLOOR' | 'Floor' ;
LN              : 'LN' | 'Ln' ;
LOG             : 'LOG' | 'Log' ;
PI              : 'PI' | 'Pi' ;
RAD             : 'RAD' | 'Rad' ;
ROUND           : 'ROUND' | 'Round' ;
SGN             : 'SGN' | 'Sgn' ;
SIN             : 'SIN' | 'Sin' ;
SQR             : 'SQR' | 'Sqr' ;
TAN             : 'TAN' | 'Tan' ;

VECTOR          : 'VECTOR' | 'Vector' ;
LIST            : 'LIST' | 'List' ;
MAP             : 'MAP' | 'Map' ;
STACK           : 'STACK' | 'Stack' ;
QUEUE           : 'QUEUE' | 'Queue' ;
SET             : 'SET' | 'Set' ;

FALSE           : 'FALSE' | 'False' ;
TRUE            : 'TRUE' | 'True' ;

ASC             : 'ASC' | 'Asc' ;
CHR             : 'CHR' | 'Chr' ;
INSTR           : 'INSTR' | 'Instr' ;
LEFT            : 'LEFT' | 'Left' ;
MID             : 'MID' | 'Mid' ;
RIGHT           : 'RIGHT' | 'Right' ;
LEN             : 'LEN' | 'Len' ;

BYTE            : 'BYTE' | 'Byte' ;
INT             : 'INT' | 'Int' ;
FLOAT           : 'FLOAT' | 'Float' ;
STRING          : 'STRING' | 'String' ;

DOLLAR          : '$' ;
HASH            : '#' ;
COLON           : ':' ;
SEMICOLON       : ';' ;
DOT             : '.' ;
COMMA           : ',' ;
QUOTE           : '\'' ;
NEWLINE         : '\n'+ ;
PERCENT         : '%' ;
UNDERSCORE      : '_' ;
LPAREN          : '(' ;
RPAREN          : ')' ;
SOPEN           : '[' ;
SCLOSE          : ']' ;

// Comparison and maths
EQ              : '=' ;
NE              : '<>' ;
GT              : '>' ;
GE              : '>=' ;
LT              : '<' ;
LE              : '<=' ;
HAT             : '^' ;
PLUS            : '+' ;
MINUS           : '-' ;
MULTIPLY        : '*' ;
DIVIDE          : '/' ;
SHL             : '<<' ;
SHR             : '>>' ;
MOD             : 'MOD' | 'Mod' ;
DIV             : 'DIV' | 'Div' | '//' ;

// Boolean
COMP            : '~' ;
NOT             : 'NOT' | 'Not' ;
AND             : 'AND' | 'And' ;
OR              : 'OR' | 'Or' ;
EOR             : 'EOR' | 'Eor' ;

// Literals
STRINGLITERAL   : '"' ~["\r\n]* '"' ;
HEXNUMBER       : '&' HEX+ ;
BINARYNUMBER    : PERCENT [0|1]+ ;
FLOATLITERAL    : DIGIT+ '.' DIGIT+ ([e|E] [0-9]+ )* ;
INTEGERLITERAL  : DIGIT+ ;
IDENTIFIER      : NAME ;

fragment HEX    : [0-9A-Fa-f] ;
fragment NAME   : ALPHA (ALPHA|DIGIT|UNDERSCORE)* (PERCENT | DOLLAR | HASH)? ;
fragment ALPHA  : [a-zA-Z] ;
fragment DIGIT  : [0-9] ;

WS: [ \r\t]+ -> channel (HIDDEN);