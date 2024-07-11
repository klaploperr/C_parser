#pragma once

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <map>

#define YYDEBUG 0

using namespace std;

extern FILE* yyin;
extern int line_no, yy_flex_debug, symbol, pp_flag, errors, do_flag;


extern "C"
{
	void yyerror(const char*);
	int yyparse(void);
	int yylex(void);
	int yywrap();
}

class SymbolTable {
public:
    SymbolTable();
    void enterScope();
    void exitScope();
    bool insert(const string&);
    bool isDeclaredInCurrentScope(const string&);
    bool isDeclared(const string&);

private:
    int currentScope;
    vector<map<string, int>> symbolTables;
};

SymbolTable::SymbolTable()
{
    // Initialize the symbol table.
    currentScope = 0;
    symbolTables.push_back(map<string, int>());
}

void SymbolTable::enterScope()
{
    // Create a new scope within the symbol table.
    currentScope++;
    symbolTables.push_back(map<string, int>());
}

void SymbolTable::exitScope()
{
    // Remove the current scope from the symbol table.
    if (currentScope > 0) {
        symbolTables.pop_back();
        currentScope--;
    }
}

bool SymbolTable::insert(const string& name)
{
    // Insert a variable into the current scope.
    if (!isDeclaredInCurrentScope(name)) {
        symbolTables[currentScope][name] = 0; // You can assign a type or other information here.
        return true;
    }
    return false;
}

bool SymbolTable::isDeclaredInCurrentScope(const string& name)
{
    // Check if a variable is declared in the current scope.
    return symbolTables[currentScope].find(name) != symbolTables[currentScope].end();
}

bool SymbolTable::isDeclared(const std::string& name) {
    // Check if a variable is declared in any scope.
    for (int i = currentScope; i >= 0; i--) {
        if (symbolTables[i].find(name) != symbolTables[i].end()) {
            return true;
        }
    }
    return false;
}

extern SymbolTable Table;