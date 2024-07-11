%{

#include "Clanguage.h"
int pp_flag = 0;
int errors = 0;
int semi_flag = 0;
SymbolTable Table;
%}

%start program

%union {
	char* var;
}

%token SHORT INT LONG FLOAT DOUBLE CHAR VOID SIGNED UNSIGNED T_FILE
%token CONST RESTRICT VOLATILE ATOMIC
%token H_CHAR_SEQ Q_CHAR_SEQ
%token STRUCT UNION 
%token ENUM
%token TYPEDEF EXTERN STATIC AUTO REGISTER THREAD_LOCAL
%token IMAGINARY BOOL COMPLEX STATIC_ASSERT
%token INLINE
%token IF ELSE 
%token SWITCH CASE DEFAULT
%token WHILE DO FOR GOTO
%token BREAK RETURN CONTINUE
%token SIZEOF
%token IFDEF IFNDEF ENDIF ELIF INCLUDE DEFINE PRAGMA ERROR UNDEF

%token CHAR_CONST I_CONST F_CONST

%token <var> ID 
%token STR_CONST

%token RIGHT_OP LEFT_OP PTR_OP
%token INC_OP DEC_OP
%token OR_OP AND_OP XOR_OP
%token ASSIGN MUL_ASSIGN OR_ASSIGN RIGHT_ASSIGN AND_ASSIGN LEFT_ASSIGN ADD_ASSIGN SUB_ASSIGN DIV_ASSIGN MOD_ASSIGN XOR_ASSIGN
%token PLUS MINUS MOD AMPERSAND

%token NE_OP EQ_OP LE_OP GE_OP NOT
%token COLON SEMI COMMA HASH DOT NEW_LINE Q_MARK TILDE

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%left '<' '>' LE_OP GE_OP EQ_OP NE_OP
%left PLUS MINUS OR_OP
%left ASTERISK DIV MOD AND_OP
%left PTR_OP

%%

 /*------------------------- DECLARATIONS ---------------------------------*/

declaration : declaration_specifier SEMI
	| declaration_specifier
	{
		yyerror("expected \";\" token but not found");
	}
	| declaration_specifier init_declarator_list SEMI
	| declaration_specifier init_declarator_list
	{
		yyerror("expected \";\" token but not found");
	}
	| static_assert_declaration
	;

declaration_specifier : storage_class_specifier_list
	| storage_class_specifier_list specifier_qualifier_list
	| specifier_qualifier_list
	| specifier_qualifier_list storage_class_specifier_list 
	;

type_specifier : CHAR
	| SIGNED CHAR
	| UNSIGNED CHAR
	| SHORT
	| SHORT INT
	| SIGNED SHORT
	| SIGNED SHORT INT
	| UNSIGNED SHORT
	| UNSIGNED SHORT INT
	| INT
	| SIGNED
	| SIGNED INT
	| UNSIGNED
	| UNSIGNED INT
	| LONG
	| LONG INT
	| SIGNED LONG
	| SIGNED LONG INT
	| UNSIGNED LONG
	| UNSIGNED LONG INT
	| LONG LONG
	| LONG LONG INT
	| SIGNED LONG LONG
	| SIGNED LONG LONG INT
	| UNSIGNED LONG LONG
	| UNSIGNED LONG LONG INT
	| FLOAT
	| DOUBLE
	| LONG DOUBLE
	| BOOL
	| COMPLEX
	| IMAGINARY	  
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| VOID
	| T_FILE
	;

init_declarator_list : init_declarator
	| init_declarator_list COMMA init_declarator
	;

init_declarator : declarator ASSIGN init
	| declarator
	;

storage_class_specifier_list : storage_class_specifier
	| storage_class_specifier_list storage_class_specifier
	{
		yyerror("declaring more than one storage class is not allowed");
	}
	;
	
storage_class_specifier : TYPEDEF
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

struct_or_union_specifier : struct_or_union '{' struct_declaration_list '}'
	| struct_or_union ID '{' struct_declaration_list '}'
	{
		//Table.insert($2);
	}
	| struct_or_union ID
	{
		//Table.insert($2);
	}
	;

struct_or_union : STRUCT
	| UNION
	;

struct_declaration_list : struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration : specifier_qualifier_list SEMI	
	| specifier_qualifier_list struct_declarator_list SEMI
	| static_assert_declaration
	;

specifier_qualifier_list : type_specifier type_qualifier_list
	| type_specifier
	| type_qualifier_list type_specifier
	| type_specifier type_specifier
	{
		yyerror("invalid combination of type specifiers");
	}
	;

struct_declarator_list : struct_declarator
	| struct_declarator_list COMMA struct_declarator
	;

struct_declarator : COLON cond_expr
	| declarator COLON cond_expr
	| declarator
	;

enum_specifier : ENUM '{' enumerator_list '}'
	| ENUM ID '{' enumerator_list  '}'
	{
		//Table.insert($2);
	}
	| ENUM ID
	{
		//Table.insert($2);
	}
	;

enumerator_list : enumerator
	| enumerator_list COMMA enumerator
	;

enumerator : 
	| ID ASSIGN cond_expr
	{
		//Table.insert($1);
	}
	| ID
	{
		//Table.insert($1);
	}
	;

atomic_type_specifier : ATOMIC '(' type_name ')'
	;


type_qualifier : CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC
	;

declarator : pointer direct_declarator
	| direct_declarator
	;

direct_declarator : ID
	{
		//Table.insert($1);
	}
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' type_qualifier_list ASTERISK ']'
	| direct_declarator '[' type_qualifier_list assign_expr ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assign_expr ']'
	| direct_declarator '(' param_list ')'
	| direct_declarator '(' id_list ')'
	;

pointer : ASTERISK type_qualifier_list pointer
	| ASTERISK type_qualifier_list
	| ASTERISK pointer
	| ASTERISK
	;

type_qualifier_list : type_qualifier
	| type_qualifier_list type_qualifier
	;


param_list : param_declaration
	| param_list COMMA param_declaration
	| param_list param_declaration
	{
		yyerror("\',\' token is required");
	}
	;

param_declaration : declaration_specifier declarator
	| declaration_specifier abstract_declarator
	| declaration_specifier
	;

id_list : 
	| ID
	{
		//Table.insert($1);

	}
	| id_list COMMA ID
	{
		//Table.insert($3);
	}
	;

init_comma : init_list COMMA
	| init_list
	;

type_name : specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator : pointer
	;

init : '{' init_comma '}'
	| assign_expr
	;

init_list : designation init
	| init
	| init_list COMMA designation init
	| init_list COMMA init
	;

designation : designator_list ASSIGN
	;

designator_list : designator
	| designator_list designator
	;

designator : '[' cond_expr ']'
	| DOT ID
	{
		//Table.insert($2);
	}
	;

static_assert_declaration : STATIC_ASSERT '(' cond_expr COMMA STR_CONST ')' SEMI
	;

/*-------------------------- EXPRESSIONS ------------------------------*/

primary_expr : ID
	{
		/*if(!Table.isDeclared($1))
		{
			string err;
			err.append("Identifier ").append($1).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
	| const
	| '(' expr ')' 
	;

postfix_expr : primary_expr
	| postfix_expr '[' expr ']'
	| postfix_expr '(' arg_expr_list ')'
	| postfix_expr DOT ID
	{
		/*if(!Table.isDeclared($3))
		{
			string err;
			err.append("Identifier ").append($3).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
	| postfix_expr PTR_OP ID
	{
		/*if(!Table.isDeclared($3))
		{
			string err;
			err.append("Identifier ").append($3).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
	| postfix_expr inc_dec
	| '(' type_name ')' '{' init_comma '}'
	;

arg_expr_list : 
	| assign_expr
	| arg_expr_list COMMA assign_expr 
	;

unary_expr : postfix_expr
	| inc_dec unary_expr
	| unary_op cast_expr
	| sizeof_expr
	;

unary_op : AMPERSAND | ASTERISK | PLUS | MINUS | TILDE | NOT 
	;

inc_dec : INC_OP | DEC_OP 
	;

cast_expr : unary_expr
	| '(' type_name ')' cast_expr 
	;

mul_expr : cast_expr
	| mul_expr mul_op cast_expr
	;

mul_op : ASTERISK | DIV | MOD
	;

add_expr : mul_expr
	| add_expr add_op mul_expr
	;

add_op : PLUS | MINUS
	;

shift_expr : add_expr
	| shift_expr LEFT_OP add_expr
	| shift_expr RIGHT_OP add_expr
	;

relational_expr : shift_expr
	| relational_expr '<' shift_expr
	| relational_expr '>' shift_expr
	| relational_expr LE_OP shift_expr
	| relational_expr GE_OP shift_expr
	;

equal_expr : relational_expr
	| equal_expr EQ_OP relational_expr
	| equal_expr NE_OP relational_expr
	;

and_expr : equal_expr
	| and_expr AMPERSAND equal_expr
	;

exclusive_or_expr : and_expr
	| exclusive_or_expr XOR_OP and_expr
	;

inclusive_or_expr : exclusive_or_expr
	| inclusive_or_expr '|' exclusive_or_expr
	;

bool_and_expr : inclusive_or_expr
	| bool_and_expr AND_OP inclusive_or_expr
	;

bool_or_expr : bool_and_expr
	| bool_or_expr OR_OP bool_and_expr
	;

cond_expr : bool_or_expr
	| bool_or_expr Q_MARK expr COLON cond_expr
	;

assign_expr : cond_expr
	| unary_expr assign_op assign_expr
	;

assign_op : ASSIGN
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expr : assign_expr
	| expr COMMA assign_expr
	;

sizeof_expr : SIZEOF unary_expr
	| SIZEOF '(' type_name ')'
	;

for_expr : expr_stmt SEMI expr_stmt SEMI expr_stmt
	| declaration expr_stmt SEMI
	| declaration expr_stmt SEMI expr
	;

 /*--------------------------- STATEMENTS --------------------------------*/

stmt : label_stmt
	| compound_stmt
	| expr_stmt SEMI
	| expr_stmt
	{
		yyerror("expected \";\" token but not found");
	}
	| cond_stmt
	| loop_stmt
	| jump_stmt SEMI
	| jump_stmt
	{
		yyerror("expected \";\" token but not found");
	}
	;

label_stmt : ID label_inside
	{
		//Table.insert($1);
	}
	| CASE cond_expr label_inside
	| DEFAULT label_inside
	;

label_inside : COLON block_item
	;

compound_stmt : '{' '}'
	| '{' block_item_list '}'
	;

block_item_list : block_item
	| block_item_list block_item
	;

block_item : declaration
	| stmt
	;

expr_stmt : 
	| expr
	;

cond_stmt : IF '(' expr ')' stmt else_stmt
	{
		//Table.exitScope();
	}
	| SWITCH '(' expr ')' stmt
	{
		//Table.exitScope();
	}
	;

else_stmt : ELSE stmt
	{
		Table.exitScope();
	}
	| %prec LOWER_THAN_ELSE
	;

loop_stmt : while_stmt
	{
		//Table.exitScope();
	}
	| for_stmt
	{
		//Table.exitScope();
	}
	;

while_stmt : WHILE '(' expr ')' stmt
	| DO stmt WHILE '(' expr ')' SEMI
	| DO stmt WHILE '(' expr ')'
	{
		yyerror("expected \";\" token but not found");
	}
	;

for_stmt : FOR '(' for_expr ')' block_item
	;

jump_stmt : RETURN 
	| RETURN expr
	| BREAK
	| CONTINUE
	| GOTO ID 
	{
		/*if(!Table.isDeclared($2))
		{
			string err;
			err.append("Identifier ").append($2).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
	;

 /*-------------------------- PREPROCESSING DIRECTIVES ------------------------------*/

preprocessing_file : group
	|
	;

group : group_part
	| group group_part
	;

group_part : if_section
	| control_line
	| text_line
	| HASH non_directive
	;

if_section : if_group elif_groups else_group endif_line
	| if_group elif_groups endif_line
	| if_group else_group endif_line
	| if_group endif_line
	;

if_group : HASH IF cond_expr NEW_LINE preprocessing_file
	| HASH IFDEF ID NEW_LINE preprocessing_file
	| HASH IFNDEF ID NEW_LINE preprocessing_file
	;

elif_groups : elif_group
	| elif_groups elif_group
	;

elif_group : HASH ELIF cond_expr NEW_LINE preprocessing_file
	;

else_group : HASH ELSE NEW_LINE preprocessing_file
	;

endif_line : HASH ENDIF NEW_LINE
	;

control_line : HASH INCLUDE pp_tokens NEW_LINE
	| HASH DEFINE ID replacement_list NEW_LINE
	{
		//Table.insert($3);
	}
	| HASH DEFINE '(' id_list ')' replacement_list NEW_LINE
	| HASH UNDEF ID NEW_LINE
	| HASH ERROR pp_tokens NEW_LINE
	| HASH ERROR NEW_LINE
	| HASH PRAGMA pp_tokens NEW_LINE
	| HASH PRAGMA NEW_LINE
	| HASH NEW_LINE
	;

text_line : pp_tokens NEW_LINE
	| NEW_LINE
	;

non_directive : pp_tokens NEW_LINE
	;

replacement_list : pp_tokens
	|
	;

pp_tokens : preprocessing_token
	| pp_tokens preprocessing_token
	;

preprocessing_token : header_name
	| ID
	{
		//Table.insert($1);
	}
	| I_CONST
	| CHAR_CONST
	;

header_name : H_CHAR_SEQ
	| STR_CONST
	;

 /*---------------------------- CONSTANTS -------------------------------*/

const : I_CONST
	| F_CONST
	| CHAR_CONST
	| STR_CONST
	;

/*------------------------- EXTERNAL DEFINITIONS ----------------------------*/

program : code
	{
		if(!errors)
			cout << "Parsing completed, no errors" << endl;
		else
			cout << "Parsing completed with " << errors << " errors" << endl;
	}
	|
	{
		if(!errors)
			cout << "Parsing completed, no errors" << endl;
		else
			cout << "Parsing completed with " << errors << " errors" << endl;
	}
	;

code : preprocessing_file extern_declaration
	| code extern_declaration
	;

extern_declaration : function_definition
	| declaration
	;

function_definition : declaration_specifier declarator declaration_list compound_stmt
	| declaration_specifier declarator compound_stmt
	;

declaration_list : declaration
	| declaration_list declaration
	;

%%

void yyerror(const char* s)
{
	cout << "Error at line " << line_no << ", symbol: " << symbol << ": " << s << endl;
	errors++;
}