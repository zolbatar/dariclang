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
    | case
    | const
    | data
    | dataLabel
    | dim
    | end
    | for
    | if
    | ifml
    | module
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

assign:         LET? assignment (COMMA assignment)* (OF? type)? ;
assignment:     variable EQ expression ;
call:           IDENTIFIER name=LPAREN? expression? (COMMA expression)* name=RPAREN? ;
case:           CASE expression OF separator? when+ (OTHERWISE statements)? ENDCASE ;
const:          CONST IDENTIFIER EQ literal (COMMA IDENTIFIER EQ literal)* (OF? type)? ;
data:           DATA integerLiteral (COMMA integerLiteral)* ;
dataLabel:      DATALABEL stringLiteral ;
dim:            DIM IDENTIFIER OF? type SOPEN expression? (COMMA expression)* SCLOSE ;
exprcall:       IDENTIFIER LPAREN expression? (COMMA expression)* RPAREN ;
end:            END ;
for:            FOR IDENTIFIER (OF? type)? EQ expression TO expression (STEP expression)? statements NEXT ;
if:             IF expression THEN? statementsl (ELSE statementsl)? ;
ifml:           IF expression THEN? NEWLINE statements (ELSE NEWLINE statements)? NEWLINE ENDIF ;
module:         MODULE IDENTIFIER ;
parameter:      REF? ((IDENTIFIER (OF? type)?) | (IDENTIFIER RECORD OF? IDENTIFIER)) ;
print:          PRINT (value=expression (WITH? format=expression)? SEMICOLON?)? ;
procedure:      DEF IDENTIFIER LPAREN? NEWLINE* parameter? (COMMA NEWLINE* parameter)* RPAREN? (OF? type)? separator* statements ENDDEF ;
repeat:         REPEAT statements UNTIL expression ;
read:           READ variable (COMMA variable)* ;
restore:        RESTORE stringLiteral ;
return:         RETURN expression? ;
struct:         DEFRECORD IDENTIFIER separator* IDENTIFIER OF? typeOrStruct (separator+ IDENTIFIER OF? typeOrStruct)* separator* ENDRECORD ;
structDim:      DIM RECORD IDENTIFIER OF? IDENTIFIER SOPEN expression? (COMMA expression)* SCLOSE ;
structInstance: LET? IDENTIFIER EQ RECORD OF? IDENTIFIER (LPAREN (IDENTIFIER EQ expression)? (COMMA IDENTIFIER EQ expression)* RPAREN)? ;
swap:           SWAP variable COMMA variable ;
when:           WHEN expression (COMMA expression)* statements ;
while:          WHILE expression statements ENDWHILE ;

variable
    : IDENTIFIER
        (SOPEN expression? (COMMA expression)* SCLOSE)?
        (DOT IDENTIFIER)*
    ;

expression
    : LPAREN expression RPAREN
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



COMMENT         : (REM | HASH) ~ [\r\n]* ;

CASE            : 'CASE' | 'Case' | 'case' ;
CONST           : 'CONST' | 'Const' | 'const' ;
DATA            : 'DATA' | 'Data' | 'data' ;
DATALABEL       : 'DATALABEL' | 'DataLabel' | 'datalabel' ;
DEF             : 'DEF' | 'Def' | 'def' ;
DIM             : 'DIM' | 'Dim' | 'dim' ;
ELSE            : 'ELSE' | 'Else' | 'else' ;
END             : 'END' | 'End' | 'end' ;
ENDCASE         : 'ENDCASE' | 'EndCase' | 'endcase' ;
ENDDEF          : 'ENDDEF' | 'EndDef' | 'enddef' ;
ENDIF           : 'ENDIF' | 'EndIf' | 'endif' ;
ENDWHILE        : 'ENDWHILE' | 'EndWhile' | 'endwhile' ;
FOR             : 'FOR' | 'For' | 'for' ;
IF              : 'IF' | 'If' | 'if' ;
MODULE          : 'MODULE' | 'Module' | 'module' ;
NEXT            : 'NEXT' | 'Next' | 'next' ;
OF              : 'OF' | 'Of' | 'of' ;
OTHERWISE       : 'OTHERWISE' | 'Otherwise' | 'otherwise' ;
PRINT           : 'PRINT' | 'Print' | 'print' ;
READ            : 'READ' | 'Read' | 'read' ;
REF             : 'REF' | 'Ref' | 'ref' ;
REM             : 'REM' | 'Rem' | 'rem' ;
REPEAT          : 'REPEAT' | 'Repeat' | 'repeat' ;
RESTORE         : 'RESTORE' | 'Restore' | 'restore' ;
RETURN          : 'RETURN' | 'Return' | 'return' ;
THEN            : 'THEN' | 'Then' | 'then' ;
SIZE            : 'SIZE' | 'Size' | 'size' ;
STEP            : 'STEP' | 'Step' | 'step' ;
SWAP            : 'SWAP' | 'Swap ' | 'swap' ;
TO              : 'TO' | 'To' | 'to' ;
UNTIL           : 'UNTIL' | 'Until' | 'until' ;
WHEN            : 'WHEN' | 'When' | 'when' ;
WITH            : 'WITH' | 'With' | 'with' ;
WHILE           : 'WHILE' | 'While' | 'while' ;

DEFRECORD       : 'DEFRECORD' | 'DefRecord' | 'defrecord' ;
RECORD          : 'RECORD' | 'Record' | 'record' ;
ENDRECORD       : 'ENDRECORD' | 'EndRecord' | 'endrecord' ;

HPTIME          : 'HPTIME' | 'HPTime' | 'hptime' ;
TIME            : 'TIME' | 'Time' | 'time' ;
TIMES           : 'TIME$' | 'Time$' | 'time$' ;

ABS             : 'ABS' | 'Abs' | 'abs' ;
ACS             : 'ACS' | 'Acs' | 'acs'  ;
ASN             : 'ASN' | 'Asn' | 'asn'  ;
ATN             : 'ATN' | 'Atn' | 'atn'  ;
COS             : 'COS' | 'Cos' | 'cos'  ;
DEG             : 'DEG' | 'Deg' | 'deg'  ;
EXP             : 'EXP' | 'Exp' | 'exp'  ;
FLOOR           : 'FLOOR' | 'Floor' | 'floor'  ;
LET             : 'LET' | 'Let' | 'let'  ;
LN              : 'LN' | 'Ln' | 'ln'  ;
LOG             : 'LOG' | 'Log' | 'log'  ;
PI              : 'PI' | 'Pi' | 'pi'  ;
RAD             : 'RAD' | 'Rad' | 'rad'  ;
ROUND           : 'ROUND' | 'Round' | 'round'  ;
SGN             : 'SGN' | 'Sgn' | 'sgn'  ;
SIN             : 'SIN' | 'Sin' | 'sin' ;
SQR             : 'SQR' | 'Sqr' | 'sqr'  ;
TAN             : 'TAN' | 'Tan' | 'tan'  ;

FALSE           : 'FALSE' | 'False' | 'false' ;
TRUE            : 'TRUE' | 'True' | 'true' ;

ASC             : 'ASC' | 'Asc' | 'asc' ;
CHRS            : 'CHR$' | 'Chr$' | 'chr$' ;
INSTR           : 'INSTR' | 'Instr' | 'instr' ;
LEFTS           : 'LEFT$' | 'Left$' | 'left$' ;
MIDS            : 'MID$' | 'Mid$' | 'mid$' ;
RIGHTS          : 'RIGHT$' | 'Right$' | 'right$' ;
LEN             : 'LEN' | 'Len' | 'len' ;

BYTE            : 'BYTE' | 'Byte' | 'byte' ;
INT             : 'INT' | 'Int' | 'int' ;
FLOAT           : 'FLOAT' | 'Float' | 'float' ;
STRING          : 'STRING' | 'String' | 'string' ;

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
MOD             : 'MOD' | 'Mod' | 'mod' ;
DIV             : 'DIV' | 'Div' | 'div' | '//' ;

// Boolean
COMP            : '~' ;
NOT             : 'NOT' | 'Not' | 'not' ;
AND             : 'AND' | 'And' | 'and' ;
OR              : 'OR' | 'Or' | 'or' ;
EOR             : 'EOR' | 'Eor' | 'eor' ;

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