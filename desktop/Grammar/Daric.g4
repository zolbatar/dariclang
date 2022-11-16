grammar Daric;

program
    : statements EOF
    ;

statements
    : (separator* statement (separator | EOF)?)*
        ;

statementsl
    : (COLON* statement (COLON | EOF)?)+
    ;

statement
    : COMMENT
    | assign
    | call
    | const
    | dim
    | end
    | for
    | if
    | ifml
    | module
    | procedure
    | print
    | repeat
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

assign:         LET? assignment (COMMA assignment)* (OF? type)? ;
assignment:     variable EQ expression ;
call:           IDENTIFIER LPAREN expression? (COMMA expression)* RPAREN ;
const:          CONST IDENTIFIER EQ literal (COMMA IDENTIFIER EQ literal)* (OF? type)? ;
dim:            DIM IDENTIFIER OF? type SOPEN expression? (COMMA expression)* SCLOSE ;
exprcall:       IDENTIFIER LPAREN expression? (COMMA expression)* RPAREN ;
end:            END ;
for:            FOR IDENTIFIER (OF? type)? EQ expression TO expression (STEP expression)? statements NEXT ;
if:             IF expression THEN? statementsl (ELSE statementsl)? ;
ifml:           IF expression THEN? NEWLINE statements (ELSE NEWLINE statements)? NEWLINE ENDIF ;
module:         MODULE IDENTIFIER ;
parameter:      IDENTIFIER (OF? type)? ;
print:          PRINT (value=expression (WITH? format=expression)? SEMICOLON?)? ;
procedure:      PRIVATE? DEF IDENTIFIER (OF? type)? LPAREN? parameter? (COMMA parameter)* RPAREN? separator* statements ENDDEF ;
repeat:         REPEAT statements UNTIL expression ;
return:         RETURN expression? ;
struct:         DEFRECORD IDENTIFIER separator* IDENTIFIER OF? typeOrStruct (separator+ IDENTIFIER OF? typeOrStruct)* separator* ENDRECORD ;
structDim:      DIM RECORD IDENTIFIER OF? IDENTIFIER SOPEN expression? (COMMA expression)* SCLOSE ;
structInstance: LET? IDENTIFIER EQ RECORD OF? IDENTIFIER (LPAREN (IDENTIFIER EQ expression)? (COMMA IDENTIFIER EQ expression)* RPAREN)? ;
swap:           SWAP variable COMMA variable ;
while:          WHILE expression statements ENDWHILE ;

variable
    : IDENTIFIER
        (SOPEN expression? (COMMA expression)* SCLOSE)?
        (DOT IDENTIFIER)*
    ;

expression
    : LPAREN expression RPAREN
    | literal
    | variable
    | exprcall

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

    // Chrono
    | HPTIME
    | TIME
    | TIMES

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
    | CHRS expression
    | INSTR LPAREN? expression COMMA expression COMMA expression RPAREN?
    | LEFTS LPAREN? expression COMMA expression RPAREN?
    | MIDS LPAREN? expression COMMA expression COMMA expression RPAREN?
    | RIGHTS LPAREN? expression COMMA expression RPAREN?
    | LEN expression

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

COMMENT         : (REM | HASH | QUOTE) ~ [\r\n]* ;

CONST           : 'CONST' | 'Const' ;
DEF             : 'DEF' | 'Def' ;
DIM             : 'DIM' | 'Dim' ;
ELSE            : 'ELSE' | 'Else' ;
END             : 'END' | 'End' ;
ENDDEF          : 'ENDDEF' | 'EndDef' ;
ENDIF           : 'ENDIF' | 'EndIf' ;
ENDWHILE        : 'ENDWHILE' | 'EndWhile' ;
FOR             : 'FOR' | 'For' ;
IF              : 'IF' | 'If' ;
MODULE          : 'MODULE' | 'Module' ;
NEXT            : 'NEXT' | 'Next' ;
OF              : 'OF' | 'Of' ;
PRINT           : 'PRINT' | 'Print' ;
PRIVATE         : 'PRIVATE' | 'Private' ;
REM             : 'REM' | 'Rem' ;
REPEAT          : 'REPEAT' | 'Repeat' ;
RETURN          : 'RETURN' | 'Return' ;
THEN            : 'THEN' | 'Then' ;
STEP            : 'STEP' | 'Step' ;
SWAP            : 'SWAP' | 'Swap ' ;
TO              : 'TO' | 'To' ;
UNTIL           : 'UNTIL' | 'Until' ;
WITH            : 'WITH' | 'With' ;
WHILE           : 'WHILE' | 'While' ;

DEFRECORD       : 'DEFRECORD' | 'DefRecord' ;
RECORD          : 'RECORD' | 'Record' ;
ENDRECORD       : 'ENDRECORD' | 'EndRecord' ;

HPTIME          : 'HPTIME' | 'HPTime' ;
TIME            : 'TIME' | 'Time' ;
TIMES           : 'TIME$' | 'Time$' ;

ABS             : 'ABS' | 'Abs' ;
ACS             : 'ACS' | 'Acs' ;
ASN             : 'ASN' | 'Asn' ;
ATN             : 'ATN' | 'Atn' ;
COS             : 'COS' | 'Cos' ;
DEG             : 'DEG' | 'Deg' ;
EXP             : 'EXP' | 'Exp' ;
FLOOR           : 'FLOOR' | 'Floor' ;
LET             : 'LET' | 'Let' ;
LN              : 'LN' | 'Ln' ;
LOG             : 'LOG' | 'Log' ;
PI              : 'PI' | 'Pi' ;
RAD             : 'RAD' | 'Rad' ;
ROUND           : 'ROUND' | 'Round' ;
SGN             : 'SGN' | 'Sgn' ;
SIN             : 'SIN' | 'Sin';
SQR             : 'SQR' | 'Sqr' ;
TAN             : 'TAN' | 'Tan' ;

FALSE           : 'FALSE' | 'False' ;
TRUE            : 'TRUE' | 'True' ;

ASC             : 'ASC' | 'Asc' ;
CHRS            : 'CHR$' | 'Chr$' ;
INSTR           : 'INSTR' | 'Instr' ;
LEFTS           : 'LEFT$' | 'Left$' ;
MIDS            : 'MID$' | 'Mid$' ;
RIGHTS          : 'RIGHT$' | 'Right$' ;
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
DIV             : 'DIV' | 'Div' |  '//' ;

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

WS: [ \r\t] + -> channel (HIDDEN);