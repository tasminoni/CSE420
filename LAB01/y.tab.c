/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "21201532.y"

#include "symbol_info.h"
#include <iostream>
#include <fstream>

#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);
void yyerror(const char* s);

extern FILE *yyin;

std::ofstream outlog;
int lines = 1;

//function to log token and lexeme
void logToken(const std::string& token, const std::string& lexeme) {
    outlog << "Line no " << lines << ": Token <" << token << "> Lexeme " << lexeme << " found" << std::endl;
}

//function to log grammar rules and source code segments
void logGrammarRule(const std::string& rule, const std::string& source_rule, const std::string& source_text) {
    outlog << "At line no: " << lines << " " << rule << " : " << source_rule << std::endl;
    outlog << std::endl << source_text << std::endl << std::endl;
}


/* Line 371 of yacc.c  */
#line 97 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     WHILE = 261,
     DO = 262,
     BREAK = 263,
     CONTINUE = 264,
     RETURN = 265,
     INT = 266,
     FLOAT = 267,
     CHAR = 268,
     VOID = 269,
     DOUBLE = 270,
     SWITCH = 271,
     CASE = 272,
     DEFAULT = 273,
     PRINTLN = 274,
     ADDOP = 275,
     MULOP = 276,
     INCOP = 277,
     DECOP = 278,
     RELOP = 279,
     ASSIGNOP = 280,
     LOGICOP = 281,
     NOT = 282,
     LPAREN = 283,
     RPAREN = 284,
     LCURL = 285,
     RCURL = 286,
     LTHIRD = 287,
     RTHIRD = 288,
     SEMICOLON = 289,
     COMMA = 290,
     ID = 291,
     CONST_INT = 292,
     CONST_FLOAT = 293,
     LOWER_THAN_ELSE = 294
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define CONTINUE 264
#define RETURN 265
#define INT 266
#define FLOAT 267
#define CHAR 268
#define VOID 269
#define DOUBLE 270
#define SWITCH 271
#define CASE 272
#define DEFAULT 273
#define PRINTLN 274
#define ADDOP 275
#define MULOP 276
#define INCOP 277
#define DECOP 278
#define RELOP 279
#define ASSIGNOP 280
#define LOGICOP 281
#define NOT 282
#define LPAREN 283
#define RPAREN 284
#define LCURL 285
#define RCURL 286
#define LTHIRD 287
#define RTHIRD 288
#define SEMICOLON 289
#define COMMA 290
#define ID 291
#define CONST_INT 292
#define CONST_FLOAT 293
#define LOWER_THAN_ELSE 294



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 241 "y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    21,    27,
      32,    36,    39,    41,    45,    48,    52,    56,    63,    65,
      70,    72,    74,    76,    79,    81,    83,    85,    87,    95,
     101,   109,   115,   121,   125,   127,   130,   132,   136,   138,
     142,   144,   148,   150,   154,   156,   160,   162,   165,   168,
     170,   175,   179,   181,   183,   186,   189,   191,   192,   196,
     198,   200
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    42,    -1,    42,    43,    -1,    43,    -1,
      47,    -1,    44,    -1,    49,    36,    28,    45,    29,    46,
      -1,    49,    36,    28,    29,    46,    -1,    45,    35,    49,
      36,    -1,    45,    35,    49,    -1,    49,    36,    -1,    49,
      -1,    30,    50,    31,    -1,    30,    31,    -1,    49,    48,
      34,    -1,    48,    35,    36,    -1,    48,    35,    36,    32,
      37,    33,    -1,    36,    -1,    36,    32,    37,    33,    -1,
      11,    -1,    12,    -1,    14,    -1,    50,    51,    -1,    51,
      -1,    47,    -1,    52,    -1,    46,    -1,     5,    28,    52,
      52,    53,    29,    51,    -1,     3,    28,    53,    29,    51,
      -1,     3,    28,    53,    29,    51,     4,    51,    -1,     6,
      28,    53,    29,    51,    -1,    19,    28,    36,    29,    34,
      -1,    10,    53,    34,    -1,    34,    -1,    53,    34,    -1,
      54,    -1,    62,    25,    54,    -1,    55,    -1,    55,    26,
      55,    -1,    56,    -1,    56,    24,    56,    -1,    57,    -1,
      56,    20,    57,    -1,    58,    -1,    57,    21,    58,    -1,
      59,    -1,    20,    58,    -1,    27,    58,    -1,    62,    -1,
      36,    28,    60,    29,    -1,    28,    53,    29,    -1,    37,
      -1,    38,    -1,    62,    22,    -1,    62,    23,    -1,    61,
      -1,    -1,    61,    35,    54,    -1,    54,    -1,    36,    -1,
      36,    32,    53,    33,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    45,    51,    59,    65,    73,    79,    87,
      93,    99,   105,   113,   119,   127,   135,   141,   147,   153,
     161,   167,   173,   181,   187,   195,   201,   207,   213,   219,
     225,   246,   252,   258,   266,   272,   280,   286,   294,   300,
     308,   314,   322,   328,   336,   342,   350,   356,   362,   370,
     376,   382,   388,   394,   400,   406,   414,   421,   428,   434,
     442,   448
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BREAK", "CONTINUE", "RETURN", "INT", "FLOAT", "CHAR", "VOID", "DOUBLE",
  "SWITCH", "CASE", "DEFAULT", "PRINTLN", "ADDOP", "MULOP", "INCOP",
  "DECOP", "RELOP", "ASSIGNOP", "LOGICOP", "NOT", "LPAREN", "RPAREN",
  "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", "ID",
  "CONST_INT", "CONST_FLOAT", "LOWER_THAN_ELSE", "$accept", "start",
  "program", "unit", "func_definition", "parameter_list",
  "compound_statement", "var_declaration", "declaration_list",
  "type_specifier", "statements", "statement", "expression_statement",
  "expression", "logic_expression", "rel_expression", "simple_expression",
  "term", "unary_expression", "factor", "argument_list", "arguments",
  "variable", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    45,    45,    46,    46,    47,    48,    48,    48,    48,
      49,    49,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     5,     4,
       3,     2,     1,     3,     2,     3,     3,     6,     1,     4,
       1,     1,     1,     2,     1,     1,     1,     1,     7,     5,
       7,     5,     5,     3,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     2,     1,
       4,     3,     1,     1,     2,     2,     1,     0,     3,     1,
       1,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    21,    22,     0,     2,     4,     6,     5,     0,
       1,     3,    18,     0,     0,     0,    15,     0,     0,     0,
      12,     0,    16,     0,     8,     0,     0,    11,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    34,
      60,    52,    53,    27,    25,     0,     0,    24,    26,     0,
      36,    38,    40,    42,    44,    46,    49,     7,    10,     0,
       0,     0,     0,     0,     0,    47,    49,    48,     0,    57,
       0,    18,    13,    23,    35,     0,     0,     0,     0,    54,
      55,     0,     9,    17,     0,     0,     0,    33,     0,    51,
      59,     0,    56,     0,    39,    43,    41,    45,    37,     0,
       0,     0,     0,    50,     0,    61,    29,     0,    31,    32,
      58,     0,     0,    30,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    19,    43,    44,    13,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      91,    92,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
      70,   -67,   -67,   -67,    13,    70,   -67,   -67,   -67,     3,
     -67,   -67,   -18,    42,     7,    11,   -67,    20,    34,    -5,
      37,    45,    51,    60,   -67,    34,    70,   -67,   -67,    48,
      58,    61,    64,    24,    65,    24,    24,    24,   -67,   -67,
      21,   -67,   -67,   -67,   -67,    59,    96,   -67,   -67,    66,
     -67,    77,    30,    83,   -67,   -67,    89,   -67,    69,    76,
      24,   -11,    24,    79,    81,   -67,    36,   -67,    90,    24,
      24,    86,   -67,   -67,   -67,    24,    24,    24,    24,   -67,
     -67,    24,   -67,   -67,    91,   -11,    92,   -67,    93,   -67,
     -67,    99,    94,    98,   -67,    83,   105,   -67,   -67,   132,
      24,   132,   102,   -67,    24,   -67,   135,   111,   -67,   -67,
     -67,   132,   132,   -67,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -67,   136,   -67,   -67,     4,    28,   -67,     6,
     -67,   -44,   -54,   -25,   -66,    72,    68,    73,   -31,   -67,
     -67,   -67,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      66,    66,    73,    90,    65,    67,     9,    85,    63,    35,
      14,     9,    68,    10,    15,    98,    36,    37,     1,     2,
      20,     3,    24,    39,    25,    40,    41,    42,     8,    57,
      26,   100,    58,     8,    66,    84,    18,    86,   110,    12,
      66,    66,    66,    66,    35,    93,    66,    97,    21,    69,
      76,    36,    37,    70,    77,   106,    22,   108,    79,    80,
      40,    41,    42,    30,    23,    31,    32,   113,   114,    66,
      33,     1,     2,    27,     3,   107,    16,    17,    28,    34,
      35,     1,     2,    29,     3,    59,    60,    36,    37,    61,
      23,    38,    62,    64,    39,    71,    40,    41,    42,    30,
      74,    31,    32,    75,    78,    82,    33,     1,     2,    83,
       3,    79,    80,    87,    81,    34,    35,    88,    15,    89,
      99,   101,   102,    36,    37,    76,    23,    72,   103,   104,
      39,   105,    40,    41,    42,    30,   109,    31,    32,   111,
     112,    11,    33,     1,     2,    96,     3,    94,     0,    95,
       0,    34,    35,     0,     0,     0,     0,     0,     0,    36,
      37,     0,    23,     0,     0,     0,    39,     0,    40,    41,
      42
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      35,    36,    46,    69,    35,    36,     0,    61,    33,    20,
      28,     5,    37,     0,    32,    81,    27,    28,    11,    12,
      14,    14,    18,    34,    29,    36,    37,    38,     0,    25,
      35,    85,    26,     5,    69,    60,    29,    62,   104,    36,
      75,    76,    77,    78,    20,    70,    81,    78,    37,    28,
      20,    27,    28,    32,    24,    99,    36,   101,    22,    23,
      36,    37,    38,     3,    30,     5,     6,   111,   112,   104,
      10,    11,    12,    36,    14,   100,    34,    35,    33,    19,
      20,    11,    12,    32,    14,    37,    28,    27,    28,    28,
      30,    31,    28,    28,    34,    36,    36,    37,    38,     3,
      34,     5,     6,    26,    21,    36,    10,    11,    12,    33,
      14,    22,    23,    34,    25,    19,    20,    36,    32,    29,
      29,    29,    29,    27,    28,    20,    30,    31,    29,    35,
      34,    33,    36,    37,    38,     3,    34,     5,     6,     4,
      29,     5,    10,    11,    12,    77,    14,    75,    -1,    76,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    14,    41,    42,    43,    44,    47,    49,
       0,    43,    36,    48,    28,    32,    34,    35,    29,    45,
      49,    37,    36,    30,    46,    29,    35,    36,    33,    32,
       3,     5,     6,    10,    19,    20,    27,    28,    31,    34,
      36,    37,    38,    46,    47,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    62,    46,    49,    37,
      28,    28,    28,    53,    28,    58,    62,    58,    53,    28,
      32,    36,    31,    51,    34,    26,    20,    24,    21,    22,
      23,    25,    36,    33,    53,    52,    53,    34,    36,    29,
      54,    60,    61,    53,    55,    57,    56,    58,    54,    29,
      52,    29,    29,    29,    35,    33,    51,    53,    51,    34,
      54,     4,    29,    51,    51
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
/* Line 1792 of yacc.c  */
#line 39 "21201532.y"
    {
        logGrammarRule("start", "program", (yyvsp[(1) - (1)])->getname());
        (yyval) = (yyvsp[(1) - (1)]);
    }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 46 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (2)])->getname() + "\n" + (yyvsp[(2) - (2)])->getname();
        (yyval) = new symbol_info(sourceText, "program");
        logGrammarRule("program", "program unit", sourceText);
    }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 52 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "program");
        logGrammarRule("program", "unit", sourceText);
    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 60 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "unit");
        logGrammarRule("unit", "var_declaration", sourceText);
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 66 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "unit");
        logGrammarRule("unit", "func_definition", sourceText);
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 74 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (6)])->getname() + " " + (yyvsp[(2) - (6)])->getname() + "(" + (yyvsp[(4) - (6)])->getname() + ")" + "\n" + (yyvsp[(6) - (6)])->getname();
        (yyval) = new symbol_info(sourceText, "func_def");
        logGrammarRule("func_definition", "type_specifier ID LPAREN parameter_list RPAREN compound_statement", sourceText);
    }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 80 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (5)])->getname() + " " + (yyvsp[(2) - (5)])->getname() + "()" + "\n" + (yyvsp[(5) - (5)])->getname();
        (yyval) = new symbol_info(sourceText, "func_def");
        logGrammarRule("func_definition", "type_specifier ID LPAREN RPAREN compound_statement", sourceText);
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 88 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (4)])->getname() + ", " + (yyvsp[(3) - (4)])->getname() + " " + (yyvsp[(4) - (4)])->getname();
        (yyval) = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "parameter_list COMMA type_specifier ID", sourceText);
    }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 94 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + ", " + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "parameter_list COMMA type_specifier", sourceText);
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 100 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (2)])->getname() + " " + (yyvsp[(2) - (2)])->getname();
        (yyval) = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "type_specifier ID", sourceText);
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 106 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "type_specifier", sourceText);
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 114 "21201532.y"
    {
        std::string sourceText = "{\n" + (yyvsp[(2) - (3)])->getname() + "\n}";
        (yyval) = new symbol_info(sourceText, "compound_stmt");
        logGrammarRule("compound_statement", "LCURL statements RCURL", sourceText);
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 120 "21201532.y"
    {
        std::string sourceText = "{\n}";
        (yyval) = new symbol_info(sourceText, "compound_stmt");
        logGrammarRule("compound_statement", "LCURL RCURL", sourceText);
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 128 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + " " + (yyvsp[(2) - (3)])->getname() + ";";
        (yyval) = new symbol_info(sourceText, "var_decl");
        logGrammarRule("var_declaration", "type_specifier declaration_list SEMICOLON", sourceText);
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 136 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + ", " + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "declaration_list COMMA ID", sourceText);
    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 142 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (6)])->getname() + ", " + (yyvsp[(3) - (6)])->getname() + "[" + (yyvsp[(5) - (6)])->getname() + "]";
        (yyval) = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "declaration_list COMMA ID LTHIRD CONST_INT RTHIRD", sourceText);
    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 148 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "ID", sourceText);
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 154 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (4)])->getname() + "[" + (yyvsp[(3) - (4)])->getname() + "]";
        (yyval) = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "ID LTHIRD CONST_INT RTHIRD", sourceText);
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 162 "21201532.y"
    {
        std::string sourceText = "int";
        (yyval) = new symbol_info(sourceText, "type_spec");
        logGrammarRule("type_specifier", "INT", sourceText);
    }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 168 "21201532.y"
    {
        std::string sourceText = "float";
        (yyval) = new symbol_info(sourceText, "type_spec");
        logGrammarRule("type_specifier", "FLOAT", sourceText);
    }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 174 "21201532.y"
    {
        std::string sourceText = "void";
        (yyval) = new symbol_info(sourceText, "type_spec");
        logGrammarRule("type_specifier", "VOID", sourceText);
    }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 182 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (2)])->getname() + "\n" + (yyvsp[(2) - (2)])->getname();
        (yyval) = new symbol_info(sourceText, "stmts");
        logGrammarRule("statements", "statements statement", sourceText);
    }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 188 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "stmts");
        logGrammarRule("statements", "statement", sourceText);
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 196 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "var_declaration", sourceText);
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 202 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "expression_statement", sourceText);
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 208 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "compound_statement", sourceText);
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 214 "21201532.y"
    {
        std::string sourceText = "for(" + (yyvsp[(3) - (7)])->getname() + (yyvsp[(4) - (7)])->getname() + (yyvsp[(5) - (7)])->getname() + ")" + (yyvsp[(7) - (7)])->getname();
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "FOR LPAREN expression_statement expression_statement expression RPAREN statement", sourceText);
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 220 "21201532.y"
    {
        std::string sourceText = "if(" + (yyvsp[(3) - (5)])->getname() + ")" + (yyvsp[(5) - (5)])->getname();
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "IF LPAREN expression RPAREN statement", sourceText);
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 226 "21201532.y"
    {
        
        std::string elseStmt = (yyvsp[(7) - (7)])->getname();
        size_t ifPos = elseStmt.find("if");
        
        std::string sourceText;
        if (ifPos == 0) 
        {
            
            sourceText = "if(" + (yyvsp[(3) - (7)])->getname() + ")\n" + (yyvsp[(5) - (7)])->getname() + "\nelse\n" + elseStmt;
        } 
        else 
        {
            
            sourceText = "if(" + (yyvsp[(3) - (7)])->getname() + ")\n" + (yyvsp[(5) - (7)])->getname() + "\nelse\n" + elseStmt;
        }
        
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "IF LPAREN expression RPAREN statement ELSE statement", sourceText);
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 247 "21201532.y"
    {
        std::string sourceText = "while(" + (yyvsp[(3) - (5)])->getname() + ")" + (yyvsp[(5) - (5)])->getname();
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "WHILE LPAREN expression RPAREN statement", sourceText);
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 253 "21201532.y"
    {
        std::string sourceText = "printf(" + (yyvsp[(3) - (5)])->getname() + ");";
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "PRINTLN LPAREN ID RPAREN SEMICOLON", sourceText);
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 259 "21201532.y"
    {
        std::string sourceText = "return " + (yyvsp[(2) - (3)])->getname() + ";";
        (yyval) = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "RETURN expression SEMICOLON", sourceText);
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 267 "21201532.y"
    {
        std::string sourceText = ";";
        (yyval) = new symbol_info(sourceText, "expr_stmt");
        logGrammarRule("expression_statement", "SEMICOLON", sourceText);
    }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 273 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (2)])->getname() + ";";
        (yyval) = new symbol_info(sourceText, "expr_stmt");
        logGrammarRule("expression_statement", "expression SEMICOLON", sourceText);
    }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 281 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "expr");
        logGrammarRule("expression", "logic_expression", sourceText);
    }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 287 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + "=" + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "expr");
        logGrammarRule("expression", "variable ASSIGNOP logic_expression", sourceText);
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 295 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "logic_expr");
        logGrammarRule("logic_expression", "rel_expression", sourceText);
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 301 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "logic_expr");
        logGrammarRule("logic_expression", "rel_expression LOGICOP rel_expression", sourceText);
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 309 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "rel_expr");
        logGrammarRule("rel_expression", "simple_expression", sourceText);
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 315 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "rel_expr");
        logGrammarRule("rel_expression", "simple_expression RELOP simple_expression", sourceText);
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 323 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "simple_expr");
        logGrammarRule("simple_expression", "term", sourceText);
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 329 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "simple_expr");
        logGrammarRule("simple_expression", "simple_expression ADDOP term", sourceText);
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 337 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "term");
        logGrammarRule("term", "unary_expression", sourceText);
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 343 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "term");
        logGrammarRule("term", "term MULOP unary_expression", sourceText);
    }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 351 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "unary_expr");
        logGrammarRule("unary_expression", "factor", sourceText);
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 357 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (2)])->getname() + (yyvsp[(2) - (2)])->getname();
        (yyval) = new symbol_info(sourceText, "unary_expr");
        logGrammarRule("unary_expression", "ADDOP unary_expression", sourceText);
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 363 "21201532.y"
    {
        std::string sourceText = "!" + (yyvsp[(2) - (2)])->getname();
        (yyval) = new symbol_info(sourceText, "unary_expr");
        logGrammarRule("unary_expression", "NOT unary_expression", sourceText);
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 371 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "variable", sourceText);
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 377 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (4)])->getname() + "(" + (yyvsp[(3) - (4)])->getname() + ")";
        (yyval) = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "ID LPAREN argument_list RPAREN", sourceText);
    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 383 "21201532.y"
    {
        std::string sourceText = "(" + (yyvsp[(2) - (3)])->getname() + ")";
        (yyval) = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "LPAREN expression RPAREN", sourceText);
    }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 389 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "CONST_INT", sourceText);
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 395 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "CONST_FLOAT", sourceText);
    }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 401 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (2)])->getname() + "++";
        (yyval) = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "variable INCOP", sourceText);
    }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 407 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (2)])->getname() + "--";
        (yyval) = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "variable DECOP", sourceText);
    }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 415 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "arg_list");
        logGrammarRule("argument_list", "arguments", sourceText);
    }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 421 "21201532.y"
    {
        std::string sourceText = "";
        (yyval) = new symbol_info(sourceText, "arg_list");
        logGrammarRule("argument_list", "", sourceText);
    }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 429 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (3)])->getname() + ", " + (yyvsp[(3) - (3)])->getname();
        (yyval) = new symbol_info(sourceText, "args");
        logGrammarRule("arguments", "arguments COMMA logic_expression", sourceText);
    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 435 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "args");
        logGrammarRule("arguments", "logic_expression", sourceText);
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 443 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (1)])->getname();
        (yyval) = new symbol_info(sourceText, "var");
        logGrammarRule("variable", "ID", sourceText);
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 449 "21201532.y"
    {
        std::string sourceText = (yyvsp[(1) - (4)])->getname() + "[" + (yyvsp[(3) - (4)])->getname() + "]";
        (yyval) = new symbol_info(sourceText, "var");
        logGrammarRule("variable", "ID LTHIRD expression RTHIRD", sourceText);
    }
    break;


/* Line 1792 of yacc.c  */
#line 2162 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 456 "21201532.y"


void yyerror(const char *s) {
    std::cerr << "Error: " << s << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc != 2) 
    {
        std::cout << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 0;
    }
    yyin = fopen(argv[1], "r");
    outlog.open("21201532_log.txt", std::ios::trunc); 
    
    if (yyin == NULL)
    {
        std::cout << "Couldn't open file" << std::endl;
        return 0;
    }
    
    yyparse();
    
    outlog << "Total lines: " << lines << std::endl;
    
    outlog.close();
    fclose(yyin);
    
    return 0;
}