#include "Clanguage.h" 
#include "y.tab.c"
#include "lex.yy.c"

int main(int argc, char* argv[])
{
	#if YYDEBUG
		yydebug = 1;
	#endif
	yyin = fopen(argv[1], "r");
	if (yyin == NULL)
	{
		cout << "file does not exist!";
		exit(-1);
	}
	yyparse();
	return 0;
}