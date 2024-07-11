# Makefile

# Цель по умолчанию
all: lex.yy.c y.tab.c Parser

# Компиляция Bison
y.tab.c: parser.y
	bison -d -y parser.y

# Компиляция Flex
lex.yy.c: lexer.l
	flex lexer.l

# Компиляция main
Parser: main.cpp
	g++ main.cpp -o Parser

# Очистка созданных файлов
clean:
	rm -f Parser y.tab.c y.tab.h lex.yy.c
