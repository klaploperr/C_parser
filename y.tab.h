
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SHORT = 258,
     INT = 259,
     LONG = 260,
     FLOAT = 261,
     DOUBLE = 262,
     CHAR = 263,
     VOID = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     T_FILE = 267,
     CONST = 268,
     RESTRICT = 269,
     VOLATILE = 270,
     ATOMIC = 271,
     H_CHAR_SEQ = 272,
     Q_CHAR_SEQ = 273,
     STRUCT = 274,
     UNION = 275,
     ENUM = 276,
     TYPEDEF = 277,
     EXTERN = 278,
     STATIC = 279,
     AUTO = 280,
     REGISTER = 281,
     THREAD_LOCAL = 282,
     IMAGINARY = 283,
     BOOL = 284,
     COMPLEX = 285,
     STATIC_ASSERT = 286,
     INLINE = 287,
     IF = 288,
     ELSE = 289,
     SWITCH = 290,
     CASE = 291,
     DEFAULT = 292,
     WHILE = 293,
     DO = 294,
     FOR = 295,
     GOTO = 296,
     BREAK = 297,
     RETURN = 298,
     CONTINUE = 299,
     SIZEOF = 300,
     IFDEF = 301,
     IFNDEF = 302,
     ENDIF = 303,
     ELIF = 304,
     INCLUDE = 305,
     DEFINE = 306,
     PRAGMA = 307,
     ERROR = 308,
     UNDEF = 309,
     CHAR_CONST = 310,
     I_CONST = 311,
     F_CONST = 312,
     ID = 313,
     STR_CONST = 314,
     RIGHT_OP = 315,
     LEFT_OP = 316,
     PTR_OP = 317,
     INC_OP = 318,
     DEC_OP = 319,
     OR_OP = 320,
     AND_OP = 321,
     XOR_OP = 322,
     ASSIGN = 323,
     MUL_ASSIGN = 324,
     OR_ASSIGN = 325,
     RIGHT_ASSIGN = 326,
     AND_ASSIGN = 327,
     LEFT_ASSIGN = 328,
     ADD_ASSIGN = 329,
     SUB_ASSIGN = 330,
     DIV_ASSIGN = 331,
     MOD_ASSIGN = 332,
     XOR_ASSIGN = 333,
     PLUS = 334,
     MINUS = 335,
     MOD = 336,
     AMPERSAND = 337,
     NE_OP = 338,
     EQ_OP = 339,
     LE_OP = 340,
     GE_OP = 341,
     NOT = 342,
     COLON = 343,
     SEMI = 344,
     COMMA = 345,
     HASH = 346,
     DOT = 347,
     NEW_LINE = 348,
     Q_MARK = 349,
     TILDE = 350,
     LOWER_THAN_ELSE = 351,
     DIV = 352,
     ASTERISK = 353
   };
#endif
/* Tokens.  */
#define SHORT 258
#define INT 259
#define LONG 260
#define FLOAT 261
#define DOUBLE 262
#define CHAR 263
#define VOID 264
#define SIGNED 265
#define UNSIGNED 266
#define T_FILE 267
#define CONST 268
#define RESTRICT 269
#define VOLATILE 270
#define ATOMIC 271
#define H_CHAR_SEQ 272
#define Q_CHAR_SEQ 273
#define STRUCT 274
#define UNION 275
#define ENUM 276
#define TYPEDEF 277
#define EXTERN 278
#define STATIC 279
#define AUTO 280
#define REGISTER 281
#define THREAD_LOCAL 282
#define IMAGINARY 283
#define BOOL 284
#define COMPLEX 285
#define STATIC_ASSERT 286
#define INLINE 287
#define IF 288
#define ELSE 289
#define SWITCH 290
#define CASE 291
#define DEFAULT 292
#define WHILE 293
#define DO 294
#define FOR 295
#define GOTO 296
#define BREAK 297
#define RETURN 298
#define CONTINUE 299
#define SIZEOF 300
#define IFDEF 301
#define IFNDEF 302
#define ENDIF 303
#define ELIF 304
#define INCLUDE 305
#define DEFINE 306
#define PRAGMA 307
#define ERROR 308
#define UNDEF 309
#define CHAR_CONST 310
#define I_CONST 311
#define F_CONST 312
#define ID 313
#define STR_CONST 314
#define RIGHT_OP 315
#define LEFT_OP 316
#define PTR_OP 317
#define INC_OP 318
#define DEC_OP 319
#define OR_OP 320
#define AND_OP 321
#define XOR_OP 322
#define ASSIGN 323
#define MUL_ASSIGN 324
#define OR_ASSIGN 325
#define RIGHT_ASSIGN 326
#define AND_ASSIGN 327
#define LEFT_ASSIGN 328
#define ADD_ASSIGN 329
#define SUB_ASSIGN 330
#define DIV_ASSIGN 331
#define MOD_ASSIGN 332
#define XOR_ASSIGN 333
#define PLUS 334
#define MINUS 335
#define MOD 336
#define AMPERSAND 337
#define NE_OP 338
#define EQ_OP 339
#define LE_OP 340
#define GE_OP 341
#define NOT 342
#define COLON 343
#define SEMI 344
#define COMMA 345
#define HASH 346
#define DOT 347
#define NEW_LINE 348
#define Q_MARK 349
#define TILDE 350
#define LOWER_THAN_ELSE 351
#define DIV 352
#define ASTERISK 353




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 12 ".\\parser.y"

	char* var;



/* Line 1676 of yacc.c  */
#line 254 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


