/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         seal_yyparse
#define yylex           seal_yylex
#define yyerror         seal_yyerror
#define yydebug         seal_yydebug
#define yynerrs         seal_yynerrs

#define yylval          seal_yylval
#define yychar          seal_yychar
#define yylloc          seal_yylloc

/* Copy the first part of user declarations.  */
#line 6 "seal.y" /* yacc.c:339  */

  #include <iostream>
  #include "seal-decl.h"
  #include "seal-stmt.h"
  #include "seal-expr.h"
  #include "stringtab.h"
  #include "utilities.h"

  extern char *curr_filename;
  /* Locations */
  #define YYLTYPE int              /* the type of locations */
  #define seal_yylloc curr_lineno  /* use the curr_lineno from the lexer
  for the location of tokens */
    
    extern int node_lineno;          /* set before constructing a tree node
    to whatever you want the line number
    for the tree node to be */
      
      
      #define YYLLOC_DEFAULT(Current, Rhs, N)         \
      Current = Rhs[1];                             \
      node_lineno = Current;
    
    
    #define SET_NODELOC(Current)  \
    node_lineno = Current;
    
    /* IMPORTANT NOTE ON LINE NUMBERS
    *********************************
    * The above definitions and macros cause every terminal in your grammar to 
    * have the line number supplied by the lexer. The only task you have to
    * implement for line numbers to work correctly, is to use SET_NODELOC()
    * before constructing any constructs from non-terminals in your grammar.
    * Example: Consider you are matching on the following very restrictive 
    * (fictional) construct that matches a plus between two integer constants. 
    * (SUCH A RULE SHOULD NOT BE PART OF YOUR PARSER):
    
    add_consts	: INT_CONST '+' INT_CONST 
    
    * where INT_CONST is a terminal for an integer constant. Now, a correct
    * action for this rule that attaches the correct line number to plus_const
    * would look like the following:
    
    add_consts	: INT_CONST '+' INT_CONST 
    {
      // Set the line number of the current non-terminal:
      // ***********************************************
      // You can access the line numbers of the i'th item with @i, just
      // like you acess the value of the i'th exporession with $i.
      //
      // Here, we choose the line number of the last INT_CONST (@3) as the
      // line number of the resulting expression (@$). You are free to pick
      // any reasonable line as the line number of non-terminals. If you 
      // omit the statement @$=..., bison has default rules for deciding which 
      // line number to use. Check the manual for details if you are interested.
      @$ = @3;
      
      
      // Observe that we call SET_NODELOC(@3); this will set the global variable
      // node_lineno to @3. Since the constructor call "plus" uses the value of 
      // this global, the plus node will now have the correct line number.
      SET_NODELOC(@3);
      
      // construct the result node:
      $$ = add(int_const($1), int_const($3));
    }
    
    */
    
    
    
    void yyerror(char *s);        /*  defined below; called for each parse error */
    extern int yylex();           /*  the entry point to the lexer  */
    
    /************************************************************************/
    /*                DONT CHANGE ANYTHING IN THIS SECTION                  */
    
    Program ast_root;	      /* the result of the parse  */
    //Decls parse_results;        /* for use in semantic analysis */
    int omerrs = 0;               /* number of errors in lexing and parsing */
    bool flag_nx = 0;
    

#line 159 "seal.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "seal.tab.h".  */
#ifndef YY_SEAL_YY_SEAL_TAB_H_INCLUDED
# define YY_SEAL_YY_SEAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int seal_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 260,
    WHILE = 261,
    FOR = 262,
    BREAK = 263,
    CONTINUE = 264,
    FUNC = 265,
    RETURN = 266,
    VAR = 271,
    AND = 274,
    OR = 275,
    EQUAL = 276,
    NE = 277,
    GE = 278,
    LE = 279,
    CONST_BOOL = 267,
    CONST_INT = 268,
    CONST_STRING = 269,
    CONST_FLOAT = 270,
    OBJECTID = 284,
    TYPEID = 285,
    UMINUS = 287
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 260
#define WHILE 261
#define FOR 262
#define BREAK 263
#define CONTINUE 264
#define FUNC 265
#define RETURN 266
#define VAR 271
#define AND 274
#define OR 275
#define EQUAL 276
#define NE 277
#define GE 278
#define LE 279
#define CONST_BOOL 267
#define CONST_INT 268
#define CONST_STRING 269
#define CONST_FLOAT 270
#define OBJECTID 284
#define TYPEID 285
#define UMINUS 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 90 "seal.y" /* yacc.c:355  */

      Boolean boolean;
      Symbol symbol;
      Program program;
      Decl decl;
      Decls decls;
      VariableDecl variableDecl;
      VariableDecls variableDecls;
      Variable variable;
      Variables variables;
      CallDecl callDecl;
      StmtBlock stmtBlock;
      Stmt stmt;
      Stmts stmts;
      IfStmt ifStmt;
      WhileStmt whileStmt;
      ForStmt forStmt;
      ReturnStmt returnStmt;
      ContinueStmt continueStmt;
      BreakStmt breakStmt;
      Expr expr;
      Exprs exprs;
      Call call;
      Actual actual;
      Actuals actuals;
      
      char *error_msg;
    

#line 277 "seal.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE seal_yylval;
extern YYLTYPE seal_yylloc;
int seal_yyparse (void);

#endif /* !YY_SEAL_YY_SEAL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 308 "seal.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  118

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,     2,     2,    32,    35,     2,
      38,    39,    30,    28,    43,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
      26,    25,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    36,    41,    34,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     2,
       4,     5,     6,     7,     8,     9,    10,    18,    19,    20,
      21,    11,     2,     2,    12,    13,    14,    15,    16,    17,
       2,     2,     2,     2,    22,    23,     2,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   190,   190,   196,   199,   204,   207,   212,   217,   220,
     223,   228,   233,   236,   239,   244,   249,   252,   255,   260,
     263,   266,   269,   272,   275,   278,   281,   286,   289,   294,
     299,   304,   309,   314,   319,   322,   329,   332,   335,   338,
     341,   344,   347,   350,   353,   356,   359,   362,   365,   368,
     371,   374,   377,   380,   383,   386,   389,   392,   395,   398,
     403,   408,   411,   414,   419,   422,   425,   428
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "BREAK",
  "CONTINUE", "FUNC", "RETURN", "VAR", "AND", "OR", "EQUAL", "NE", "GE",
  "LE", "CONST_BOOL", "CONST_INT", "CONST_STRING", "CONST_FLOAT",
  "OBJECTID", "TYPEID", "UMINUS", "'='", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "'~'", "'&'", "'|'", "'^'", "'('", "')'", "'{'",
  "'}'", "';'", "','", "$accept", "program", "decl_list", "decl",
  "stmtBlock", "variableDecls", "variableDecl", "variables", "variable",
  "stmts", "stmt", "ifStmt", "whileStmt", "forStmt", "returnStmt",
  "continueStmt", "breakStmt", "expr00", "expr", "call", "actuals",
  "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   286,   258,   260,   261,   262,   263,   264,   265,
     266,   271,   274,   275,   276,   277,   278,   279,   267,   268,
     269,   270,   284,   285,   287,    61,    60,    62,    43,    45,
      42,    47,    37,    33,   126,    38,   124,    94,    40,    41,
     123,   125,    59,    44
};
# endif

#define YYPACT_NINF -23

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-23)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   -16,    -9,    28,    -8,   -23,   -23,   -18,     6,    22,
     -23,   -23,    -9,   -23,   -23,   -12,   -23,    23,    -9,    26,
     -23,    58,   -23,    65,   -23,   269,   269,   269,    32,    38,
     269,   -23,   -23,   -23,   -23,    -6,   269,   269,   269,   269,
     -23,   -23,     4,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
      94,   -23,   -23,   125,   125,    39,   182,   -23,   -23,    40,
     269,   269,    42,    42,   -23,   154,   -23,   -23,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   -23,    84,   -23,   269,   -23,   182,
     182,    24,   -23,   208,   182,   232,   232,   249,   249,   249,
     249,    82,    82,    42,    42,    42,   -23,   -23,   -23,    26,
      47,   -23,   269,   -23,   269,   182,    26,   -23
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     5,     0,     0,     0,
       1,     3,    14,    15,    11,     0,    13,     0,     0,     0,
      12,    10,     6,    18,     9,     0,     0,    35,     0,     0,
      35,    66,    64,    67,    65,    40,     0,     0,     0,     0,
      26,     8,     0,    17,    20,    21,    22,    23,    24,    25,
       0,    38,    37,     0,     0,     0,    34,    33,    32,     0,
       0,    63,    46,    56,    57,     0,     7,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    27,    29,    35,    31,    36,
      62,     0,    39,    53,    54,    49,    50,    51,    48,    47,
      52,    41,    42,    43,    44,    45,    58,    59,    55,     0,
       0,    60,     0,    28,    35,    61,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -23,   -23,   -23,    89,   -19,   -23,    20,   -23,    18,   -23,
      53,   -23,   -23,   -23,   -23,   -23,   -23,   -22,   -21,   -23,
     -23,   -23
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    40,    23,     6,    15,     9,    42,
      43,    44,    45,    46,    47,    48,    49,    55,    56,    51,
      91,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      22,     1,    50,     2,    53,    54,     7,    25,    59,    26,
      27,    28,    29,     8,    30,    62,    63,    64,    65,    60,
      12,    50,    31,    32,    33,    34,    35,    17,    10,    13,
      16,    18,    61,    36,    85,    86,    20,    37,    38,    89,
      90,    24,    39,    41,    21,    66,    19,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   111,    14,   110,    21,   112,    25,     2,
      26,    27,    28,    29,    57,    30,     2,    81,    82,    83,
      58,    87,    88,    31,    32,    33,    34,    35,   109,   114,
     113,   115,   116,    11,    36,    67,     0,   117,    37,    38,
       0,     0,     0,    39,     0,    21,    68,    69,    70,    71,
      72,    73,    78,    79,    80,     0,     0,    81,    82,    83,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    81,
      82,    83,     0,     0,     0,     0,    84,    68,    69,    70,
      71,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,     0,
      81,    82,    83,     0,     0,    21,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    81,
      82,    83,     0,    92,    68,    69,    70,    71,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,     0,     0,    81,    82,    83,
      68,     0,    70,    71,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      80,     0,     0,    81,    82,    83,    -1,    -1,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    81,    82,    83,
       0,     0,     0,     0,     0,    -1,    -1,    76,    77,    78,
      79,    80,     0,     0,    81,    82,    83,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,    37,    38,     0,     0,     0,    39
};

static const yytype_int8 yycheck[] =
{
      19,     9,    23,    11,    25,    26,    22,     3,    30,     5,
       6,     7,     8,    22,    10,    36,    37,    38,    39,    25,
      38,    42,    18,    19,    20,    21,    22,    39,     0,    23,
      12,    43,    38,    29,    53,    54,    18,    33,    34,    60,
      61,    21,    38,    23,    40,    41,    23,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    39,    42,    87,    40,    43,     3,    11,
       5,     6,     7,     8,    42,    10,    11,    35,    36,    37,
      42,    42,    42,    18,    19,    20,    21,    22,     4,    42,
     109,   112,   114,     4,    29,    42,    -1,   116,    33,    34,
      -1,    -1,    -1,    38,    -1,    40,    12,    13,    14,    15,
      16,    17,    30,    31,    32,    -1,    -1,    35,    36,    37,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    -1,    -1,    40,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    -1,    39,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    16,    17,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    45,    46,    47,    50,    22,    22,    52,
       0,    47,    38,    23,    42,    51,    52,    39,    43,    23,
      52,    40,    48,    49,    50,     3,     5,     6,     7,     8,
      10,    18,    19,    20,    21,    22,    29,    33,    34,    38,
      48,    50,    53,    54,    55,    56,    57,    58,    59,    60,
      62,    63,    65,    62,    62,    61,    62,    42,    42,    61,
      25,    38,    62,    62,    62,    62,    41,    54,    12,    13,
      14,    15,    16,    17,    26,    27,    28,    29,    30,    31,
      32,    35,    36,    37,    42,    48,    48,    42,    42,    62,
      62,    64,    39,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,     4,
      61,    39,    43,    48,    42,    62,    61,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    49,
      49,    50,    51,    51,    51,    52,    53,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    56,
      57,    58,    59,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    64,    64,    64,    65,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     7,     4,     2,     1,
       0,     3,     3,     1,     0,     2,     2,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     3,
       7,     3,     2,     2,     1,     0,     3,     1,     1,     3,
       1,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       4,     3,     1,     0,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 190 "seal.y" /* yacc.c:1646  */
    {
      (yyloc) = (yylsp[0]);
      ast_root = program((yyvsp[0].decls));
    }
#line 1601 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 196 "seal.y" /* yacc.c:1646  */
    {
      (yyval.decls) = append_Decls((yyvsp[-1].decls), single_Decls((yyvsp[0].decl)));
    }
#line 1609 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 199 "seal.y" /* yacc.c:1646  */
    {
      (yyval.decls) = single_Decls((yyvsp[0].decl));
    }
#line 1617 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 204 "seal.y" /* yacc.c:1646  */
    {
      (yyval.decl) = (yyvsp[0].variableDecl) -> copy_Decl();
    }
#line 1625 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 207 "seal.y" /* yacc.c:1646  */
    {
      (yyval.decl) = callDecl((yyvsp[-5].symbol), (yyvsp[-3].variables), (yyvsp[-1].symbol), (yyvsp[0].stmtBlock));
    }
#line 1633 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 212 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmtBlock) = stmtBlock((yyvsp[-2].variableDecls), (yyvsp[-1].stmts));
    }
#line 1641 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 217 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variableDecls) = append_VariableDecls((yyvsp[-1].variableDecls), single_VariableDecls((yyvsp[0].variableDecl)));
    }
#line 1649 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 220 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variableDecls) = single_VariableDecls((yyvsp[0].variableDecl));
    }
#line 1657 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 223 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variableDecls) = nil_VariableDecls();
    }
#line 1665 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 228 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variableDecl) = variableDecl((yyvsp[-1].variable));
    }
#line 1673 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 233 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variables) = append_Variables((yyvsp[-2].variables), single_Variables((yyvsp[0].variable)));
    }
#line 1681 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 236 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variables) = single_Variables((yyvsp[0].variable));
    }
#line 1689 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 239 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variables) = nil_Variables();
    }
#line 1697 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 244 "seal.y" /* yacc.c:1646  */
    {
      (yyval.variable) = variable((yyvsp[-1].symbol), (yyvsp[0].symbol));
    }
#line 1705 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 249 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmts) = append_Stmts((yyvsp[-1].stmts), single_Stmts((yyvsp[0].stmt)));
    }
#line 1713 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 252 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmts) = single_Stmts((yyvsp[0].stmt));
    }
#line 1721 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 255 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmts) = nil_Stmts();
    }
#line 1729 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 260 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[-1].expr);
    }
#line 1737 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 263 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[0].stmt);
    }
#line 1745 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 266 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[0].stmt);
    }
#line 1753 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[0].stmt);
    }
#line 1761 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 272 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[0].stmt);
    }
#line 1769 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 275 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[0].stmt);
    }
#line 1777 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 278 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[0].stmt);
    }
#line 1785 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 281 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = (yyvsp[0].stmtBlock);
    }
#line 1793 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 286 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = ifstmt((yyvsp[-1].expr), (yyvsp[0].stmtBlock), stmtBlock(nil_VariableDecls(), nil_Stmts()));
    }
#line 1801 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 289 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = ifstmt((yyvsp[-3].expr), (yyvsp[-2].stmtBlock), (yyvsp[0].stmtBlock));
    }
#line 1809 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 294 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = whilestmt((yyvsp[-1].expr), (yyvsp[0].stmtBlock));
    }
#line 1817 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 299 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = forstmt((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].stmtBlock));
    }
#line 1825 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 304 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = returnstmt((yyvsp[-1].expr));
    }
#line 1833 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 309 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = continuestmt();
    }
#line 1841 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 314 "seal.y" /* yacc.c:1646  */
    {
      (yyval.stmt) = breakstmt();
    }
#line 1849 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 319 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = (yyvsp[0].expr);
    }
#line 1857 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 322 "seal.y" /* yacc.c:1646  */
    {
      flag_nx = 1;
      (yyval.expr) = no_expr();
      flag_nx = 0;
    }
#line 1867 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 329 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = assign((yyvsp[-2].symbol), (yyvsp[0].expr));
    }
#line 1875 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 332 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = (yyvsp[0].expr) -> copy_Expr();
    }
#line 1883 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 335 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = (yyvsp[0].call) -> copy_Expr();
    }
#line 1891 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 338 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = (yyvsp[-1].expr);
    }
#line 1899 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 341 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = object((yyvsp[0].symbol));
    }
#line 1907 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 344 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = add((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1915 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 347 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = minus((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1923 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 350 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = multi((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1931 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 353 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = divide((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1939 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 356 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = mod((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1947 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 359 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = neg((yyvsp[0].expr));
    }
#line 1955 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 362 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = lt((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1963 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 365 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = le((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1971 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 368 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = equ((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1979 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 371 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = neq((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1987 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 374 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = ge((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1995 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 377 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = gt((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 2003 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 380 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = and_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 2011 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 383 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = or_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 2019 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 386 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = xor_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 2027 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 389 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = not_((yyvsp[0].expr));
    }
#line 2035 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 392 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = bitnot((yyvsp[0].expr));
    }
#line 2043 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 395 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = bitand_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 2051 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 398 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = bitor_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 2059 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 403 "seal.y" /* yacc.c:1646  */
    {
      (yyval.call) = call((yyvsp[-3].symbol), (yyvsp[-1].actuals));
    }
#line 2067 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 408 "seal.y" /* yacc.c:1646  */
    {
      (yyval.actuals) = append_Actuals((yyvsp[-2].actuals), single_Actuals(actual((yyvsp[0].expr))));
    }
#line 2075 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 411 "seal.y" /* yacc.c:1646  */
    {
      (yyval.actuals) = single_Actuals(actual((yyvsp[0].expr)));
    }
#line 2083 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 414 "seal.y" /* yacc.c:1646  */
    {
      (yyval.actuals) = nil_Actuals();
    }
#line 2091 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 419 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = const_int((yyvsp[0].symbol));
    }
#line 2099 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 422 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = const_float((yyvsp[0].symbol));
    }
#line 2107 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 425 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = const_bool((yyvsp[0].boolean));
    }
#line 2115 "seal.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 428 "seal.y" /* yacc.c:1646  */
    {
      (yyval.expr) = const_string((yyvsp[0].symbol));
    }
#line 2123 "seal.tab.c" /* yacc.c:1646  */
    break;


#line 2127 "seal.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  yyerror_range[1] = yylloc;

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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 436 "seal.y" /* yacc.c:1906  */

    
    /* This function is called automatically when Bison detects a parse error. */
    void yyerror(char *s)
    {
      extern int curr_lineno;
      
      cerr << "\"" << curr_filename << "\", line " << curr_lineno << ": " \
      << s << " at or near ";
      print_seal_token(yychar);
      cerr << endl;
      omerrs++;
      
      if(omerrs>50) {fprintf(stdout, "More than 50 errors\n"); exit(1);}
    }
