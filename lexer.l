%{
#include "Clanguage.h"
#include "y.tab.h"

int line_no = 1;
int symbol = 1;
void count();
void h_name();
int do_flag = 0;
%}

DIGIT	[0-9]
NONDIGIT	[a-zA-Z_]
NONZERO_DIGIT	[1-9]
O_DIGIT	[0-7]
HEX_DIGIT	[a-fA-F0-9]
HEX_PREFIX	(0X|0x)
LONG_LONG_SUFFIX	(LL|ll)
LONG_SUFFIX	(L|l)
U_SUFFIX (U|u)
EXP	[Ee][+-]?{DIGIT}+
BIN_EXP	[Pp][+-]?{DIGIT}+
F_SUFFIX	(f|F|l|L)
I_SUFFIX	({U_SUFFIX}{LONG_SUFFIX}?|{U_SUFFIX}{LONG_LONG_SUFFIX}|{LONG_SUFFIX}{U_SUFFIX}?|{LONG_LONG_SUFFIX}{U_SUFFIX}?)
ENCODING_PREFIX	(u8|u|U|L)
C_CHAR	([^\"\\\n]|\\([\"\\ntvrf0]|{DIGIT})|\\\n)
H_CHAR	([^\">\-\n|&=])
HEX_QUAD	{HEX_DIGIT}{4}
UNIVERSAL_CHARACTER_NAME (\U{HEX_QUAD}{HEX_QUAD}|\u{HEX_QUAD})
ID_NONDIGIT ({NONDIGIT}|{UNIVERSAL_CHARACTER_NAME})
HEX_CONST	{HEX_PREFIX}{HEX_DIGIT}*
O_CONST	(0+{O_DIGIT}*)
DECIMAL_CONST ({NONZERO_DIGIT}+{DIGIT}*)
FRACT_CONST	({DIGIT}*"."{DIGIT}+|{DIGIT}+"."{DIGIT}*)
HEX_F_CONST	{HEX_PREFIX}({HEX_FRACT_CONST}|{HEX_DIGIT}+){BIN_EXP}{F_SUFFIX}?
DECIMAL_F_CONST	({FRACT_CONST}{EXP}?|{DIGIT}+{EXP}){F_SUFFIX}?
HEX_FRACT_CONST	({HEX_DIGIT}*"."{HEX_DIGIT}+|{HEX_DIGIT}+".")
ESC_SEQ	({SIMPLE_ESC_SEQ}|{OCT_ESC_SEQ}|{HEX_ESC_SEQ}|{UNIVERSAL_CHARACTER_NAME})
SIMPLE_ESC_SEQ	[\'\"\?\\\a\b\n\r\t\v]
OCT_ESC_SEQ	"\"{OCT_DIGIT}{1,3}
HEX_ESC_SEQ	(\x{HEX_DIGIT})+{HEX_DIGIT}
%%

\/\/[^\n]* {
	count();
}


\/\*([^*]|\*+[^*/])*\*+\/ {
    count();
}

"\n" {
	count();
	if(pp_flag)
	{
		pp_flag = 0;
		return NEW_LINE;
	}
}
[ \t\v\f]	{
	count();
}

 /*---------------------------- KEYWORDS --------------------------------*/
"FILE" {
	count();
	return T_FILE;
}
"short"	{ 
	count(); 
	return SHORT; 
}
"int"	{
	count(); 
	return INT; 
}
"long"	{ 
	count(); 
	return LONG; 
}
"float"	{
	count(); 
	return FLOAT; 
}
"double"	{
	count();
	return DOUBLE;
}
"signed"	{ 
	count(); 
	return SIGNED; 
}
"unsigned"	{ 
	count(); 
	return UNSIGNED; 
}
"void"	{
	count(); 
	return VOID; 
}
"char"	{
	count();
	return CHAR; 
}
"const"	{ 
	count();
	return CONST; 
}
"restrict" {
	count();
	return RESTRICT;
}
"volatile"	{
	count(); 
	return VOLATILE;
}
"_Atomic" {
	count();
	return ATOMIC;
}
"struct"	{ 
	count(); 
	return STRUCT; 
}
"union"	{
	count();
	return UNION; 
}
"enum"	{ 
	count(); 
	return ENUM; 
}
"typedef"	{
	count();
	return TYPEDEF; 
}
"extern"	{ 
	count();
	return EXTERN;
}
"static"	{ 
	count(); 
	return STATIC; 
}
"auto"	{
	count();
	return AUTO;
}
"register"	{ 
	count(); 
	return REGISTER; 
}
"_Thread_local" {
	count();
	return THREAD_LOCAL;
}
"_Imaginary" {
	count();
	return IMAGINARY;
}
"_Bool"	{
	count();
	return BOOL;
}
"_Complex"	{
	count();
	return COMPLEX;
}
"_Static_assert"	{
	count();
	return STATIC_ASSERT;
}
"inline" {
	count();
	return INLINE;
}
"if" {
	/*Table.enterScope();*/
	count();
	return IF; 
}
"else"	{ 
	/*Table.enterScope();*/
	count(); 
	return ELSE; 
}
"switch"	{
	/*Table.enterScope();*/
	count();
	return SWITCH; 
}
"case"	{
	/*Table.enterScope();*/
	count();
	return CASE;
}
"default"	{ 
	/*Table.enterScope();*/
	count();
	return DEFAULT;
}
"do"	{
	/*Table.enterScope();*/
	do_flag = 1;
	count();
	return DO;
}
"for"	{
	/*Table.enterScope();*/
	count();
	return FOR; 
}
"goto"	{
	count();
	return GOTO;
}
"while"	{
	/*if(!do_flag)
		Table.enterScope();
	else do_flag = 0;*/
	count(); 
	return WHILE; 
}
"break"	{
	count();
	return BREAK; 
}
"continue"	{
	count();
	return CONTINUE;
}
"return"	{ 
	count(); 
	return RETURN; 
}
"sizeof"	{ 
	count(); 
	return SIZEOF; 
}
"include"	{
	count(); 
	return INCLUDE; 
}
"define"	{
	count();
	return DEFINE;
}
"pragma" {
	count();
	return PRAGMA;
}
"error" {
	return ERROR;
}
"undef"	{
	count();
	return UNDEF;
}
"ifdef"	{
	count();
	return IFDEF;
}
"ifndef"	{
	count();
	return IFNDEF;
}
"endif"	{
	count();
	return ENDIF;
}
"elif"	{
	count();
	ELIF;
}

 /*----------------------------- CONSTANTS --------------------------------*/

({DECIMAL_CONST}|{O_CONST}|{HEX_CONST}){I_SUFFIX}?	{
	count();
	return I_CONST;
}
([LUu]?"\'"{C_CHAR}?"\'")	{
	count();
	return CHAR_CONST;
}
({DECIMAL_F_CONST}|{HEX_F_CONST})	{
	count();
	return F_CONST;
}
{ID_NONDIGIT}({DIGIT}|{ID_NONDIGIT})* {
	count();
	yylval.var = (char*)malloc(strlen(yytext));
	strcpy(yylval.var, yytext);
	return ID;
}
({ENCODING_PREFIX}?"\""{C_CHAR}*"\"")	{
	count();
	return STR_CONST;	
}

 /*---------------------------- PUNCTUATORS -------------------------------*/

">>"	{
	count(); 
	return RIGHT_OP;
}
"<<"	{
	count();
	return LEFT_OP;
}
"->"	{
	count(); 
	return PTR_OP; 
}
"++"	{
	count(); 
	return INC_OP;
}
"--"	{
	count(); 
	return DEC_OP;
}
"||"	{
	count(); 
	return OR_OP;
}
"&&"	{
	count(); 
	return AND_OP; 
}
"^"	{
	count();
	return XOR_OP;
}
"="	{
	count();
	return ASSIGN;
}
"*="	{
	count();
	return MUL_ASSIGN;
}
"|="	{
	count();
	return OR_ASSIGN;
}
">>="	{
	count();
	return RIGHT_ASSIGN;
}
"<<="	{
	count();
	return LEFT_ASSIGN;
}
"&="	{
	count(); 
	return AND_ASSIGN;
}
"+="	{
	count(); 
	return ADD_ASSIGN;
}
"-="	{
	count();
	return SUB_ASSIGN;
}
"/="	{
	count();
	return DIV_ASSIGN;
}
"%="	{
	count();
	return MOD_ASSIGN;
}
"^="	{
	count(); 
	return XOR_ASSIGN;
}
"=="	{
	count(); 
	return EQ_OP;
}
"!="	{
	count();
	return NE_OP;
}
"<="	{
	count();
	return LE_OP;
}
">="	{
	count(); 
	return GE_OP;
}
","	{
	count(); 
	return COMMA; 
}
":"	{
	count();
	return COLON;
}
";"	{
	count();
	return SEMI; 
}
"#"	{
	count();
	pp_flag = 1;
	return HASH;
}
"."	{
	count();
	return DOT;
}
"\""	{
	count();
	return '\"';
}
("{"|"<%")	{ 
	//Table.enterScope();
	count(); 
	return '{';
}
("}"|"%>")	{
	//Table.exitScope();
	count(); 
	return '}';
}
"("	{
	count();
	return '(';
}
")"	{
	count(); 
	return ')';
}
("["|"<:")	{
	count();
	return '[';
}
("]"|":>")	{
	count(); 
	return ']';
}
"&"	{
	count();
	return AMPERSAND;
}
"!"	{
	count();
	return NOT;
}
"~"	{
	count();
	return TILDE;
}
"-"	{
	count();
	return MINUS;
}
"+"	{
	count();
	return PLUS;
}
"*"	{ 
	count();
	return ASTERISK;
}
"/"	{
	count();
	return DIV;
}
"%"	{
	count();
	return MOD;
}
"<"	{
	count();
	return '<';
}
">"	{
	count();
	return '>';
}
"|"	{
	count();
	return '|';
}
"?"	{
	count();
	return Q_MARK;
}
"<"{H_CHAR}+">"	{
	count();
	return H_CHAR_SEQ;
}
. {
	printf("unexpected token \"%s\" ", yytext);
	yyerror("lexical error");
}

%%

int yywrap()
{
	return 1;
}

void count()
{
	int i;
	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n') 
		{
			line_no++;
			symbol = 1;
		}
		else if (yytext[i] == '\t')
			symbol += 4;
		else
			symbol++;
}

void h_name()
{
	/*char c;
	do {
		c = fgetc(yyin);
		if(c == '\n')
		{
			printf("%c\n", c);
			yyerror("wrong header name");
		}
	}
	while(c != '>');*/
}