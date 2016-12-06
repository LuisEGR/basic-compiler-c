/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENTERO = 258,
     REAL = 259,
     CAD = 260,
     VARIABLE = 261,
     INT = 262,
     STRING = 263,
     DOUBLE = 264
   };
#endif
/* Tokens.  */
#define ENTERO 258
#define REAL 259
#define CAD 260
#define VARIABLE 261
#define INT 262
#define STRING 263
#define DOUBLE 264




/* Copy the first part of user declarations.  */
#line 2 "tablaSimbolos.y"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "tablaDeSimbolos.h"


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "tablaSimbolos.y"
{
	int ent;
	double real;
	char* let;
	void* var;
}
/* Line 193 of yacc.c.  */
#line 130 "tablaSimbolos.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 143 "tablaSimbolos.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   464

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   264

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      20,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    16,     2,     2,
      18,    19,    13,    10,     2,    11,     2,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    12,
       2,    17,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    15,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    21,
      25,    28,    32,    35,    39,    42,    46,    50,    56,    62,
      68,    72,    78,    84,    90,    94,   100,   106,   111,   116,
     121,   126,   128,   132,   136,   140,   144,   148,   152,   156,
     160,   164,   168,   172,   176,   180,   184,   188,   192,   196,
     200,   204,   208,   212,   216,   220,   224,   228,   232,   236,
     240,   244,   248,   252,   256,   258,   261,   265,   269,   273,
     277,   281,   285,   287,   291,   295,   297,   300,   304,   308,
     312,   316,   320,   324,   328,   332,   336,   340,   344,   348,
     352,   356,   360,   362,   364,   366,   369,   374,   377,   382,
     385,   390,   394,   398,   402,   406,   412,   418,   424,   430,
     435,   440,   445,   450,   455,   460,   465,   470,   475,   480,
     485,   490,   494,   498,   502,   506,   510,   514,   518,   522,
     526,   530,   534,   538
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      22,     0,    -1,    -1,    22,    23,    -1,    20,    -1,    24,
      20,    -1,    25,    20,    -1,    30,    20,    -1,    26,    20,
      -1,    26,    12,    20,    -1,    29,    20,    -1,    29,    12,
      20,    -1,    27,    20,    -1,    27,    12,    20,    -1,    28,
      20,    -1,    28,    12,    20,    -1,     7,     6,    12,    -1,
       7,     6,    17,    26,    12,    -1,     7,     6,    17,    27,
      12,    -1,     7,     6,    17,    29,    12,    -1,     9,     6,
      12,    -1,     9,     6,    17,    27,    12,    -1,     9,     6,
      17,    29,    12,    -1,     9,     6,    17,    26,    12,    -1,
       8,     6,    12,    -1,     8,     6,    17,    28,    12,    -1,
       8,     6,    17,    26,    12,    -1,     6,    17,    26,    12,
      -1,     6,    17,    27,    12,    -1,     6,    17,    29,    12,
      -1,     6,    17,    28,    12,    -1,     6,    -1,    26,    10,
      26,    -1,    26,    10,    27,    -1,    27,    10,    26,    -1,
      26,    10,    29,    -1,    29,    10,    26,    -1,    28,    10,
      26,    -1,    26,    10,    28,    -1,    26,    11,    26,    -1,
      26,    11,    27,    -1,    27,    11,    26,    -1,    26,    11,
      29,    -1,    29,    11,    26,    -1,    26,    11,    28,    -1,
      28,    11,    26,    -1,    26,    13,    26,    -1,    26,    13,
      29,    -1,    29,    13,    26,    -1,    26,    13,    27,    -1,
      27,    13,    26,    -1,    26,    14,    26,    -1,    26,    14,
      27,    -1,    27,    14,    26,    -1,    26,    14,    29,    -1,
      29,    14,    26,    -1,    26,    15,    26,    -1,    26,    15,
      27,    -1,    27,    15,    26,    -1,    26,    15,    29,    -1,
      29,    15,    26,    -1,    26,    16,    26,    -1,    26,    16,
      27,    -1,    27,    16,    26,    -1,     3,    -1,    11,     3,
      -1,    27,    10,    27,    -1,    27,    11,    27,    -1,    27,
      13,    27,    -1,    27,    14,    27,    -1,    27,    15,    27,
      -1,    27,    16,    27,    -1,     5,    -1,    28,    10,    28,
      -1,    28,    11,    28,    -1,     4,    -1,    11,     4,    -1,
      29,    10,    29,    -1,    29,    11,    29,    -1,    29,    13,
      29,    -1,    29,    14,    29,    -1,    29,    15,    29,    -1,
      29,    10,    27,    -1,    29,    11,    27,    -1,    29,    13,
      27,    -1,    29,    14,    27,    -1,    29,    15,    27,    -1,
      27,    10,    29,    -1,    27,    11,    29,    -1,    27,    13,
      29,    -1,    27,    14,    29,    -1,    27,    15,    29,    -1,
       7,    -1,     9,    -1,     8,    -1,     7,     6,    -1,     7,
       6,    17,    27,    -1,     8,     6,    -1,     8,     6,    17,
      28,    -1,     9,     6,    -1,     9,     6,    17,    29,    -1,
       6,    17,    26,    -1,     6,    17,    27,    -1,     6,    17,
      29,    -1,     6,    17,    28,    -1,     8,     6,    17,    27,
      12,    -1,     8,     6,    17,    29,    12,    -1,     7,     6,
      17,    28,    12,    -1,     9,     6,    17,    28,    12,    -1,
      27,    17,    27,    12,    -1,    27,    17,    28,    12,    -1,
      27,    17,    26,    12,    -1,    27,    17,    29,    12,    -1,
      29,    17,    27,    12,    -1,    29,    17,    29,    12,    -1,
      29,    17,    28,    12,    -1,    29,    17,    26,    12,    -1,
      28,    17,    27,    12,    -1,    28,    17,    29,    12,    -1,
      28,    17,    28,    12,    -1,    28,    17,    26,    12,    -1,
      26,    13,    28,    -1,    26,    14,    28,    -1,    26,    15,
      28,    -1,    26,    16,    28,    -1,    28,    13,    26,    -1,
      28,    14,    26,    -1,    28,    15,    26,    -1,    28,    16,
      26,    -1,    29,    16,    29,    -1,    29,    16,    27,    -1,
      27,    16,    29,    -1,    28,    16,    28,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    45,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    67,    68,    69,    70,
      72,    73,    74,    75,    77,    78,    79,    85,   102,   110,
     118,   128,   129,   131,   132,   133,   134,   135,   136,   138,
     139,   140,   141,   142,   143,   144,   146,   147,   148,   149,
     150,   152,   153,   154,   155,   156,   158,   159,   160,   161,
     162,   164,   165,   166,   175,   176,   177,   178,   179,   180,
     181,   182,   186,   187,   188,   193,   194,   195,   196,   197,
     198,   199,   201,   202,   203,   204,   205,   207,   208,   209,
     210,   211,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   238,
     239,   240,   241,   243,   244,   245,   246,   248,   249,   250,
     251,   253,   254,   255,   256,   258,   259,   260,   261,   263,
     264,   265,   266,   267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO", "REAL", "CAD", "VARIABLE",
  "INT", "STRING", "DOUBLE", "'+'", "'-'", "';'", "'*'", "'/'", "'^'",
  "'%'", "'='", "'('", "')'", "'\\n'", "$accept", "input", "line",
  "declarar", "asignar", "opvar", "opint", "opchar", "opdob", "errores", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      43,    45,    59,    42,    47,    94,    37,    61,    40,    41,
      10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    21,    22,    22,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    25,    25,    25,
      25,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    27,    27,    27,    27,    27,    27,
      27,    27,    28,    28,    28,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     2,     3,     3,     5,     5,     5,
       3,     5,     5,     5,     3,     5,     5,     4,     4,     4,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     2,     4,     2,     4,     2,
       4,     3,     3,     3,     3,     5,     5,     5,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    64,    75,    72,    31,    92,    94,    93,
       0,   133,     4,     3,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    97,    99,    65,    76,     5,     6,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     7,    31,   101,   102,   104,   103,
      16,     0,    24,     0,    20,     0,    32,    33,    38,    35,
      39,    40,    44,    42,     9,    46,    49,   121,    47,    51,
      52,   122,    54,    56,    57,   123,    59,    61,    62,   124,
       0,    34,    66,     0,    87,    41,    67,    88,    13,    50,
      68,    89,    53,    69,    90,    58,    70,    91,    63,    71,
     131,     0,     0,     0,     0,    37,     0,    73,    45,    74,
      15,   125,   126,   127,   128,   132,     0,     0,     0,     0,
      36,    82,    77,    43,    83,    78,    11,    48,    84,    79,
      55,    85,    80,    60,    86,    81,   130,   129,     0,     0,
       0,     0,    27,     0,     0,     0,     0,    28,     0,    30,
      29,     0,    96,     0,     0,     0,     0,    98,     0,     0,
       0,     0,   100,   111,   109,   110,   112,   120,   117,   119,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,   113,   115,   114,    17,    18,   107,    19,
      26,   105,    25,   106,    23,    21,   108,    22,    66,    87,
      67,    88,    68,    89,    69,    90,    70,    91,     0,    71,
      82,    77,    83,    78,    84,    79,    85,    80,    86,    81,
       0,     0,     0,     0,     0,    66,    67,    68,    69,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    13,    14,    15,    85,   126,   103,   100,    20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -16
static const yytype_int16 yypact[] =
{
     -16,     1,   -16,   -16,   -16,   -16,   -15,    21,    29,    32,
      20,   -16,   -16,   -16,    31,    33,    53,   191,   212,   296,
      42,    11,    13,    74,    89,   -16,   -16,   -16,   -16,    11,
      11,    51,    11,    11,    11,    11,   -16,    11,    11,    70,
      11,    11,    11,    11,    11,   -16,    11,    11,    80,    11,
      11,    11,    11,    11,   -16,    11,    11,    87,    11,    11,
      11,    15,    11,   -16,   -16,   -16,    34,    67,    92,   223,
     -16,    11,   -16,    11,   -16,    11,   139,   145,   -16,   174,
     139,   145,   -16,   174,   -16,   116,   201,   234,    60,   116,
     201,   234,    60,   -16,   -16,   234,   -16,   -16,   -16,   234,
     413,   139,   145,   234,   174,   139,   145,   174,   -16,   116,
     201,    60,   116,   201,    60,   -16,   -16,   -16,   -16,   -16,
     413,   108,   130,   433,   370,   139,   199,   -16,   139,   -16,
     -16,   356,   356,   356,   356,   234,   158,   170,   436,   376,
     139,   145,   174,   139,   145,   174,   -16,   116,   201,    60,
     116,   201,    60,   -16,   -16,   -16,   363,   419,   283,   307,
     439,   389,   -16,    11,    11,    11,    11,   -16,    11,   -16,
     -16,   314,   321,   442,   395,   328,   335,   445,   401,   342,
     349,   448,   407,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,    15,    15,    15,    15,    15,     0,    15,    15,    15,
      15,    15,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   422,   449,
     422,   449,   242,    79,   242,    79,   -16,   -16,   106,   -16,
     422,   449,   422,   449,   242,    79,   242,    79,    96,   -16,
       0,     0,     0,     0,     0,   426,   426,   246,   246,   -16
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -16,   -16,   -16,   -16,   -16,   230,    -1,   104,    55,   -16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      17,     2,    21,     3,     3,     4,     5,     6,     7,     8,
       9,   228,    10,    11,     3,     4,     5,    65,     3,     4,
      67,    12,    10,    25,    26,    70,    10,    22,    77,    81,
      71,    86,    90,    94,    98,    23,   102,   106,    24,   110,
     113,   116,   119,   122,    29,    30,   162,   163,   164,   165,
     166,    27,   137,    28,   141,   144,    19,   148,   151,   154,
     156,   159,    64,    29,    30,    31,    32,    33,    34,    35,
     172,    84,   176,    36,   180,    60,    69,    37,    38,   167,
      40,    41,    42,   168,    79,    83,    72,    88,    92,    96,
     108,    73,   104,   107,   201,   111,   114,   117,   120,   124,
     130,    74,    46,    47,   169,    18,    75,   146,   139,    25,
     142,   145,   196,   149,   152,   155,   157,   161,    29,    30,
     183,   163,   164,   165,   166,    68,   174,     0,   178,     0,
     182,   165,   166,    78,    82,     0,    87,    91,    95,    99,
      37,    38,   184,    40,    41,    42,   168,     0,   123,     0,
     127,   129,   163,   164,   165,   166,   135,   138,    40,    41,
      42,   168,    86,    90,    94,    98,   160,   119,    29,    30,
     187,   163,   164,   165,   166,   173,     0,   177,     0,   181,
      37,    38,   188,    40,    41,    42,   168,    58,    59,    60,
     218,   220,   222,   224,   226,   229,   230,   232,   234,   236,
     238,    37,    38,    39,    40,    41,    42,    43,    44,    37,
      38,    45,    40,    41,    42,   168,    42,   168,    88,    92,
      96,     0,    46,    47,    48,    49,    50,    51,    52,    53,
       0,    16,    54,    55,    56,   170,    58,    59,    60,   245,
     246,   247,   248,   249,    46,    47,   219,   221,   223,   225,
     227,    66,   231,   233,   235,   237,   239,   195,   196,    76,
      80,   244,   196,    89,    93,    97,     0,   101,   105,     0,
     109,   112,   115,   118,   121,     0,   125,   128,     0,   131,
     132,   133,   134,   136,     0,   140,   143,     0,   147,   150,
     153,     0,   158,    29,    30,   202,   163,   164,   165,   166,
       0,   171,     0,   175,     0,   179,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,    63,    37,    38,   203,
      40,    41,    42,   168,    29,    30,   206,   163,   164,   165,
     166,    37,    38,   207,    40,    41,    42,   168,    29,    30,
     210,   163,   164,   165,   166,    37,    38,   211,    40,    41,
      42,   168,    29,    30,   214,   163,   164,   165,   166,    37,
      38,   215,    40,    41,    42,   168,    29,    30,     0,   163,
     164,   165,   166,   191,   192,     0,   193,   194,   195,   196,
      55,    56,   186,    58,    59,    60,    55,    56,   190,    58,
      59,    60,     0,     0,    89,    93,    97,     0,   118,    55,
      56,   205,    58,    59,    60,    55,    56,   209,    58,    59,
      60,    55,    56,   213,    58,    59,    60,    55,    56,   217,
      58,    59,    60,    55,    56,     0,    58,    59,    60,   197,
     198,     0,   199,   200,   201,   193,   194,   195,   196,   242,
     243,   244,   196,    46,    47,   185,    46,    47,   189,    46,
      47,   204,    46,    47,   208,    46,    47,   212,    46,    47,
     216,     0,   199,   200,   201
};

static const yytype_int16 yycheck[] =
{
       1,     0,    17,     3,     3,     4,     5,     6,     7,     8,
       9,    11,    11,    12,     3,     4,     5,     6,     3,     4,
      21,    20,    11,     3,     4,    12,    11,     6,    29,    30,
      17,    32,    33,    34,    35,     6,    37,    38,     6,    40,
      41,    42,    43,    44,    10,    11,    12,    13,    14,    15,
      16,    20,    53,    20,    55,    56,     1,    58,    59,    60,
      61,    62,    20,    10,    11,    12,    13,    14,    15,    16,
      71,    20,    73,    20,    75,    15,    21,    10,    11,    12,
      13,    14,    15,    16,    29,    30,    12,    32,    33,    34,
      20,    17,    37,    38,    15,    40,    41,    42,    43,    44,
      20,    12,    10,    11,    12,     1,    17,    20,    53,     3,
      55,    56,    16,    58,    59,    60,    61,    62,    10,    11,
      12,    13,    14,    15,    16,    21,    71,    -1,    73,    -1,
      75,    15,    16,    29,    30,    -1,    32,    33,    34,    35,
      10,    11,    12,    13,    14,    15,    16,    -1,    44,    -1,
      46,    47,    13,    14,    15,    16,    52,    53,    13,    14,
      15,    16,   163,   164,   165,   166,    62,   168,    10,    11,
      12,    13,    14,    15,    16,    71,    -1,    73,    -1,    75,
      10,    11,    12,    13,    14,    15,    16,    13,    14,    15,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,    10,    11,    12,    13,    14,    15,    16,    17,    10,
      11,    20,    13,    14,    15,    16,    15,    16,   163,   164,
     165,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,     1,    20,    10,    11,    12,    13,    14,    15,   240,
     241,   242,   243,   244,    10,    11,   191,   192,   193,   194,
     195,    21,   197,   198,   199,   200,   201,    15,    16,    29,
      30,    15,    16,    33,    34,    35,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    -1,    58,    59,
      60,    -1,    62,    10,    11,    12,    13,    14,    15,    16,
      -1,    71,    -1,    73,    -1,    75,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    10,    11,    12,
      13,    14,    15,    16,    10,    11,    12,    13,    14,    15,
      16,    10,    11,    12,    13,    14,    15,    16,    10,    11,
      12,    13,    14,    15,    16,    10,    11,    12,    13,    14,
      15,    16,    10,    11,    12,    13,    14,    15,    16,    10,
      11,    12,    13,    14,    15,    16,    10,    11,    -1,    13,
      14,    15,    16,    10,    11,    -1,    13,    14,    15,    16,
      10,    11,    12,    13,    14,    15,    10,    11,    12,    13,
      14,    15,    -1,    -1,   164,   165,   166,    -1,   168,    10,
      11,    12,    13,    14,    15,    10,    11,    12,    13,    14,
      15,    10,    11,    12,    13,    14,    15,    10,    11,    12,
      13,    14,    15,    10,    11,    -1,    13,    14,    15,    10,
      11,    -1,    13,    14,    15,    13,    14,    15,    16,    13,
      14,    15,    16,    10,    11,    12,    10,    11,    12,    10,
      11,    12,    10,    11,    12,    10,    11,    12,    10,    11,
      12,    -1,    13,    14,    15
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,     0,     3,     4,     5,     6,     7,     8,     9,
      11,    12,    20,    23,    24,    25,    26,    27,    28,    29,
      30,    17,     6,     6,     6,     3,     4,    20,    20,    10,
      11,    12,    13,    14,    15,    16,    20,    10,    11,    12,
      13,    14,    15,    16,    17,    20,    10,    11,    12,    13,
      14,    15,    16,    17,    20,    10,    11,    12,    13,    14,
      15,    16,    17,    20,    20,     6,    26,    27,    28,    29,
      12,    17,    12,    17,    12,    17,    26,    27,    28,    29,
      26,    27,    28,    29,    20,    26,    27,    28,    29,    26,
      27,    28,    29,    26,    27,    28,    29,    26,    27,    28,
      29,    26,    27,    28,    29,    26,    27,    29,    20,    26,
      27,    29,    26,    27,    29,    26,    27,    29,    26,    27,
      29,    26,    27,    28,    29,    26,    27,    28,    26,    28,
      20,    26,    26,    26,    26,    28,    26,    27,    28,    29,
      26,    27,    29,    26,    27,    29,    20,    26,    27,    29,
      26,    27,    29,    26,    27,    29,    27,    29,    26,    27,
      28,    29,    12,    13,    14,    15,    16,    12,    16,    12,
      12,    26,    27,    28,    29,    26,    27,    28,    29,    26,
      27,    28,    29,    12,    12,    12,    12,    12,    12,    12,
      12,    10,    11,    13,    14,    15,    16,    10,    11,    13,
      14,    15,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    27,    29,
      27,    29,    27,    29,    27,    29,    27,    29,    11,    27,
      27,    29,    27,    29,    27,    29,    27,    29,    27,    29,
      10,    11,    13,    14,    15,    27,    27,    27,    27,    27
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 5:
#line 52 "tablaSimbolos.y"
    { printf("> ");;}
    break;

  case 6:
#line 53 "tablaSimbolos.y"
    { printf("> "); ;}
    break;

  case 7:
#line 54 "tablaSimbolos.y"
    {/* Reglas para cachar los errores */;}
    break;

  case 8:
#line 55 "tablaSimbolos.y"
    { showVar((yyvsp[(1) - (2)].var)); ;}
    break;

  case 9:
#line 56 "tablaSimbolos.y"
    { showVar((yyvsp[(1) - (3)].var)); ;}
    break;

  case 10:
#line 57 "tablaSimbolos.y"
    { printf(GREEN " %f %s\n> ", (yyvsp[(1) - (2)].real), RESETCOL); ;}
    break;

  case 11:
#line 58 "tablaSimbolos.y"
    { printf(GREEN " %f %s\n> ", (yyvsp[(1) - (3)].real), RESETCOL); ;}
    break;

  case 12:
#line 59 "tablaSimbolos.y"
    { printf(GREEN " %d %s\n> ", (yyvsp[(1) - (2)].ent), RESETCOL); ;}
    break;

  case 13:
#line 60 "tablaSimbolos.y"
    { printf(GREEN " %d %s\n> ", (yyvsp[(1) - (3)].ent), RESETCOL); ;}
    break;

  case 14:
#line 61 "tablaSimbolos.y"
    { printf(GREEN " '%s'%s\n> ", quitarComillas((yyvsp[(1) - (2)].let)), RESETCOL); ;}
    break;

  case 15:
#line 62 "tablaSimbolos.y"
    { printf(GREEN " '%s'%s\n> ", quitarComillas((yyvsp[(1) - (3)].let)), RESETCOL); ;}
    break;

  case 16:
#line 67 "tablaSimbolos.y"
    { int aux = 0; createInteger((yyvsp[(2) - (3)].let), aux);  ;}
    break;

  case 17:
#line 68 "tablaSimbolos.y"
    { _copyValueInteger((yyvsp[(2) - (5)].let), (yyvsp[(4) - (5)].var)); ;}
    break;

  case 18:
#line 69 "tablaSimbolos.y"
    { int aux = (yyvsp[(4) - (5)].ent); createInteger((yyvsp[(2) - (5)].let), aux);;}
    break;

  case 19:
#line 70 "tablaSimbolos.y"
    { int aux = (yyvsp[(4) - (5)].real); createInteger((yyvsp[(2) - (5)].let), aux); printWarning("Posible perdida de precisión real -> entero");;}
    break;

  case 20:
#line 72 "tablaSimbolos.y"
    { createDouble((yyvsp[(2) - (3)].let), 0.0);;}
    break;

  case 21:
#line 73 "tablaSimbolos.y"
    { createDouble((yyvsp[(2) - (5)].let), (yyvsp[(4) - (5)].ent));;}
    break;

  case 22:
#line 74 "tablaSimbolos.y"
    { createDouble((yyvsp[(2) - (5)].let), (yyvsp[(4) - (5)].real)); ;}
    break;

  case 23:
#line 75 "tablaSimbolos.y"
    { _copyValueDouble((yyvsp[(2) - (5)].let), (yyvsp[(4) - (5)].var));;}
    break;

  case 24:
#line 77 "tablaSimbolos.y"
    { createString((yyvsp[(2) - (3)].let), "");;}
    break;

  case 25:
#line 78 "tablaSimbolos.y"
    { createString((yyvsp[(2) - (5)].let),(yyvsp[(4) - (5)].let));;}
    break;

  case 26:
#line 79 "tablaSimbolos.y"
    { _copyValueString((yyvsp[(2) - (5)].let), (yyvsp[(4) - (5)].var));;}
    break;

  case 27:
#line 85 "tablaSimbolos.y"
    {
		// printf("Asignacion de variable con op.variable\n");
		if(existe((yyvsp[(1) - (4)].let))){
			// printf("Existe!\n" );
			void* V1 = getVariable((yyvsp[(1) - (4)].let));
			if((yyvsp[(3) - (4)].var) != NULL){
				// printf("y es diferente a NULL!\n" );
				Nodo* V2 = (Nodo *) (yyvsp[(3) - (4)].var);
				copyValueVar((yyvsp[(3) - (4)].var), V1);
			}
		}else{
			// getVariable($1);
			printf(BLUE "No existe la variable '%s'! %s\n>", (yyvsp[(1) - (4)].let), RESETCOL );

			// printf("Alguna variable no existe \n>>");
		}
	;}
    break;

  case 28:
#line 102 "tablaSimbolos.y"
    {
		int aux = existe((yyvsp[(1) - (4)].let));
			if(aux==1){
				setIntegerValue((yyvsp[(1) - (4)].let), (yyvsp[(3) - (4)].ent));
			}else{
				printf(BLUE "No existe la variable '%s'! %s\n>", (yyvsp[(1) - (4)].let), RESETCOL );
			}
		;}
    break;

  case 29:
#line 110 "tablaSimbolos.y"
    {
		int aux = existe((yyvsp[(1) - (4)].let));
			if(aux==1){
				actualizar((yyvsp[(1) - (4)].let), (yyvsp[(3) - (4)].real));
			}else{
				printf(BLUE "No existe la variable '%s'! %s\n>", (yyvsp[(1) - (4)].let), RESETCOL );
			}
		;}
    break;

  case 30:
#line 118 "tablaSimbolos.y"
    {
			if(existe((yyvsp[(1) - (4)].let))){
				setStringValue((yyvsp[(1) - (4)].let), (yyvsp[(3) - (4)].let));
			}else{
				printf(BLUE "No existe la variable '%s'! %s\n>", (yyvsp[(1) - (4)].let), RESETCOL );
			}
		;}
    break;

  case 31:
#line 128 "tablaSimbolos.y"
    { (yyval.var) = getVariable((yyvsp[(1) - (1)].let));;}
    break;

  case 32:
#line 129 "tablaSimbolos.y"
    { (yyval.var) = sumarVariables((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].var));;}
    break;

  case 33:
#line 131 "tablaSimbolos.y"
    {	(yyval.var) = variableMasEntero((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].ent));;}
    break;

  case 34:
#line 132 "tablaSimbolos.y"
    {	(yyval.var) = variableMasEntero((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].ent));;}
    break;

  case 35:
#line 133 "tablaSimbolos.y"
    {	(yyval.var) = variableMasDouble((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].real));;}
    break;

  case 36:
#line 134 "tablaSimbolos.y"
    {	(yyval.var) = variableMasDouble((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].real));;}
    break;

  case 37:
#line 135 "tablaSimbolos.y"
    {	(yyval.var) = variableMasCadena((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].let), 2);;}
    break;

  case 38:
#line 136 "tablaSimbolos.y"
    {	(yyval.var) = variableMasCadena((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].let), 1);;}
    break;

  case 39:
#line 138 "tablaSimbolos.y"
    { (yyval.var) = restarVariables((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].var));	;}
    break;

  case 40:
#line 139 "tablaSimbolos.y"
    { (yyval.var) = variableMenosNumero((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].ent), 1);	;}
    break;

  case 41:
#line 140 "tablaSimbolos.y"
    { (yyval.var) = variableMenosNumero((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].ent), 2);	;}
    break;

  case 42:
#line 141 "tablaSimbolos.y"
    { (yyval.var) = variableMenosNumero((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].real), 1);	;}
    break;

  case 43:
#line 142 "tablaSimbolos.y"
    { (yyval.var) = variableMenosNumero((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].real), 2);	;}
    break;

  case 44:
#line 143 "tablaSimbolos.y"
    { (yyval.var) = variableMenosCadena((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].let), 1);	;}
    break;

  case 45:
#line 144 "tablaSimbolos.y"
    { (yyval.var) = variableMenosCadena((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].let), 2);	;}
    break;

  case 46:
#line 146 "tablaSimbolos.y"
    { (yyval.var) = multiplicarVariables((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].var));;}
    break;

  case 47:
#line 147 "tablaSimbolos.y"
    { (yyval.var) = variablePorDouble((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].real));;}
    break;

  case 48:
#line 148 "tablaSimbolos.y"
    { (yyval.var) = variablePorDouble((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].real));;}
    break;

  case 49:
#line 149 "tablaSimbolos.y"
    { (yyval.var) = variablePorDouble((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].ent));;}
    break;

  case 50:
#line 150 "tablaSimbolos.y"
    { (yyval.var) = variablePorDouble((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].ent));;}
    break;

  case 51:
#line 152 "tablaSimbolos.y"
    { (yyval.var) = dividirVariables((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].var));;}
    break;

  case 52:
#line 153 "tablaSimbolos.y"
    { (yyval.var) = variableEntreDouble((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].ent), 1);;}
    break;

  case 53:
#line 154 "tablaSimbolos.y"
    { (yyval.var) = variableEntreDouble((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].ent), 2);;}
    break;

  case 54:
#line 155 "tablaSimbolos.y"
    { (yyval.var) = variableEntreDouble((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].real), 1);;}
    break;

  case 55:
#line 156 "tablaSimbolos.y"
    { (yyval.var) = variableEntreDouble((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].real), 2);;}
    break;

  case 56:
#line 158 "tablaSimbolos.y"
    { (yyval.var) = variablePotenciaVariable((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].var));;}
    break;

  case 57:
#line 159 "tablaSimbolos.y"
    { (yyval.var) = variablePotenciaDouble((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].ent), 1);;}
    break;

  case 58:
#line 160 "tablaSimbolos.y"
    { (yyval.var) = variablePotenciaDouble((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].ent), 2);;}
    break;

  case 59:
#line 161 "tablaSimbolos.y"
    { (yyval.var) = variablePotenciaDouble((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].real), 1);;}
    break;

  case 60:
#line 162 "tablaSimbolos.y"
    { (yyval.var) = variablePotenciaDouble((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].real), 2);;}
    break;

  case 61:
#line 164 "tablaSimbolos.y"
    { (yyval.var) = variableModVariable((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].var));;}
    break;

  case 62:
#line 165 "tablaSimbolos.y"
    { (yyval.var) = variableModEntero((yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].ent), 1);;}
    break;

  case 63:
#line 166 "tablaSimbolos.y"
    { (yyval.var) = variableModEntero((yyvsp[(3) - (3)].var), (yyvsp[(1) - (3)].ent), 2);;}
    break;

  case 64:
#line 175 "tablaSimbolos.y"
    { (yyval.ent) = (yyvsp[(1) - (1)].ent); ;}
    break;

  case 65:
#line 176 "tablaSimbolos.y"
    { (yyval.ent) = (-1)*(yyvsp[(2) - (2)].ent); ;}
    break;

  case 66:
#line 177 "tablaSimbolos.y"
    { (yyval.ent) = (yyvsp[(1) - (3)].ent) + (yyvsp[(3) - (3)].ent); ;}
    break;

  case 67:
#line 178 "tablaSimbolos.y"
    { (yyval.ent) = (yyvsp[(1) - (3)].ent) - (yyvsp[(3) - (3)].ent);	;}
    break;

  case 68:
#line 179 "tablaSimbolos.y"
    { (yyval.ent) = (yyvsp[(1) - (3)].ent) * (yyvsp[(3) - (3)].ent);	;}
    break;

  case 69:
#line 180 "tablaSimbolos.y"
    { (yyval.ent) = (yyvsp[(1) - (3)].ent) / (yyvsp[(3) - (3)].ent);	;}
    break;

  case 70:
#line 181 "tablaSimbolos.y"
    { (yyval.ent) = pow((yyvsp[(1) - (3)].ent),(yyvsp[(3) - (3)].ent));;}
    break;

  case 71:
#line 182 "tablaSimbolos.y"
    { (yyval.ent) = (yyvsp[(1) - (3)].ent) % (yyvsp[(3) - (3)].ent);	;}
    break;

  case 72:
#line 186 "tablaSimbolos.y"
    {	(yyval.let) = (yyvsp[(1) - (1)].let); ;}
    break;

  case 73:
#line 187 "tablaSimbolos.y"
    { (yyval.let) = concat((yyvsp[(1) - (3)].let), (yyvsp[(3) - (3)].let));;}
    break;

  case 74:
#line 188 "tablaSimbolos.y"
    { (yyval.let) = remstr((yyvsp[(1) - (3)].let), (yyvsp[(3) - (3)].let));;}
    break;

  case 75:
#line 193 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); ;}
    break;

  case 76:
#line 194 "tablaSimbolos.y"
    { (yyval.real) = (-1)*(yyvsp[(2) - (2)].real); ;}
    break;

  case 77:
#line 195 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) + (yyvsp[(3) - (3)].real); ;}
    break;

  case 78:
#line 196 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) - (yyvsp[(3) - (3)].real);	;}
    break;

  case 79:
#line 197 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) * (yyvsp[(3) - (3)].real);	;}
    break;

  case 80:
#line 198 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);	;}
    break;

  case 81:
#line 199 "tablaSimbolos.y"
    { (yyval.real) = pow((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 82:
#line 201 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) + (yyvsp[(3) - (3)].ent);	;}
    break;

  case 83:
#line 202 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) - (yyvsp[(3) - (3)].ent);	;}
    break;

  case 84:
#line 203 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) * (yyvsp[(3) - (3)].ent);	;}
    break;

  case 85:
#line 204 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].ent);	;}
    break;

  case 86:
#line 205 "tablaSimbolos.y"
    { (yyval.real) = pow((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].ent));;}
    break;

  case 87:
#line 207 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].ent) + (yyvsp[(3) - (3)].real);	;}
    break;

  case 88:
#line 208 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].ent) - (yyvsp[(3) - (3)].real);	;}
    break;

  case 89:
#line 209 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].ent) * (yyvsp[(3) - (3)].real);	;}
    break;

  case 90:
#line 210 "tablaSimbolos.y"
    { (yyval.real) = (yyvsp[(1) - (3)].ent) / (yyvsp[(3) - (3)].real);	;}
    break;

  case 91:
#line 211 "tablaSimbolos.y"
    { (yyval.real) = pow((yyvsp[(1) - (3)].ent),(yyvsp[(3) - (3)].real));;}
    break;

  case 92:
#line 220 "tablaSimbolos.y"
    {	printError("ERROR - Se esperaba nombre para variable entera! "); ;}
    break;

  case 93:
#line 221 "tablaSimbolos.y"
    {	printError("ERROR - Se esperaba nombre para varible double  ");;}
    break;

  case 94:
#line 222 "tablaSimbolos.y"
    {	printError("ERROR - Se esperaba nombre para variable string ");;}
    break;

  case 95:
#line 223 "tablaSimbolos.y"
    {	printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 96:
#line 224 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 97:
#line 225 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 98:
#line 226 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 99:
#line 227 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 100:
#line 228 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 101:
#line 229 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 102:
#line 230 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 103:
#line 231 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 104:
#line 232 "tablaSimbolos.y"
    { printError("ERROR - Se esperaba Token ';' ");;}
    break;

  case 105:
#line 233 "tablaSimbolos.y"
    { printError("ERROR - No se puede asignar un entero a un string ");;}
    break;

  case 106:
#line 234 "tablaSimbolos.y"
    { printError("ERROR - Conflicto de tipos ");;}
    break;

  case 107:
#line 235 "tablaSimbolos.y"
    { printError("ERROR - Conflicto de tipos ");;}
    break;

  case 108:
#line 236 "tablaSimbolos.y"
    { printError("ERROR - Conflicto de tipos ");;}
    break;

  case 109:
#line 238 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 110:
#line 239 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 111:
#line 240 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 112:
#line 241 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 113:
#line 243 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 114:
#line 244 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 115:
#line 245 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 116:
#line 246 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 117:
#line 248 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 118:
#line 249 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 119:
#line 250 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 120:
#line 251 "tablaSimbolos.y"
    { printError("Asignación inválida!");;}
    break;

  case 121:
#line 253 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 122:
#line 254 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 123:
#line 255 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 124:
#line 256 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 125:
#line 258 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 126:
#line 259 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 127:
#line 260 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 128:
#line 261 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 129:
#line 263 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 130:
#line 264 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 131:
#line 265 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 132:
#line 266 "tablaSimbolos.y"
    {	printError("Operación no definida");;}
    break;

  case 133:
#line 267 "tablaSimbolos.y"
    {  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2277 "tablaSimbolos.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 270 "tablaSimbolos.y"

int main()
{
	int d=0;
	int k;
	printf("\n> ");
	yyparse();
}

yyerror (char *s){  printf (RED "-> %s %s\n",s, RESETCOL ); }
int yywrap(){  return 1;}

