
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\parser.y"


#include "Clanguage.h"
int pp_flag = 0;
int errors = 0;
int semi_flag = 0;
SymbolTable Table;


/* Line 189 of yacc.c  */
#line 83 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 12 ".\\parser.y"

	char* var;



/* Line 214 of yacc.c  */
#line 321 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 333 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1538

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNRULES -- Number of states.  */
#define YYNSTATES  471

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     103,   104,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      97,     2,    98,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,     2,   106,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   101,   107,   102,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    99,   100
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    15,    17,    19,    22,
      24,    27,    29,    32,    35,    37,    40,    43,    47,    50,
      54,    56,    58,    61,    63,    66,    68,    71,    74,    78,
      81,    85,    88,    92,    96,   101,   105,   110,   112,   114,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     139,   143,   145,   147,   150,   152,   154,   156,   158,   160,
     162,   167,   173,   176,   178,   180,   182,   185,   188,   192,
     194,   197,   199,   202,   205,   207,   211,   214,   218,   220,
     225,   231,   234,   236,   240,   241,   245,   247,   252,   254,
     256,   258,   260,   263,   265,   267,   271,   275,   281,   287,
     292,   297,   302,   307,   311,   314,   317,   319,   321,   324,
     326,   330,   333,   336,   339,   341,   342,   344,   348,   351,
     353,   356,   358,   360,   364,   366,   369,   371,   376,   380,
     383,   385,   388,   392,   395,   403,   405,   407,   411,   413,
     418,   423,   427,   431,   434,   441,   442,   444,   448,   450,
     453,   456,   458,   460,   462,   464,   466,   468,   470,   472,
     474,   476,   481,   483,   487,   489,   491,   493,   495,   499,
     501,   503,   505,   509,   513,   515,   519,   523,   527,   531,
     533,   537,   541,   543,   547,   549,   553,   555,   559,   561,
     565,   567,   571,   573,   579,   581,   585,   587,   589,   591,
     593,   595,   597,   599,   601,   603,   605,   607,   609,   613,
     616,   621,   627,   631,   636,   638,   640,   643,   645,   647,
     649,   652,   654,   657,   661,   664,   667,   670,   674,   676,
     679,   681,   683,   684,   686,   693,   699,   702,   703,   705,
     707,   713,   721,   728,   734,   736,   739,   741,   743,   746,
     748,   749,   751,   754,   756,   758,   760,   763,   768,   772,
     776,   779,   785,   791,   797,   799,   802,   808,   813,   817,
     822,   828,   836,   841,   846,   850,   855,   859,   862,   865,
     867,   870,   872,   873,   875,   878,   880,   882,   884,   886,
     888,   890,   892,   894,   896,   898,   900,   901,   904,   907,
     909,   911,   916,   920,   922
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     199,     0,    -1,   110,    89,    -1,   110,    -1,   110,   112,
      89,    -1,   110,   112,    -1,   143,    -1,   114,    -1,   114,
     120,    -1,   120,    -1,   120,   114,    -1,     8,    -1,    10,
       8,    -1,    11,     8,    -1,     3,    -1,     3,     4,    -1,
      10,     3,    -1,    10,     3,     4,    -1,    11,     3,    -1,
      11,     3,     4,    -1,     4,    -1,    10,    -1,    10,     4,
      -1,    11,    -1,    11,     4,    -1,     5,    -1,     5,     4,
      -1,    10,     5,    -1,    10,     5,     4,    -1,    11,     5,
      -1,    11,     5,     4,    -1,     5,     5,    -1,     5,     5,
       4,    -1,    10,     5,     5,    -1,    10,     5,     5,     4,
      -1,    11,     5,     5,    -1,    11,     5,     5,     4,    -1,
       6,    -1,     7,    -1,     5,     7,    -1,    29,    -1,    30,
      -1,    28,    -1,   126,    -1,   116,    -1,   123,    -1,     9,
      -1,    12,    -1,   113,    -1,   112,    90,   113,    -1,   128,
      68,   138,    -1,   128,    -1,   115,    -1,   114,   115,    -1,
      22,    -1,    23,    -1,    24,    -1,    27,    -1,    25,    -1,
      26,    -1,   117,   101,   118,   102,    -1,   117,    58,   101,
     118,   102,    -1,   117,    58,    -1,    19,    -1,    20,    -1,
     119,    -1,   118,   119,    -1,   120,    89,    -1,   120,   121,
      89,    -1,   143,    -1,   111,   131,    -1,   111,    -1,   131,
     111,    -1,   111,   111,    -1,   122,    -1,   121,    90,   122,
      -1,    88,   163,    -1,   128,    88,   163,    -1,   128,    -1,
      21,   101,   124,   102,    -1,    21,    58,   101,   124,   102,
      -1,    21,    58,    -1,   125,    -1,   124,    90,   125,    -1,
      -1,    58,    68,   163,    -1,    58,    -1,    16,   103,   136,
     104,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
     130,   129,    -1,   129,    -1,    58,    -1,   103,   128,   104,
      -1,   129,   105,   106,    -1,   129,   105,   131,   100,   106,
      -1,   129,   105,   131,   164,   106,    -1,   129,   105,   131,
     106,    -1,   129,   105,   164,   106,    -1,   129,   103,   132,
     104,    -1,   129,   103,   134,   104,    -1,   100,   131,   130,
      -1,   100,   131,    -1,   100,   130,    -1,   100,    -1,   127,
      -1,   131,   127,    -1,   133,    -1,   132,    90,   133,    -1,
     132,   133,    -1,   110,   128,    -1,   110,   137,    -1,   110,
      -1,    -1,    58,    -1,   134,    90,    58,    -1,   139,    90,
      -1,   139,    -1,   120,   137,    -1,   120,    -1,   130,    -1,
     101,   135,   102,    -1,   164,    -1,   140,   138,    -1,   138,
      -1,   139,    90,   140,   138,    -1,   139,    90,   138,    -1,
     141,    68,    -1,   142,    -1,   141,   142,    -1,   105,   163,
     106,    -1,    92,    58,    -1,    31,   103,   163,    90,    59,
     104,    89,    -1,    58,    -1,   198,    -1,   103,   166,   104,
      -1,   144,    -1,   145,   105,   166,   106,    -1,   145,   103,
     146,   104,    -1,   145,    92,    58,    -1,   145,    62,    58,
      -1,   145,   149,    -1,   103,   136,   104,   101,   135,   102,
      -1,    -1,   164,    -1,   146,    90,   164,    -1,   145,    -1,
     149,   147,    -1,   148,   150,    -1,   167,    -1,    82,    -1,
     100,    -1,    79,    -1,    80,    -1,    95,    -1,    87,    -1,
      63,    -1,    64,    -1,   147,    -1,   103,   136,   104,   150,
      -1,   150,    -1,   151,   152,   150,    -1,   100,    -1,    99,
      -1,    81,    -1,   151,    -1,   153,   154,   151,    -1,    79,
      -1,    80,    -1,   153,    -1,   155,    61,   153,    -1,   155,
      60,   153,    -1,   155,    -1,   156,    97,   155,    -1,   156,
      98,   155,    -1,   156,    85,   155,    -1,   156,    86,   155,
      -1,   156,    -1,   157,    84,   156,    -1,   157,    83,   156,
      -1,   157,    -1,   158,    82,   157,    -1,   158,    -1,   159,
      67,   158,    -1,   159,    -1,   160,   107,   159,    -1,   160,
      -1,   161,    66,   160,    -1,   161,    -1,   162,    65,   161,
      -1,   162,    -1,   162,    94,   166,    88,   163,    -1,   163,
      -1,   147,   165,   164,    -1,    68,    -1,    69,    -1,    76,
      -1,    77,    -1,    74,    -1,    75,    -1,    73,    -1,    71,
      -1,    72,    -1,    78,    -1,    70,    -1,   164,    -1,   166,
      90,   164,    -1,    45,   147,    -1,    45,   103,   136,   104,
      -1,   175,    89,   175,    89,   175,    -1,   109,   175,    89,
      -1,   109,   175,    89,   166,    -1,   170,    -1,   172,    -1,
     175,    89,    -1,   175,    -1,   176,    -1,   178,    -1,   181,
      89,    -1,   181,    -1,    58,   171,    -1,    36,   163,   171,
      -1,    37,   171,    -1,    88,   174,    -1,   101,   102,    -1,
     101,   173,   102,    -1,   174,    -1,   173,   174,    -1,   109,
      -1,   169,    -1,    -1,   166,    -1,    33,   103,   166,   104,
     169,   177,    -1,    35,   103,   166,   104,   169,    -1,    34,
     169,    -1,    -1,   179,    -1,   180,    -1,    38,   103,   166,
     104,   169,    -1,    39,   169,    38,   103,   166,   104,    89,
      -1,    39,   169,    38,   103,   166,   104,    -1,    40,   103,
     168,   104,   174,    -1,    43,    -1,    43,   166,    -1,    42,
      -1,    44,    -1,    41,    58,    -1,   183,    -1,    -1,   184,
      -1,   183,   184,    -1,   185,    -1,   191,    -1,   192,    -1,
      91,   193,    -1,   186,   187,   189,   190,    -1,   186,   187,
     190,    -1,   186,   189,   190,    -1,   186,   190,    -1,    91,
      33,   163,    93,   182,    -1,    91,    46,    58,    93,   182,
      -1,    91,    47,    58,    93,   182,    -1,   188,    -1,   187,
     188,    -1,    91,    49,   163,    93,   182,    -1,    91,    34,
      93,   182,    -1,    91,    48,    93,    -1,    91,    50,   195,
      93,    -1,    91,    51,    58,   194,    93,    -1,    91,    51,
     103,   134,   104,   194,    93,    -1,    91,    54,    58,    93,
      -1,    91,    53,   195,    93,    -1,    91,    53,    93,    -1,
      91,    52,   195,    93,    -1,    91,    52,    93,    -1,    91,
      93,    -1,   195,    93,    -1,    93,    -1,   195,    93,    -1,
     195,    -1,    -1,   196,    -1,   195,   196,    -1,   197,    -1,
      58,    -1,    56,    -1,    55,    -1,    17,    -1,    59,    -1,
      56,    -1,    57,    -1,    55,    -1,    59,    -1,   200,    -1,
      -1,   182,   201,    -1,   200,   201,    -1,   202,    -1,   109,
      -1,   110,   128,   203,   172,    -1,   110,   128,   172,    -1,
     109,    -1,   203,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    58,    62,    63,    67,    70,    71,    72,
      73,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   115,   116,
     119,   120,   123,   124,   130,   131,   132,   133,   134,   135,
     138,   139,   143,   149,   150,   153,   154,   157,   158,   159,
     162,   163,   164,   165,   171,   172,   175,   176,   177,   180,
     181,   185,   191,   192,   195,   196,   200,   206,   210,   211,
     212,   213,   216,   217,   220,   224,   225,   226,   227,   228,
     229,   230,   231,   234,   235,   236,   237,   240,   241,   245,
     246,   247,   253,   254,   255,   258,   259,   264,   270,   271,
     274,   275,   278,   281,   282,   285,   286,   287,   288,   291,
     294,   295,   298,   299,   305,   310,   319,   320,   323,   324,
     325,   326,   335,   344,   345,   348,   349,   350,   353,   354,
     355,   356,   359,   359,   359,   359,   359,   359,   362,   362,
     365,   366,   369,   370,   373,   373,   373,   376,   377,   380,
     380,   383,   384,   385,   388,   389,   390,   391,   392,   395,
     396,   397,   400,   401,   404,   405,   408,   409,   412,   413,
     416,   417,   420,   421,   424,   425,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   441,   442,   445,
     446,   449,   450,   451,   456,   457,   458,   459,   463,   464,
     465,   466,   472,   476,   477,   480,   483,   484,   487,   488,
     491,   492,   495,   496,   499,   503,   509,   513,   516,   520,
     526,   527,   528,   534,   537,   538,   539,   540,   541,   554,
     555,   558,   559,   562,   563,   564,   565,   568,   569,   570,
     571,   574,   575,   576,   579,   580,   583,   586,   589,   592,
     593,   597,   598,   599,   600,   601,   602,   603,   606,   607,
     610,   613,   614,   617,   618,   621,   622,   626,   627,   630,
     631,   636,   637,   638,   639,   644,   652,   660,   661,   664,
     665,   668,   669,   672,   673
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SHORT", "INT", "LONG", "FLOAT",
  "DOUBLE", "CHAR", "VOID", "SIGNED", "UNSIGNED", "T_FILE", "CONST",
  "RESTRICT", "VOLATILE", "ATOMIC", "H_CHAR_SEQ", "Q_CHAR_SEQ", "STRUCT",
  "UNION", "ENUM", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "THREAD_LOCAL", "IMAGINARY", "BOOL", "COMPLEX", "STATIC_ASSERT",
  "INLINE", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT", "WHILE", "DO",
  "FOR", "GOTO", "BREAK", "RETURN", "CONTINUE", "SIZEOF", "IFDEF",
  "IFNDEF", "ENDIF", "ELIF", "INCLUDE", "DEFINE", "PRAGMA", "ERROR",
  "UNDEF", "CHAR_CONST", "I_CONST", "F_CONST", "ID", "STR_CONST",
  "RIGHT_OP", "LEFT_OP", "PTR_OP", "INC_OP", "DEC_OP", "OR_OP", "AND_OP",
  "XOR_OP", "ASSIGN", "MUL_ASSIGN", "OR_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "XOR_ASSIGN", "PLUS", "MINUS", "MOD", "AMPERSAND", "NE_OP",
  "EQ_OP", "LE_OP", "GE_OP", "NOT", "COLON", "SEMI", "COMMA", "HASH",
  "DOT", "NEW_LINE", "Q_MARK", "TILDE", "LOWER_THAN_ELSE", "'<'", "'>'",
  "DIV", "ASTERISK", "'{'", "'}'", "'('", "')'", "'['", "']'", "'|'",
  "$accept", "declaration", "declaration_specifier", "type_specifier",
  "init_declarator_list", "init_declarator",
  "storage_class_specifier_list", "storage_class_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list", "param_list",
  "param_declaration", "id_list", "init_comma", "type_name",
  "abstract_declarator", "init", "init_list", "designation",
  "designator_list", "designator", "static_assert_declaration",
  "primary_expr", "postfix_expr", "arg_expr_list", "unary_expr",
  "unary_op", "inc_dec", "cast_expr", "mul_expr", "mul_op", "add_expr",
  "add_op", "shift_expr", "relational_expr", "equal_expr", "and_expr",
  "exclusive_or_expr", "inclusive_or_expr", "bool_and_expr",
  "bool_or_expr", "cond_expr", "assign_expr", "assign_op", "expr",
  "sizeof_expr", "for_expr", "stmt", "label_stmt", "label_inside",
  "compound_stmt", "block_item_list", "block_item", "expr_stmt",
  "cond_stmt", "else_stmt", "loop_stmt", "while_stmt", "for_stmt",
  "jump_stmt", "preprocessing_file", "group", "group_part", "if_section",
  "if_group", "elif_groups", "elif_group", "else_group", "endif_line",
  "control_line", "text_line", "non_directive", "replacement_list",
  "pp_tokens", "preprocessing_token", "header_name", "const", "program",
  "code", "extern_declaration", "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,    60,    62,   352,
     353,   123,   125,    40,    41,    91,    93,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   109,   109,   109,   110,   110,   110,
     110,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   118,   118,   119,   119,   119,
     120,   120,   120,   120,   121,   121,   122,   122,   122,   123,
     123,   123,   124,   124,   125,   125,   125,   126,   127,   127,
     127,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   130,   131,   131,   132,
     132,   132,   133,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   138,   138,   139,   139,   139,   139,   140,
     141,   141,   142,   142,   143,   144,   144,   144,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   152,   153,   153,   154,
     154,   155,   155,   155,   156,   156,   156,   156,   156,   157,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   167,
     167,   168,   168,   168,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   170,   170,   171,   172,   172,   173,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   179,   180,   181,   181,   181,   181,   181,   182,
     182,   183,   183,   184,   184,   184,   184,   185,   185,   185,
     185,   186,   186,   186,   187,   187,   188,   189,   190,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   192,   192,
     193,   194,   194,   195,   195,   196,   196,   196,   196,   197,
     197,   198,   198,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     1,     1,     2,     1,
       2,     1,     2,     2,     1,     2,     2,     3,     2,     3,
       1,     1,     2,     1,     2,     1,     2,     2,     3,     2,
       3,     2,     3,     3,     4,     3,     4,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     2,     1,     3,     2,     3,     1,     4,
       5,     2,     1,     3,     0,     3,     1,     4,     1,     1,
       1,     1,     2,     1,     1,     3,     3,     5,     5,     4,
       4,     4,     4,     3,     2,     2,     1,     1,     2,     1,
       3,     2,     2,     2,     1,     0,     1,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     1,     4,     3,     2,
       1,     2,     3,     2,     7,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     6,     0,     1,     3,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       4,     5,     3,     4,     1,     1,     2,     1,     1,     1,
       2,     1,     2,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     0,     1,     6,     5,     2,     0,     1,     1,
       5,     7,     6,     5,     1,     2,     1,     1,     2,     1,
       0,     1,     2,     1,     1,     1,     2,     4,     3,     3,
       2,     5,     5,     5,     1,     2,     5,     4,     3,     4,
       5,     7,     4,     4,     3,     4,     3,     2,     2,     1,
       2,     1,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     2,     1,
       1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     250,   289,   288,   287,   286,   290,     0,   279,     0,   249,
     251,   253,     0,   254,   255,     0,   283,   285,     0,   295,
       0,     0,     0,     0,     0,     0,     0,     0,   277,   256,
       0,    14,    20,    25,    37,    38,    11,    46,    21,    23,
      47,    88,    89,    90,    91,    63,    64,     0,    54,    55,
      56,    58,    59,    57,    42,    40,    41,     0,   300,     3,
      71,     7,    52,    44,     0,     9,    45,    43,   107,     0,
       6,   297,   299,   252,     0,     0,   264,     0,   260,   278,
     284,     1,   298,     0,   293,   291,   292,   135,   294,   158,
     159,   154,   155,   152,   157,   156,   153,     0,   138,   148,
     160,     0,     0,   162,   167,   171,   174,   179,   182,   184,
     186,   188,   190,   192,     0,   151,   136,     0,     0,     0,
     282,   115,   276,     0,   274,     0,     0,   280,    15,    26,
      31,    39,    16,    22,    27,    12,    18,    24,    29,    13,
       0,    81,    84,     0,    94,     2,   106,     0,     5,    48,
      51,    93,     0,    73,    70,    53,     8,    62,     0,    10,
      72,   108,     0,     0,     0,   265,     0,   258,     0,   259,
       0,   209,   121,     0,   160,   194,   207,     0,     0,     0,
     145,     0,   143,   150,     0,   149,   166,   165,   164,     0,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     269,     0,   281,   116,     0,   275,   273,   272,    32,    17,
      28,    33,    19,    30,    35,     0,    84,    86,     0,    82,
       0,    91,   105,   104,     0,     4,     0,     0,   232,   303,
       3,   302,     0,   115,     0,    92,     0,     0,    65,     0,
      69,     0,   268,     0,   257,     0,   122,   120,     0,   196,
     197,   206,   203,   204,   202,   200,   201,   198,   199,   205,
       0,     0,   137,   142,   141,     0,   146,     0,     0,   163,
     168,   173,   172,   177,   178,   175,   176,   181,   180,   183,
     185,   187,   189,   191,     0,   261,   262,   263,   270,     0,
     282,    34,    36,    87,     0,     0,    84,    79,     0,   103,
      95,    49,    51,     0,    50,   124,     0,     0,     0,     0,
       0,   232,     0,     0,   246,   244,   247,   135,   226,   230,
     233,   231,   214,   215,   232,   228,   217,   218,   219,   238,
     239,   221,   304,   301,   114,     0,   109,     0,    96,     0,
       0,     0,    60,    66,     0,    67,     0,    74,    78,   267,
       0,   210,     0,   161,   195,   208,     0,   140,   139,     0,
       0,   117,     0,    80,    85,    83,     0,     0,     0,     0,
     126,   119,     0,     0,   130,     0,     0,     0,   232,   224,
       0,     0,   232,   248,   245,   222,   227,   229,   216,   220,
     112,   122,   113,     0,   101,   111,   102,   153,    99,     0,
     100,    61,    76,    68,     0,     0,   266,     0,   147,   193,
     271,     0,   133,     0,   123,   118,   125,   129,   131,     0,
       0,   223,   225,     0,     0,   232,     0,     0,   110,    97,
      98,    75,    77,   144,   134,   132,   128,     0,   232,   232,
     232,     0,     0,   232,   232,   127,   237,   235,   240,     0,
     212,   243,     0,   232,   234,   242,   213,   232,   236,   241,
     211
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   329,   240,    60,   148,   149,    61,    62,    63,    64,
     247,   248,    65,   356,   357,    66,   228,   229,    67,    68,
     312,   151,   152,    69,   345,   346,   214,   379,   173,   257,
     380,   381,   382,   383,   384,    70,    98,    99,   275,   174,
     101,   102,   103,   104,   189,   105,   192,   106,   107,   108,
     109,   110,   111,   112,   113,   175,   176,   270,   330,   115,
     436,   331,   332,   389,   333,   334,   335,   336,   337,   464,
     338,   339,   340,   341,     8,     9,    10,    11,    12,    75,
      76,    77,    78,    13,    14,    29,   211,    15,    16,    17,
     116,    18,    19,    71,    72,   242
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -362
static const yytype_int16 yypact[] =
{
      49,  -362,  -362,  -362,  -362,  -362,   195,  -362,  1479,   104,
    -362,  -362,   -36,  -362,  -362,    99,  -362,  -362,    52,  1479,
    1272,    10,    12,   329,   -23,   177,   208,    27,  -362,  -362,
     213,   133,  -362,   134,  -362,  -362,  -362,  -362,   106,   210,
    -362,  -362,  -362,  -362,    90,  -362,  -362,    -2,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,   117,  -362,   -12,
    1508,  1103,  -362,  -362,    -1,   447,  -362,  -362,  -362,  1508,
    -362,  -362,  -362,  -362,     5,   -36,  -362,   135,  -362,  -362,
    -362,  -362,  -362,  1305,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,   827,  -362,   278,
    -362,  1272,  1338,  -362,    65,    88,   201,   119,   172,   142,
     162,   136,   168,   -27,   159,  -362,  -362,   164,   166,   256,
     329,   207,  -362,   319,  -362,   704,   184,  -362,  -362,  -362,
     291,  -362,   293,  -362,   271,  -362,   298,  -362,   279,  -362,
    1508,   181,   251,  1272,  -362,  -362,    28,   103,   200,  -362,
     986,   -43,    -8,  -362,   340,  -362,  -362,   212,  1032,   447,
    -362,  -362,   237,   239,  1272,  -362,   135,  -362,   285,  -362,
     827,  -362,   238,   233,   420,  -362,  -362,   -39,   290,   304,
    1272,  1272,  -362,  -362,   827,  -362,  -362,  -362,  -362,  1272,
    -362,  -362,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1272,  1272,  1272,   104,   104,   104,
    -362,   250,   329,  -362,   -31,  -362,  -362,  -362,  -362,  -362,
    -362,   360,  -362,  -362,   363,   268,   251,   301,   120,  -362,
     289,  -362,  -362,    28,   276,  -362,   103,  1206,   423,  -362,
     -12,  -362,  1069,  1439,   265,   -43,  1032,   928,  -362,   216,
    -362,   104,  -362,   297,  -362,   282,  -362,  -362,  1239,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    1272,  1272,  -362,  -362,  -362,   -26,  -362,   -58,   309,  -362,
      65,    88,    88,   201,   201,   201,   201,   119,   119,   172,
     142,   162,   136,   168,    45,  -362,  -362,  -362,  -362,   324,
     329,  -362,  -362,  -362,   121,  1272,   251,  -362,   381,  -362,
    -362,  -362,   373,  1155,  -362,  -362,   352,   354,  1272,   387,
     374,  1122,   380,   418,  -362,  1272,  -362,   387,  -362,  -362,
     394,  -362,  -362,  -362,   524,  -362,   411,  -362,  -362,  -362,
    -362,   412,  -362,  -362,   103,   395,  -362,   -18,  -362,  1089,
     398,   957,  -362,  -362,  1272,  -362,   218,  -362,   419,  -362,
     104,   405,  1155,  -362,  -362,  -362,  1272,  -362,  -362,   405,
    1272,  -362,   415,  -362,  -362,  -362,   407,   451,  1272,   410,
    -362,   424,  1206,   -21,  -362,  1272,  1272,   387,   625,  -362,
    1272,   475,   726,  -362,   394,  -362,  -362,  -362,  -362,  -362,
    -362,    -8,  -362,  1103,  -362,  -362,  -362,   409,  -362,   413,
    -362,  -362,  -362,  -362,   273,  1272,  -362,   414,  -362,  -362,
    -362,   428,  -362,   416,  -362,  1155,  -362,  -362,  -362,    39,
      46,  -362,  -362,    97,   417,  1272,   437,   432,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  1206,  1122,  1122,
    1122,  1272,   453,   625,  1272,  -362,   522,  -362,  -362,    98,
    1272,  -362,   469,  1122,  -362,   481,   394,  1272,  -362,  -362,
    -362
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -362,    -3,    -6,   140,  -362,   335,   507,   -41,  -362,  -362,
     327,  -220,   -57,  -362,   160,  -362,   349,   270,  -362,   -62,
     -51,  -143,  -136,   -48,  -362,  -324,   334,   222,   -95,   234,
    -226,  -362,   161,  -362,   202,  -144,  -362,  -362,  -362,   -20,
    -362,   490,   -72,   399,  -362,   124,  -362,   196,   127,   389,
     390,   391,   392,   388,  -362,   -19,  -122,  -362,   -94,  -362,
    -362,  -297,  -362,  -293,  -117,  -362,  -319,  -361,  -362,  -362,
    -362,  -362,  -362,  -362,  -190,  -362,   586,  -362,  -362,  -362,
     523,   525,   -47,  -362,  -362,  -362,   299,     0,     7,  -362,
    -362,  -362,  -362,   578,  -362,  -362
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -297
static const yytype_int16 yytable[] =
{
     100,   114,    59,   177,   156,    58,    30,   161,   150,   245,
     232,   314,   154,    59,   250,   397,    58,   295,   296,   297,
     155,   405,    80,   119,   391,   123,   125,   353,   167,   183,
     169,   437,   271,   241,   395,   120,   256,    80,   205,   162,
     172,    41,    42,    43,   231,   225,   144,   427,   368,  -296,
     144,   271,    81,   163,   164,    74,   141,   157,   276,   299,
     243,   359,   244,   171,   366,   272,     1,   206,   117,   432,
     118,   377,   299,   300,   452,   255,   177,   145,   367,   438,
     121,   100,   185,   172,   378,   126,   406,   277,   146,   278,
     177,   147,   161,   462,   431,   147,   234,   309,   233,   142,
     158,   249,   250,   250,     2,     3,   470,     4,     5,   132,
     133,   134,   294,   172,   135,   315,     1,   279,   155,   254,
     212,     1,   350,   100,   230,   343,    80,   172,   146,   271,
      80,   353,    80,   370,   461,   271,   271,   128,   129,   130,
       6,   131,     7,   448,   100,   253,   186,   239,   364,   365,
     449,   456,   457,   458,     2,     3,   426,     4,     5,     2,
       3,   144,     4,     5,   187,   188,   468,   190,   191,   100,
     416,   161,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   363,   271,   271,   249,
     249,   315,    79,   140,     1,     6,   349,     7,   358,   446,
     153,   450,   465,   146,   195,   196,   147,   250,   401,   160,
     306,   306,     1,   136,   137,   138,   197,   198,   139,    80,
     143,   455,   307,   373,   201,     1,   168,   409,    20,   202,
       1,   394,     2,     3,   204,     4,     5,   344,   100,   342,
     315,    21,    22,   203,   418,    23,    24,    25,    26,    27,
       2,     3,   207,     4,     5,   199,   200,   208,   245,   209,
     315,   193,   194,     2,     3,   213,     4,     5,     2,     3,
     122,     4,     5,     1,   144,   220,   221,   217,    41,    42,
      43,   231,   226,   223,   224,   100,   374,   161,    28,   235,
     236,   429,   430,   400,   249,   218,   433,   219,   100,   387,
     212,   124,   222,   315,   354,   355,   127,   413,   414,   227,
      83,     2,     3,   246,     4,     5,   146,   281,   282,   147,
      84,    85,    86,    87,    88,   315,   287,   288,    89,    90,
     251,   144,   252,   163,   100,   412,     1,   258,   146,   344,
     178,    89,    90,   298,    91,    92,     1,    93,   273,   210,
     100,   419,    94,    41,    42,    43,   231,   459,   100,   423,
      95,   354,   274,   358,   301,    96,   466,   302,    97,   305,
     179,   348,   303,   146,     2,     3,   147,     4,     5,   308,
     310,   180,   371,   181,     2,     3,   361,     4,     5,   435,
     360,   283,   284,   285,   286,   100,   442,   344,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,   215,   369,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     376,   237,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,   385,   316,   386,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,    83,    48,
      49,    50,    51,    52,    53,   388,   393,   390,    84,    85,
      86,   327,    88,   392,   271,   403,    89,    90,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   404,
     398,   399,    91,    92,   410,    93,   362,   415,   420,   422,
      94,   421,   424,   434,   425,   439,   443,   444,    95,   440,
     451,   454,   445,    96,   238,   328,    97,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   453,   460,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   463,   316,   467,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,    83,
     469,   311,   159,   351,   441,   304,   375,   347,   402,    84,
      85,    86,   327,    88,   417,   428,   447,    89,    90,   182,
     289,   280,   290,   293,   291,    73,   292,    82,   165,   372,
     166,     0,     0,    91,    92,     0,    93,     0,     0,     0,
       0,    94,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,     0,    96,   238,   396,    97,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     0,   316,     0,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,   327,    88,     0,     0,     0,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,     0,    93,     0,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
      95,     1,     0,     0,     0,    96,   238,     0,    97,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,     2,
       3,     0,     4,     5,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,     0,     0,     0,    89,
      90,     0,     0,     0,     0,     0,     0,   216,     0,     0,
       0,     0,     0,     0,     0,    91,    92,     0,    93,     0,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,     0,     0,    96,     0,     0,    97,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,     0,     0,     0,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,     0,    93,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,     0,    96,     0,     0,
      97,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,    45,    46,    47,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,    45,    46,    47,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,    45,    46,    47,   237,     0,     0,     0,     0,   411,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,   238,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,    41,    42,    43,   231,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,     0,
       0,     0,    89,    90,     0,   316,     0,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,    83,    91,    92,
     238,    93,     0,     0,     0,     0,    94,    84,    85,    86,
     327,    88,     0,     0,    95,    89,    90,     0,     0,   407,
       0,     0,    97,     0,     0,   408,     0,     0,     0,     0,
      83,    91,    92,     0,    93,     0,     0,     0,     0,    94,
      84,    85,    86,    87,    88,     0,     0,    95,    89,    90,
       0,     0,    96,   238,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,     0,    93,     0,     0,
       0,     0,    94,     0,     0,     0,     0,   377,     0,     0,
      95,    83,     0,     0,     0,    96,   313,     0,    97,     0,
     378,    84,    85,    86,    87,    88,     0,     0,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    91,    92,     0,    93,     0,
       0,     0,     0,    94,    84,    85,    86,    87,    88,     0,
       0,    95,    89,    90,     0,     0,    96,   313,     0,    97,
       0,     0,     0,     0,     0,     0,     0,    83,    91,    92,
       0,    93,     0,     0,     0,     0,    94,    84,    85,    86,
      87,    88,     0,     0,    95,    89,    90,     0,     0,    96,
     362,     0,    97,     0,     0,     0,     0,     0,     0,     0,
      83,    91,    92,     0,    93,     0,     0,     0,     0,    94,
      84,    85,    86,    87,    88,     0,     0,    95,    89,    90,
       0,     0,    96,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,    83,    91,    92,     0,    93,     0,     0,
       0,     0,    94,    84,    85,    86,    87,    88,     0,     0,
      95,    89,    90,     0,     0,    96,     0,     0,   170,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,     0,
      93,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,     0,    96,     0,
       0,   184,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,   213,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,    45,    46,    47,
       0,     0,     0,     0,     0,     0,    54,    55,    56
};

static const yytype_int16 yycheck[] =
{
      20,    20,     8,    97,    61,     8,     6,    69,    59,   152,
     146,   237,    60,    19,   158,   334,    19,   207,   208,   209,
      61,   345,    15,    23,   321,    25,    26,   247,    75,   101,
      77,   392,    90,   150,   327,    58,   172,    30,    65,    34,
      97,    13,    14,    15,    16,   140,    58,    68,   106,     0,
      58,    90,     0,    48,    49,    91,    58,    58,   180,    90,
     103,   251,   105,    83,    90,   104,    17,    94,    58,   388,
      58,    92,    90,   104,   435,   170,   170,    89,   104,   403,
     103,   101,   102,   140,   105,    58,   104,   181,   100,   184,
     184,   103,   154,   454,   387,   103,   147,   233,   146,   101,
     101,   158,   246,   247,    55,    56,   467,    58,    59,     3,
       4,     5,   206,   170,     8,   237,    17,   189,   159,   166,
     120,    17,   244,   143,   143,   242,   119,   184,   100,    90,
     123,   351,   125,    88,   453,    90,    90,     4,     4,     5,
      91,     7,    93,   104,   164,   164,    81,   150,   270,   271,
     104,   448,   449,   450,    55,    56,   382,    58,    59,    55,
      56,    58,    58,    59,    99,   100,   463,    79,    80,   189,
     360,   233,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   258,    90,    90,   246,
     247,   313,    93,   103,    17,    91,   244,    93,   249,   425,
      60,   104,   104,   100,    85,    86,   103,   351,   344,    69,
      90,    90,    17,     3,     4,     5,    97,    98,     8,   212,
     103,   447,   102,   102,    82,    17,    91,   349,    33,    67,
      17,   325,    55,    56,    66,    58,    59,   243,   258,   242,
     362,    46,    47,   107,   366,    50,    51,    52,    53,    54,
      55,    56,    93,    58,    59,    83,    84,    93,   401,    93,
     382,    60,    61,    55,    56,    58,    58,    59,    55,    56,
      93,    58,    59,    17,    58,     4,     5,    93,    13,    14,
      15,    16,   101,     4,     5,   305,   305,   349,    93,    89,
      90,   385,   386,   344,   351,     4,   390,     4,   318,   318,
     300,    93,     4,   425,    88,    89,    93,    89,    90,    58,
      45,    55,    56,   101,    58,    59,   100,   193,   194,   103,
      55,    56,    57,    58,    59,   447,   199,   200,    63,    64,
      93,    58,    93,    48,   354,   354,    17,   104,   100,   345,
      62,    63,    64,    93,    79,    80,    17,    82,    58,    93,
     370,   370,    87,    13,    14,    15,    16,   451,   378,   378,
      95,    88,    58,   414,     4,   100,   460,     4,   103,    68,
      92,   106,   104,   100,    55,    56,   103,    58,    59,    90,
     104,   103,    58,   105,    55,    56,   104,    58,    59,   392,
      93,   195,   196,   197,   198,   415,   415,   403,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    93,   104,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      59,    68,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   103,    33,   103,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    22,
      23,    24,    25,    26,    27,    88,    58,   103,    55,    56,
      57,    58,    59,   103,    90,    90,    63,    64,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,   104,
      89,    89,    79,    80,   106,    82,   101,    88,    93,    58,
      87,   104,   102,    38,    90,   106,   102,    89,    95,   106,
     103,    89,   106,   100,   101,   102,   103,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   104,    89,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    34,    33,    89,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      89,   236,    65,   246,   414,   226,   306,   243,   344,    55,
      56,    57,    58,    59,   362,   383,   425,    63,    64,    99,
     201,   192,   202,   205,   203,     9,   204,    19,    75,   300,
      75,    -1,    -1,    79,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,   100,   101,   102,   103,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    17,    -1,    -1,    -1,   100,   101,    -1,   103,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,   103,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    82,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,
     103,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    20,    21,    68,    -1,    -1,    -1,    -1,   102,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,   101,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    13,    14,    15,    16,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    63,    64,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    79,    80,
     101,    82,    -1,    -1,    -1,    -1,    87,    55,    56,    57,
      58,    59,    -1,    -1,    95,    63,    64,    -1,    -1,   100,
      -1,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      45,    79,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      55,    56,    57,    58,    59,    -1,    -1,    95,    63,    64,
      -1,    -1,   100,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      95,    45,    -1,    -1,    -1,   100,   101,    -1,   103,    -1,
     105,    55,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    79,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    55,    56,    57,    58,    59,    -1,
      -1,    95,    63,    64,    -1,    -1,   100,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    79,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    55,    56,    57,
      58,    59,    -1,    -1,    95,    63,    64,    -1,    -1,   100,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    79,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      55,    56,    57,    58,    59,    -1,    -1,    95,    63,    64,
      -1,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    79,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    55,    56,    57,    58,    59,    -1,    -1,
      95,    63,    64,    -1,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,   103,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    58,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    55,    56,    58,    59,    91,    93,   182,   183,
     184,   185,   186,   191,   192,   195,   196,   197,   199,   200,
      33,    46,    47,    50,    51,    52,    53,    54,    93,   193,
     195,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   109,   110,
     111,   114,   115,   116,   117,   120,   123,   126,   127,   131,
     143,   201,   202,   184,    91,   187,   188,   189,   190,    93,
     196,     0,   201,    45,    55,    56,    57,    58,    59,    63,
      64,    79,    80,    82,    87,    95,   100,   103,   144,   145,
     147,   148,   149,   150,   151,   153,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   167,   198,    58,    58,   195,
      58,   103,    93,   195,    93,   195,    58,    93,     4,     4,
       5,     7,     3,     4,     5,     8,     3,     4,     5,     8,
     103,    58,   101,   103,    58,    89,   100,   103,   112,   113,
     128,   129,   130,   111,   131,   115,   120,    58,   101,   114,
     111,   127,    34,    48,    49,   188,   189,   190,    91,   190,
     103,   147,   120,   136,   147,   163,   164,   166,    62,    92,
     103,   105,   149,   150,   103,   147,    81,    99,   100,   152,
      79,    80,   154,    60,    61,    85,    86,    97,    98,    83,
      84,    82,    67,   107,    66,    65,    94,    93,    93,    93,
      93,   194,   195,    58,   134,    93,    93,    93,     4,     4,
       4,     5,     4,     4,     5,   136,   101,    58,   124,   125,
     163,    16,   130,   131,   128,    89,    90,    68,   101,   109,
     110,   172,   203,   103,   105,   129,   101,   118,   119,   120,
     143,    93,    93,   163,   190,   136,   130,   137,   104,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     165,    90,   104,    58,    58,   146,   164,   166,   136,   150,
     151,   153,   153,   155,   155,   155,   155,   156,   156,   157,
     158,   159,   160,   161,   166,   182,   182,   182,    93,    90,
     104,     4,     4,   104,   124,    68,    90,   102,    90,   130,
     104,   113,   128,   101,   138,   164,    33,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    58,   102,   109,
     166,   169,   170,   172,   173,   174,   175,   176,   178,   179,
     180,   181,   109,   172,   110,   132,   133,   134,   106,   131,
     164,   118,   102,   119,    88,    89,   121,   122,   128,   182,
      93,   104,   101,   150,   164,   164,    90,   104,   106,   104,
      88,    58,   194,   102,   163,   125,    59,    92,   105,   135,
     138,   139,   140,   141,   142,   103,   103,   163,    88,   171,
     103,   169,   103,    58,   166,   171,   102,   174,    89,    89,
     128,   130,   137,    90,   104,   133,   104,   100,   106,   164,
     106,   102,   163,    89,    90,    88,   182,   135,   164,   163,
      93,   104,    58,   163,   102,    90,   138,    68,   142,   166,
     166,   171,   174,   166,    38,   109,   168,   175,   133,   106,
     106,   122,   163,   102,    89,   106,   138,   140,   104,   104,
     104,   103,   175,   104,    89,   138,   169,   169,   169,   166,
      89,   174,   175,    34,   177,   104,   166,    89,   169,    89,
     175
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 59 ".\\parser.y"
    {
		yyerror("expected \";\" token but not found");
	}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 64 ".\\parser.y"
    {
		yyerror("expected \";\" token but not found");
	}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 125 ".\\parser.y"
    {
		yyerror("declaring more than one storage class is not allowed");
	}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 140 ".\\parser.y"
    {
		//Table.insert($2);
	}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 144 ".\\parser.y"
    {
		//Table.insert($2);
	}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 166 ".\\parser.y"
    {
		yyerror("invalid combination of type specifiers");
	}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 182 ".\\parser.y"
    {
		//Table.insert($2);
	}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 186 ".\\parser.y"
    {
		//Table.insert($2);
	}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 197 ".\\parser.y"
    {
		//Table.insert($1);
	}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 201 ".\\parser.y"
    {
		//Table.insert($1);
	}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 221 ".\\parser.y"
    {
		//Table.insert($1);
	}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 248 ".\\parser.y"
    {
		yyerror("\',\' token is required");
	}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 260 ".\\parser.y"
    {
		//Table.insert($1);

	}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 265 ".\\parser.y"
    {
		//Table.insert($3);
	}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 300 ".\\parser.y"
    {
		//Table.insert($2);
	}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 311 ".\\parser.y"
    {
		/*if(!Table.isDeclared($1))
		{
			string err;
			err.append("Identifier ").append($1).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 327 ".\\parser.y"
    {
		/*if(!Table.isDeclared($3))
		{
			string err;
			err.append("Identifier ").append($3).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 336 ".\\parser.y"
    {
		/*if(!Table.isDeclared($3))
		{
			string err;
			err.append("Identifier ").append($3).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 460 ".\\parser.y"
    {
		yyerror("expected \";\" token but not found");
	}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 467 ".\\parser.y"
    {
		yyerror("expected \";\" token but not found");
	}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 473 ".\\parser.y"
    {
		//Table.insert($1);
	}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 500 ".\\parser.y"
    {
		//Table.exitScope();
	}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 504 ".\\parser.y"
    {
		//Table.exitScope();
	}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 510 ".\\parser.y"
    {
		Table.exitScope();
	}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 517 ".\\parser.y"
    {
		//Table.exitScope();
	}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 521 ".\\parser.y"
    {
		//Table.exitScope();
	}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 529 ".\\parser.y"
    {
		yyerror("expected \";\" token but not found");
	}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 542 ".\\parser.y"
    {
		/*if(!Table.isDeclared($2))
		{
			string err;
			err.append("Identifier ").append($2).append(" is not defined");
			yyerror(err.c_str());
		}*/
	}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 594 ".\\parser.y"
    {
		//Table.insert($3);
	}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 623 ".\\parser.y"
    {
		//Table.insert($1);
	}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 645 ".\\parser.y"
    {
		if(!errors)
			cout << "Parsing completed, no errors" << endl;
		else
			cout << "Parsing completed with " << errors << " errors" << endl;
	}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 652 ".\\parser.y"
    {
		if(!errors)
			cout << "Parsing completed, no errors" << endl;
		else
			cout << "Parsing completed with " << errors << " errors" << endl;
	}
    break;



/* Line 1455 of yacc.c  */
#line 2561 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 676 ".\\parser.y"


void yyerror(const char* s)
{
	cout << "Error at line " << line_no << ", symbol: " << symbol << ": " << s << endl;
	errors++;
}
