
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
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 ".\\singleParser.y"


#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "ast.h"
#include "semanticAnalyzer.h"

#define YYDEBUG 1

extern int yylineno;
extern FILE* yyin;
extern FILE* yyout;

int analyzeType(char* type);
void yyerror(const char* fmt, ...);


/* Line 189 of yacc.c  */
#line 92 "singleParser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     INT = 258,
     FLOAT = 259,
     DOUBLE = 260,
     VOID = 261,
     CHAR = 262,
     BOOL = 263,
     STRUCT = 264,
     ID = 265,
     TYPE = 266,
     RELOP = 267,
     ASSIGNOP = 268,
     ADD_OP = 269,
     SUB_OP = 270,
     MUL_OP = 271,
     DIV_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     NOT_OP = 275,
     INC_OP = 276,
     DEC_OP = 277,
     EQ_OP = 278,
     IF = 279,
     ELSE = 280,
     DO = 281,
     WHILE = 282,
     BREAK = 283,
     RETURN = 284,
     FOR = 285,
     SWITCH = 286,
     CASE = 287,
     CONTINUE = 288,
     SEMI = 289,
     COMMA = 290,
     LP = 291,
     RP = 292,
     LC = 293,
     RC = 294,
     LB = 295,
     RB = 296,
     COLON = 297,
     LOWER_THAN_ELSE = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 ".\\singleParser.y"

    int type_int;
    float type_float;
    double type_double;

    char type_id[32];
    struct ASTnode *node;



/* Line 214 of yacc.c  */
#line 182 "singleParser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "singleParser.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    16,    20,    23,
      25,    27,    33,    36,    37,    39,    41,    43,    47,    49,
      54,    56,    61,    65,    67,    71,    74,    79,    80,    83,
      86,    88,    92,    95,    98,   104,   112,   118,   124,   132,
     133,   136,   139,   143,   145,   149,   151,   155,   159,   163,
     167,   170,   174,   178,   182,   186,   190,   194,   197,   200,
     203,   206,   210,   214,   219,   221,   223,   225,   227,   231
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    -1,    47,    46,    -1,    48,
      52,    34,    -1,    48,    34,    -1,    48,    55,    58,    -1,
       1,    34,    -1,    11,    -1,    49,    -1,     9,    50,    38,
      61,    39,    -1,     9,    51,    -1,    -1,    10,    -1,    10,
      -1,    53,    -1,    53,    35,    52,    -1,    10,    -1,    54,
      40,     3,    41,    -1,    10,    -1,    10,    36,    56,    37,
      -1,    10,    36,    37,    -1,    57,    -1,    57,    35,    56,
      -1,    48,    53,    -1,    38,    61,    59,    39,    -1,    -1,
      60,    59,    -1,    65,    34,    -1,    58,    -1,    29,    65,
      34,    -1,    28,    34,    -1,    33,    34,    -1,    24,    36,
      65,    37,    60,    -1,    24,    36,    65,    37,    60,    25,
      60,    -1,    27,    36,    65,    37,    60,    -1,    31,    36,
      65,    37,    60,    -1,    26,    60,    27,    36,    65,    37,
      34,    -1,    -1,    62,    61,    -1,     1,    34,    -1,    48,
      63,    34,    -1,    64,    -1,    64,    35,    63,    -1,    53,
      -1,    53,    13,    65,    -1,    65,    13,    65,    -1,    65,
      18,    65,    -1,    65,    19,    65,    -1,    20,    65,    -1,
      65,    12,    65,    -1,    65,    23,    65,    -1,    65,    14,
      65,    -1,    65,    15,    65,    -1,    65,    16,    65,    -1,
      65,    17,    65,    -1,    21,    65,    -1,    65,    21,    -1,
      22,    65,    -1,    65,    22,    -1,    36,    65,    37,    -1,
      10,    36,    37,    -1,    10,    36,    66,    37,    -1,    10,
      -1,     3,    -1,     4,    -1,     5,    -1,    65,    35,    66,
      -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    76,    77,    81,    83,    85,    87,    91,
      93,    97,    98,   102,   103,   107,   110,   112,   116,   117,
     121,   124,   125,   129,   130,   134,   138,   142,   143,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   160,
     161,   162,   166,   170,   171,   175,   176,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   204,   205
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "DOUBLE", "VOID", "CHAR",
  "BOOL", "STRUCT", "ID", "TYPE", "RELOP", "ASSIGNOP", "ADD_OP", "SUB_OP",
  "MUL_OP", "DIV_OP", "AND_OP", "OR_OP", "NOT_OP", "INC_OP", "DEC_OP",
  "EQ_OP", "IF", "ELSE", "DO", "WHILE", "BREAK", "RETURN", "FOR", "SWITCH",
  "CASE", "CONTINUE", "SEMI", "COMMA", "LP", "RP", "LC", "RC", "LB", "RB",
  "COLON", "LOWER_THAN_ELSE", "$accept", "Program", "ExtDefList", "ExtDef",
  "Specifier", "StructSpecifier", "OptStructName", "StructDecl",
  "ExtDecList", "VarDec", "ArrayDec", "FuncDec", "VarList", "ParamDec",
  "CompSt", "StmList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp",
  "Args", 0
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
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    48,
      48,    49,    49,    50,    50,    51,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    58,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    61,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     2,     1,
       1,     5,     2,     0,     1,     1,     1,     3,     1,     4,
       1,     4,     3,     1,     3,     2,     4,     0,     2,     2,
       1,     3,     2,     2,     5,     7,     5,     5,     7,     0,
       2,     2,     3,     1,     3,     1,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     4,     1,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,     9,     0,     2,     0,     0,    10,     8,
      15,     0,    12,     1,     4,    18,     6,     0,    16,     0,
       0,     0,     0,     5,     0,     0,     0,     7,     0,     0,
       0,     0,    22,     0,     0,    23,    18,    17,     0,    27,
      41,    45,     0,    43,    11,    40,    25,    21,     0,    19,
      65,    66,    67,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,    27,     0,     0,
      42,     0,    24,     0,    50,    57,    59,     0,     0,     0,
      32,     0,     0,    33,     0,    26,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    60,     0,    29,    46,
      44,    62,    69,     0,     0,     0,     0,    31,     0,    61,
      51,    47,    53,    54,    55,    56,    48,    49,    52,     0,
      63,     0,     0,     0,     0,    68,    34,     0,    36,    37,
       0,     0,    35,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    29,     8,    11,    12,    17,    18,
      19,    20,    34,    35,    65,    66,    67,    30,    31,    42,
      43,    68,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
      77,    -8,    21,   -59,    11,   -59,    77,    -2,   -59,   -59,
      26,    30,   -59,   -59,   -59,   -16,   -59,    16,   -13,    19,
      31,     4,     7,   -59,    75,    80,    70,   -59,    53,    75,
      50,    70,   -59,    75,    56,    60,    62,   -59,    59,   107,
     -59,    91,    71,    72,   -59,   -59,   -59,   -59,    73,   -59,
     -59,   -59,   -59,    82,   146,   146,   146,    83,   107,    86,
      89,   146,    88,    92,   146,   -59,    93,   107,   244,   146,
     -59,    75,   -59,   143,    25,    25,    25,   146,    98,   146,
     -59,   258,   146,   -59,    39,   -59,   -59,   146,   146,   146,
     146,   146,   146,   146,   146,   -59,   -59,   146,   -59,   272,
     -59,   -59,   229,   100,   171,    94,   183,   -59,   200,   -59,
      99,   284,    12,    12,    25,    25,   308,   296,    99,   146,
     -59,   107,   146,   107,   107,   -59,   114,   212,   -59,   -59,
     107,   108,   -59,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   135,   -59,     1,   -59,   -59,   -59,   120,   -23,
     -59,   -59,   104,   -59,   134,    90,   -58,   -12,   -59,    84,
     -59,   -52,    40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -40
static const yytype_int16 yytable[] =
{
      78,     7,    74,    75,    76,    28,    41,     7,    15,    81,
      46,    13,    84,     2,    39,     3,     2,    99,     3,    45,
      22,   102,    24,    33,   -20,   104,     9,   106,    91,    92,
     108,    10,    16,    95,    96,   110,   111,   112,   113,   114,
     115,   116,   117,   -39,    32,   118,    95,    96,    41,    33,
      23,    87,    88,    89,    90,    91,    92,    93,    94,    25,
      95,    96,    97,   126,   -14,   128,   129,   102,    21,    26,
     127,    28,   132,   -39,   -39,   -39,   109,    -3,     1,     2,
     -39,     3,     2,    38,     3,    36,     2,    40,     3,    44,
     -39,   -39,   -39,    47,   -39,    48,   -39,   -39,   -39,   -39,
      49,   -39,   -20,   -39,    69,    70,   -39,    71,   -39,   -39,
      50,    51,    52,    89,    90,    91,    92,    53,    73,    77,
      95,    96,    79,    80,    82,   105,    83,    54,    55,    56,
     122,    57,    85,    58,    59,    60,    61,   120,    62,   130,
      63,    14,   133,    64,    37,    26,    50,    51,    52,    50,
      51,    52,    72,    53,    27,   100,    53,    86,     0,   125,
       0,     0,     0,    54,    55,    56,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
     101,     0,    64,    87,    88,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    87,    88,    89,    90,    91,
      92,    93,    94,     0,    95,    96,    97,     0,   121,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    93,    94,
     123,    95,    96,    97,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    95,    96,    97,     0,   124,     0,     0,
       0,    87,    88,    89,    90,    91,    92,    93,    94,   131,
      95,    96,    97,     0,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,   119,    95,    96,    97,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,    98,    95,
      96,    97,     0,     0,    87,    88,    89,    90,    91,    92,
      93,    94,   107,    95,    96,    97,    87,     0,    89,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    87,     0,
      89,    90,    91,    92,    93,     0,     0,    95,    96,    97,
      87,     0,    89,    90,    91,    92,     0,     0,     0,    95,
      96,    97
};

static const yytype_int16 yycheck[] =
{
      58,     0,    54,    55,    56,     1,    29,     6,    10,    61,
      33,     0,    64,     9,    26,    11,     9,    69,    11,    31,
      36,    73,    35,    22,    40,    77,    34,    79,    16,    17,
      82,    10,    34,    21,    22,    87,    88,    89,    90,    91,
      92,    93,    94,    39,    37,    97,    21,    22,    71,    48,
      34,    12,    13,    14,    15,    16,    17,    18,    19,    40,
      21,    22,    23,   121,    38,   123,   124,   119,    38,    38,
     122,     1,   130,     3,     4,     5,    37,     0,     1,     9,
      10,    11,     9,     3,    11,    10,     9,    34,    11,    39,
      20,    21,    22,    37,    24,    35,    26,    27,    28,    29,
      41,    31,    40,    33,    13,    34,    36,    35,    38,    39,
       3,     4,     5,    14,    15,    16,    17,    10,    36,    36,
      21,    22,    36,    34,    36,    27,    34,    20,    21,    22,
      36,    24,    39,    26,    27,    28,    29,    37,    31,    25,
      33,     6,    34,    36,    24,    38,     3,     4,     5,     3,
       4,     5,    48,    10,    20,    71,    10,    67,    -1,   119,
      -1,    -1,    -1,    20,    21,    22,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    36,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    -1,    37,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      37,    21,    22,    23,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    -1,    37,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    37,
      21,    22,    23,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    35,    21,    22,    23,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    34,    21,
      22,    23,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    34,    21,    22,    23,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    12,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    21,    22,    23,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     9,    11,    45,    46,    47,    48,    49,    34,
      10,    50,    51,     0,    46,    10,    34,    52,    53,    54,
      55,    38,    36,    34,    35,    40,    38,    58,     1,    48,
      61,    62,    37,    48,    56,    57,    10,    52,     3,    61,
      34,    53,    63,    64,    39,    61,    53,    37,    35,    41,
       3,     4,     5,    10,    20,    21,    22,    24,    26,    27,
      28,    29,    31,    33,    36,    58,    59,    60,    65,    13,
      34,    35,    56,    36,    65,    65,    65,    36,    60,    36,
      34,    65,    36,    34,    65,    39,    59,    12,    13,    14,
      15,    16,    17,    18,    19,    21,    22,    23,    34,    65,
      63,    37,    65,    66,    65,    27,    65,    34,    65,    37,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    35,
      37,    37,    36,    37,    37,    66,    60,    65,    60,    60,
      25,    37,    60,    34
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 72 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, PROGRAM, "Program", yylineno, (yyvsp[(1) - (1)].node));printAST((yyval.node), 0, -1, NULL, 0); fflush(yyout); semantic_Analyze((yyval.node));/*待定:开启语义分析*/;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 76 ".\\singleParser.y"
    { (yyval.node)=NULL;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 77 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, EXTDEFLIST, "ExtDefList", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 81 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXTDEF, "ExtDef", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 83 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, EXTDEF, "ExtDef", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 85 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXTDEF, "ExtDef", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 87 ".\\singleParser.y"
    { (yyval.node)=NULL; ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 91 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, SPECIFIER, "Specifier", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 93 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, SPECIFIER, "Specifier", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 97 ".\\singleParser.y"
    { (yyval.node)=createASTnode(5, STRUCTSPECIFIER, "StructSpecifier", yylineno, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 98 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, STRUCTSPECIFIER, "StructSpecifier", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 102 ".\\singleParser.y"
    { (yyval.node)=createASTnode(0, OPTSTRUCTNAME, "OptStructName: None-Anonymous Struct", yylineno); /*匿名结构体定义*/;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 103 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, OPTSTRUCTNAME, "OptStructName", yylineno, (yyvsp[(1) - (1)].node)); /*常规结构体定义*/;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 107 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, STRUCTDECL, "StructDecl", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 110 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, EXTDECLIST, "ExtDecList", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 112 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXTDECLIST, "ExtDecList", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 116 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, VARDEC, "VarDec", yylineno, (yyvsp[(1) - (1)].node));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 117 ".\\singleParser.y"
    { (yyval.node)=createASTnode(4, VARDEC, "VarDec", yylineno, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 121 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, ARRAYDEC, "ArrayDec", yylineno, (yyvsp[(1) - (1)].node));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 124 ".\\singleParser.y"
    { (yyval.node)=createASTnode(4, FUNCDEC, "FuncDec", yylineno, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 125 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, FUNCDEC, "FuncDec", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 129 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, VARLIST, "VarList", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 130 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, VARLIST, "VarList", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 134 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, PARAMDEC, "ParamDec", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 138 ".\\singleParser.y"
    { (yyval.node)=createASTnode(4, COMPST, "CompSt", yylineno, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 142 ".\\singleParser.y"
    { (yyval.node)=NULL; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 143 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, STMLIST, "StmList", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 147 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, STMT, "Stmt", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 148 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, STMT, "Stmt", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 149 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, STMT, "Stmt", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 150 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, STMT, "Stmt", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 151 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, STMT, "Stmt", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 152 ".\\singleParser.y"
    { (yyval.node)=createASTnode(5, STMT, "Stmt", yylineno, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 153 ".\\singleParser.y"
    { (yyval.node)=createASTnode(7, STMT, "Stmt", yylineno, (yyvsp[(1) - (7)].node), (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 154 ".\\singleParser.y"
    { (yyval.node)=createASTnode(5, STMT, "Stmt", yylineno, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 155 ".\\singleParser.y"
    { (yyval.node)=createASTnode(5, STMT, "Stmt", yylineno, (yyvsp[(1) - (5)].node), (yyvsp[(2) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 156 ".\\singleParser.y"
    { (yyval.node)=createASTnode(7, STMT, "Stmt", yylineno, (yyvsp[(1) - (7)].node), (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(4) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 160 ".\\singleParser.y"
    { (yyval.node)=NULL; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 161 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, DEFLIST, "DefList", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 162 ".\\singleParser.y"
    { (yyval.node)=NULL; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 166 ".\\singleParser.y"
    {(yyval.node)=createASTnode(3, DEF, "Def", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 170 ".\\singleParser.y"
    {(yyval.node)=createASTnode(1, DECLIST, "DecList", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 171 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, DECLIST, "DecList", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 175 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, DEC, "Dec", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 176 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, DEC, "Dec", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 180 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 181 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 182 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 183 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, EXP, "Exp", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 184 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 185 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 186 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 187 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 188 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 189 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 190 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, EXP, "Exp", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 191 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, EXP, "Exp", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 192 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, EXP, "Exp", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 193 ".\\singleParser.y"
    { (yyval.node)=createASTnode(2, EXP, "Exp", yylineno, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 194 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 195 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, EXP, "Exp", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 196 ".\\singleParser.y"
    { (yyval.node)=createASTnode(4, EXP, "Exp", yylineno, (yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 197 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1,EXP,"Exp", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 198 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1,EXP,"Exp", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 199 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1,EXP,"Exp", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 200 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1,EXP,"Exp", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 204 ".\\singleParser.y"
    { (yyval.node)=createASTnode(3, ARGS, "Args", yylineno, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 205 ".\\singleParser.y"
    { (yyval.node)=createASTnode(1, ARGS, "Args", yylineno, (yyvsp[(1) - (1)].node)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2069 "singleParser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
#line 209 ".\\singleParser.y"


int main(int argc, char** argv){
    if(!(yyin=fopen(argv[1], "r")))
        return 1;
    printf("Input FileName: %s\n", argv[1]);
    yylineno = 1;//初始化yylineno
    char* outputPath = "./syntaxTree.txt";
    if((yyout = fopen(outputPath, "w")) == NULL)
        return 1;
    yyparse();//开始语法分析
    return 0;
}

//变长参数列表
void yyerror(const char* fmt, ...){
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Error type B at Line %d: [Grammar Error Start@Column: %d]", yylloc.first_line, yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}
