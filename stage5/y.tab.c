/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tree.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include "tree.h"
    #include "tree.c"
    #include "symbol.h"
    #include "symbol.c"
    #include<string.h>
    FILE *targetFile;
    extern FILE *yyin;
    int yylex(void);
    extern char* yytext;
    int type;
    int yyerror(char const *s);
    struct paramstruct*paramlist=NULL;
    int flabel=0;
    struct typi* typ_head=NULL;
    struct paramstruct*paramtemp=NULL;
    int lnum=0;
    int argnum=-2;
    int _local_pt=0;
    int _prefix_pt=0;
    int _global_pt=0;
    int _codegen_pt=1;
    extern int lineno;
    int _in_func=0;
    

#line 100 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    PLUS = 259,                    /* PLUS  */
    MINUS = 260,                   /* MINUS  */
    MUL = 261,                     /* MUL  */
    DIV = 262,                     /* DIV  */
    WRITE = 263,                   /* WRITE  */
    READ = 264,                    /* READ  */
    EOL = 265,                     /* EOL  */
    ASSIGN = 266,                  /* ASSIGN  */
    ID = 267,                      /* ID  */
    IF = 268,                      /* IF  */
    then = 269,                    /* then  */
    Else = 270,                    /* Else  */
    Return = 271,                  /* Return  */
    AND = 272,                     /* AND  */
    OR = 273,                      /* OR  */
    LE = 274,                      /* LE  */
    GE = 275,                      /* GE  */
    LT = 276,                      /* LT  */
    GT = 277,                      /* GT  */
    NE = 278,                      /* NE  */
    EQ = 279,                      /* EQ  */
    MSG = 280,                     /* MSG  */
    MOD = 281,                     /* MOD  */
    DECL = 282,                    /* DECL  */
    ENDDECL = 283,                 /* ENDDECL  */
    INT = 284,                     /* INT  */
    STR = 285,                     /* STR  */
    COMMA = 286,                   /* COMMA  */
    MAIN = 287,                    /* MAIN  */
    START = 288,                   /* START  */
    END = 289,                     /* END  */
    ENDIF = 290,                   /* ENDIF  */
    endwhile = 291,                /* endwhile  */
    WHILE = 292,                   /* WHILE  */
    DO = 293,                      /* DO  */
    BREAK = 294,                   /* BREAK  */
    CONTINUE = 295                 /* CONTINUE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define PLUS 259
#define MINUS 260
#define MUL 261
#define DIV 262
#define WRITE 263
#define READ 264
#define EOL 265
#define ASSIGN 266
#define ID 267
#define IF 268
#define then 269
#define Else 270
#define Return 271
#define AND 272
#define OR 273
#define LE 274
#define GE 275
#define LT 276
#define GT 277
#define NE 278
#define EQ 279
#define MSG 280
#define MOD 281
#define DECL 282
#define ENDDECL 283
#define INT 284
#define STR 285
#define COMMA 286
#define MAIN 287
#define START 288
#define END 289
#define ENDIF 290
#define endwhile 291
#define WHILE 292
#define DO 293
#define BREAK 294
#define CONTINUE 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "tree.y"

        struct tnode *node;
    

#line 238 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_PLUS = 4,                       /* PLUS  */
  YYSYMBOL_MINUS = 5,                      /* MINUS  */
  YYSYMBOL_MUL = 6,                        /* MUL  */
  YYSYMBOL_DIV = 7,                        /* DIV  */
  YYSYMBOL_WRITE = 8,                      /* WRITE  */
  YYSYMBOL_READ = 9,                       /* READ  */
  YYSYMBOL_EOL = 10,                       /* EOL  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_then = 14,                      /* then  */
  YYSYMBOL_Else = 15,                      /* Else  */
  YYSYMBOL_Return = 16,                    /* Return  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_OR = 18,                        /* OR  */
  YYSYMBOL_LE = 19,                        /* LE  */
  YYSYMBOL_GE = 20,                        /* GE  */
  YYSYMBOL_LT = 21,                        /* LT  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_MSG = 25,                       /* MSG  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_DECL = 27,                      /* DECL  */
  YYSYMBOL_ENDDECL = 28,                   /* ENDDECL  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_STR = 30,                       /* STR  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_MAIN = 32,                      /* MAIN  */
  YYSYMBOL_START = 33,                     /* START  */
  YYSYMBOL_END = 34,                       /* END  */
  YYSYMBOL_ENDIF = 35,                     /* ENDIF  */
  YYSYMBOL_endwhile = 36,                  /* endwhile  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_DO = 38,                        /* DO  */
  YYSYMBOL_BREAK = 39,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 40,                  /* CONTINUE  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_Program = 48,                   /* Program  */
  YYSYMBOL_GdeclBlock = 49,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 50,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 51,                     /* Gdecl  */
  YYSYMBOL_GidList = 52,                   /* GidList  */
  YYSYMBOL_Gid = 53,                       /* Gid  */
  YYSYMBOL_FdefBlock = 54,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 55,                      /* Fdef  */
  YYSYMBOL_ParamList = 56,                 /* ParamList  */
  YYSYMBOL_Param = 57,                     /* Param  */
  YYSYMBOL_MainBlock = 58,                 /* MainBlock  */
  YYSYMBOL_Type = 59,                      /* Type  */
  YYSYMBOL_FType = 60,                     /* FType  */
  YYSYMBOL_LdeclBlock = 61,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 62,                  /* LDecList  */
  YYSYMBOL_LDecl = 63,                     /* LDecl  */
  YYSYMBOL_IdList = 64,                    /* IdList  */
  YYSYMBOL_Body = 65,                      /* Body  */
  YYSYMBOL_Slist = 66,                     /* Slist  */
  YYSYMBOL_Stmt = 67,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 68,                /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 69,                 /* BreakStmt  */
  YYSYMBOL_ContStmt = 70,                  /* ContStmt  */
  YYSYMBOL_InputStmt = 71,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 72,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 73,                   /* AsgStmt  */
  YYSYMBOL_Ifstmt = 74,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 75,                 /* Whilestmt  */
  YYSYMBOL_expr = 76,                      /* expr  */
  YYSYMBOL_ArgList = 77,                   /* ArgList  */
  YYSYMBOL_VAR = 78                        /* VAR  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    63,    69,    77,    83,    91,    92,    95,
      97,    98,   101,   110,   119,   144,   148,   154,   216,   216,
     217,   219,   244,   287,   291,   293,   298,   303,   304,   306,
     307,   309,   311,   322,   335,   339,   341,   345,   350,   351,
     352,   353,   354,   355,   356,   357,   359,   360,   362,   364,
     366,   368,   370,   372,   373,   375,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   413,   454,   463,   471,   490
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "PLUS", "MINUS",
  "MUL", "DIV", "WRITE", "READ", "EOL", "ASSIGN", "ID", "IF", "then",
  "Else", "Return", "AND", "OR", "LE", "GE", "LT", "GT", "NE", "EQ", "MSG",
  "MOD", "DECL", "ENDDECL", "INT", "STR", "COMMA", "MAIN", "START", "END",
  "ENDIF", "endwhile", "WHILE", "DO", "BREAK", "CONTINUE", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "$accept", "Program", "GdeclBlock",
  "GdeclList", "Gdecl", "GidList", "Gid", "FdefBlock", "Fdef", "ParamList",
  "Param", "MainBlock", "Type", "FType", "LdeclBlock", "LDecList", "LDecl",
  "IdList", "Body", "Slist", "Stmt", "ReturnStmt", "BreakStmt", "ContStmt",
  "InputStmt", "OutputStmt", "AsgStmt", "Ifstmt", "Whilestmt", "expr",
  "ArgList", "VAR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -18,    36,   -19,    15,   -10,  -123,  -123,  -123,  -123,    39,
    -123,    18,    13,  -123,   -19,  -123,   -10,  -123,  -123,    23,
    -123,  -123,    56,    -8,  -123,    26,  -123,  -123,    19,    76,
      86,  -123,    18,    51,    86,    40,   -28,  -123,    88,  -123,
      94,   -27,  -123,    86,  -123,  -123,    57,    80,    77,  -123,
    -123,   112,    65,  -123,   202,    79,    94,  -123,    -2,  -123,
    -123,  -123,    83,    84,    71,    95,   303,  -123,  -123,    97,
     118,   132,    98,   235,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,   361,  -123,  -123,    80,  -123,   131,    98,
      98,    98,     9,    98,  -123,   384,    98,  -123,  -123,    54,
    -123,  -123,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,   103,  -123,    85,   113,
     335,  -123,   430,   -26,   141,  -123,   169,  -123,   250,   250,
      37,    37,   407,  -123,  -123,   453,   453,   453,   453,   453,
     453,  -123,  -123,   134,   140,  -123,    98,  -123,   137,   114,
    -123,  -123,  -123,   430,   295,   295,   191,   246,   295,   143,
     144,   284,  -123,  -123,   145,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     6,    23,    24,     0,
       8,     0,     0,     1,    25,    26,     0,    16,     3,     0,
       5,     7,    12,     0,    11,     0,    15,     2,     0,     0,
      20,     9,     0,     0,    20,     0,     0,    19,     0,    10,
       0,     0,    13,     0,    14,    21,     0,     0,     0,    18,
      28,     0,     0,    30,     0,     0,     0,    33,     0,    27,
      29,    69,     0,     0,    77,     0,     0,    70,    35,     0,
       0,     0,     0,     0,    37,    45,    43,    44,    38,    39,
      40,    41,    42,     0,    71,    22,     0,    31,     0,     0,
       0,     0,     0,     0,    47,     0,     0,    48,    49,     0,
      34,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    73,    76,     0,     0,    46,     0,    72,    56,    57,
      58,    59,     0,    67,    68,    60,    61,    62,    63,    64,
      65,    66,    17,     0,     0,    78,     0,    74,     0,     0,
      52,    51,    50,    75,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,     0,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,  -123,  -123,  -123,   147,  -123,   136,  -123,   150,   135,
     127,     6,     5,  -123,   115,  -123,   120,  -123,    91,  -122,
     -73,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   -65,
    -123,  -123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     9,    10,    23,    24,    16,    17,    36,
      37,     5,    38,    19,    47,    52,    53,    58,    55,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     123,    84
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     101,    95,    31,    43,    43,   146,    11,    99,    87,     1,
      18,     2,    61,    12,    11,    13,    44,    48,   147,    14,
      15,    64,    27,    32,   118,   119,   120,   122,   124,    88,
      22,   126,   156,   157,    67,    28,   161,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,    51,    72,   121,   107,   108,    25,    51,   102,   103,
     104,   105,    34,   115,     6,     7,     8,    20,     7,     8,
      33,   107,   108,   109,   110,   111,   112,   113,   114,    35,
     115,   153,    42,   101,   101,    50,     7,     8,   101,   102,
     103,   104,   105,    59,     7,     8,    40,    29,   127,    30,
      45,    61,   107,   108,   109,   110,   111,   112,   113,   114,
      64,   115,    91,    54,    92,     7,     8,   102,   103,   104,
     105,    46,    56,    67,    57,    85,    89,    90,    97,   143,
     107,   108,   109,   110,   111,   112,   113,   114,    93,   115,
      96,    72,    98,   117,   151,   102,   103,   104,   105,   142,
     152,   154,   155,   162,   163,   165,    21,   144,   107,   108,
     109,   110,   111,   112,   113,   114,    26,   115,    39,    41,
      49,    86,    60,   102,   103,   104,   105,   116,     0,     0,
       0,     0,     0,     0,     0,   148,   107,   108,   109,   110,
     111,   112,   113,   114,    61,   115,     0,     0,     0,    62,
      63,     0,     0,    64,    65,    61,   158,    66,     0,     0,
      62,    63,     0,   149,    64,    65,    67,     0,    66,     0,
       0,     0,     0,     0,     0,     0,   159,    67,    69,     0,
      70,    71,     0,     0,    72,     0,    68,     0,    61,    69,
       0,    70,    71,    62,    63,    72,     0,    64,    65,    61,
       0,    66,     0,     0,    62,    63,   104,   105,    64,    65,
      67,     0,    66,     0,     0,     0,     0,   107,   108,   100,
       0,    67,    69,     0,    70,    71,   115,     0,    72,     0,
       0,     0,   160,    69,     0,    70,    71,    61,     0,    72,
       0,     0,    62,    63,     0,     0,    64,    65,    61,     0,
      66,     0,     0,    62,    63,     0,    61,    64,    65,    67,
       0,    66,     0,    94,     0,    64,     0,     0,     0,   164,
      67,    69,     0,    70,    71,     0,     0,    72,    67,     0,
       0,     0,    69,     0,    70,    71,     0,     0,    72,   102,
     103,   104,   105,     0,     0,     0,    72,     0,     0,     0,
       0,     0,   107,   108,   109,   110,   111,   112,   113,   114,
       0,   115,     0,     0,     0,   102,   103,   104,   105,     0,
       0,     0,   106,     0,     0,     0,     0,   145,   107,   108,
     109,   110,   111,   112,   113,   114,     0,   115,   102,   103,
     104,   105,     0,     0,   125,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   113,   114,     0,
     115,   102,   103,   104,   105,     0,     0,   150,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,   111,   112,
     113,   114,     0,   115,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   109,
     110,   111,   112,   113,   114,     0,   115,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,     0,     0,     0,     0,     0,     0,     0,   115
};

static const yytype_int16 yycheck[] =
{
      73,    66,    10,    31,    31,    31,     1,    72,    10,    27,
       4,    29,     3,    32,     9,     0,    44,    44,    44,    29,
      30,    12,    16,    31,    89,    90,    91,    92,    93,    31,
      12,    96,   154,   155,    25,    12,   158,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    46,    43,    44,    17,    18,    43,    52,     4,     5,
       6,     7,    43,    26,    28,    29,    30,    28,    29,    30,
      44,    17,    18,    19,    20,    21,    22,    23,    24,     3,
      26,   146,    42,   156,   157,    28,    29,    30,   161,     4,
       5,     6,     7,    28,    29,    30,    45,    41,    44,    43,
      12,     3,    17,    18,    19,    20,    21,    22,    23,    24,
      12,    26,    41,    33,    43,    29,    30,     4,     5,     6,
       7,    27,    45,    25,    12,    46,    43,    43,    10,    44,
      17,    18,    19,    20,    21,    22,    23,    24,    43,    26,
      43,    43,    10,    12,    10,     4,     5,     6,     7,    46,
      10,    14,    38,    10,    10,    10,     9,    44,    17,    18,
      19,    20,    21,    22,    23,    24,    16,    26,    32,    34,
      43,    56,    52,     4,     5,     6,     7,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    17,    18,    19,    20,
      21,    22,    23,    24,     3,    26,    -1,    -1,    -1,     8,
       9,    -1,    -1,    12,    13,     3,    15,    16,    -1,    -1,
       8,     9,    -1,    44,    12,    13,    25,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    25,    37,    -1,
      39,    40,    -1,    -1,    43,    -1,    34,    -1,     3,    37,
      -1,    39,    40,     8,     9,    43,    -1,    12,    13,     3,
      -1,    16,    -1,    -1,     8,     9,     6,     7,    12,    13,
      25,    -1,    16,    -1,    -1,    -1,    -1,    17,    18,    34,
      -1,    25,    37,    -1,    39,    40,    26,    -1,    43,    -1,
      -1,    -1,    36,    37,    -1,    39,    40,     3,    -1,    43,
      -1,    -1,     8,     9,    -1,    -1,    12,    13,     3,    -1,
      16,    -1,    -1,     8,     9,    -1,     3,    12,    13,    25,
      -1,    16,    -1,    10,    -1,    12,    -1,    -1,    -1,    35,
      25,    37,    -1,    39,    40,    -1,    -1,    43,    25,    -1,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    43,     4,
       5,     6,     7,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,    -1,    -1,    -1,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    42,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    29,    48,    49,    58,    28,    29,    30,    50,
      51,    59,    32,     0,    29,    30,    54,    55,    58,    60,
      28,    51,    12,    52,    53,    43,    55,    58,    12,    41,
      43,    10,    31,    44,    43,     3,    56,    57,    59,    53,
      45,    56,    42,    31,    44,    12,    27,    61,    44,    57,
      28,    59,    62,    63,    33,    65,    45,    12,    64,    28,
      63,     3,     8,     9,    12,    13,    16,    25,    34,    37,
      39,    40,    43,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    78,    46,    61,    10,    31,    43,
      43,    41,    43,    43,    10,    76,    43,    10,    10,    76,
      34,    67,     4,     5,     6,     7,    11,    17,    18,    19,
      20,    21,    22,    23,    24,    26,    65,    12,    76,    76,
      76,    44,    76,    77,    76,    10,    76,    44,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    46,    44,    44,    42,    31,    44,    44,    44,
      10,    10,    10,    76,    14,    38,    66,    66,    15,    35,
      36,    66,    10,    10,    35,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    48,    49,    49,    50,    50,    51,
      52,    52,    53,    53,    53,    54,    54,    55,    56,    56,
      56,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    69,    70,
      71,    72,    73,    74,    74,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    77,    78,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       3,     1,     1,     4,     4,     2,     1,     9,     3,     1,
       0,     2,     8,     1,     1,     1,     1,     3,     2,     2,
       1,     3,     3,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     2,
       5,     5,     4,    10,     8,     8,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     3,     3,     4,     3,     1,     1,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: GdeclBlock FdefBlock MainBlock  */
#line 58 "tree.y"
                        {
                            printf("Done!!\n");
                            if(_global_pt)printSTable();
                            /* if(_codegen_pt) endcode(targetFile); */
                        }
#line 1467 "y.tab.c"
    break;

  case 3: /* Program: GdeclBlock MainBlock  */
#line 64 "tree.y"
                        {
                            printf("Done!!\n");
                             if(_global_pt)printSTable();
                            /* if(_codegen_pt) endcode(targetFile); */
                        }
#line 1477 "y.tab.c"
    break;

  case 4: /* Program: MainBlock  */
#line 70 "tree.y"
                        {  
                            printf("done!!\n");
                            /* if(_codegen_pt) endcode(targetFile); */
                        }
#line 1486 "y.tab.c"
    break;

  case 5: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 78 "tree.y"
                        {
                            initial(targetFile);
                            reset_local();
                            argnum=-2;
                        }
#line 1496 "y.tab.c"
    break;

  case 6: /* GdeclBlock: DECL ENDDECL  */
#line 84 "tree.y"
                        {
                            initial(targetFile);
                            reset_local();
                            argnum=-2;
                        }
#line 1506 "y.tab.c"
    break;

  case 7: /* GdeclList: GdeclList Gdecl  */
#line 91 "tree.y"
                             {}
#line 1512 "y.tab.c"
    break;

  case 8: /* GdeclList: Gdecl  */
#line 92 "tree.y"
                   {}
#line 1518 "y.tab.c"
    break;

  case 9: /* Gdecl: Type GidList EOL  */
#line 95 "tree.y"
                          {}
#line 1524 "y.tab.c"
    break;

  case 10: /* GidList: GidList COMMA Gid  */
#line 97 "tree.y"
                               {}
#line 1530 "y.tab.c"
    break;

  case 11: /* GidList: Gid  */
#line 98 "tree.y"
                 {}
#line 1536 "y.tab.c"
    break;

  case 12: /* Gid: ID  */
#line 102 "tree.y"
                        {
                            if(Lookup((yyvsp[0].node)->varname)==NULL)
                            Install((yyvsp[0].node)->varname,type,1,NULL,-1);
                            else{
                                printf("redclare error of %s\n",(yyvsp[0].node)->varname);
                                exit(1);
                            }
                        }
#line 1549 "y.tab.c"
    break;

  case 13: /* Gid: ID '[' NUM ']'  */
#line 111 "tree.y"
                        {
                            if(Lookup((yyvsp[-3].node)->varname)==NULL)
                            Install((yyvsp[-3].node)->varname,type,(yyvsp[-1].node)->val,NULL,-1);
                            else{
                                printf("redclare error of the array %s\n",(yyvsp[-3].node)->varname);
                                exit(1);
                            }
                        }
#line 1562 "y.tab.c"
    break;

  case 14: /* Gid: ID '(' ParamList ')'  */
#line 120 "tree.y"
                        {
                            if(Lookup((yyvsp[-3].node)->varname)==NULL)
                            Install((yyvsp[-3].node)->varname,type,-1,paramlist,flabel);
                            else{
                                printf("The function redeclaration error %s\n",(yyvsp[-3].node)->varname);
                                paramlist=NULL;
                                exit(1);
                            }
                            flabel=flabel+1;
                            paramtemp=paramlist;
                            paramlist=NULL;
                            /* struct paramstruct *curr=paramlist;
                            while(curr!=NULL)
                            {
                                struct paramstruct *temp=curr;
                                curr=curr->next;
                                free(temp->name);
                                free(temp);
                            } */
                        }
#line 1587 "y.tab.c"
    break;

  case 15: /* FdefBlock: FdefBlock Fdef  */
#line 145 "tree.y"
                        {
                            (yyval.node)=createTree(-1,-1,NULL,tFunconnect,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 1595 "y.tab.c"
    break;

  case 16: /* FdefBlock: Fdef  */
#line 149 "tree.y"
                        {
                            (yyval.node)=createTree(-1,-1,NULL,tFunconnect,(yyvsp[0].node),NULL,NULL);
                        }
#line 1603 "y.tab.c"
    break;

  case 17: /* Fdef: FType ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 155 "tree.y"
                        {
                            /* type checking in function */
                            if(Lookup((yyvsp[-7].node)->varname)==NULL)
                            {
                                printf("function '%s' is not defined \n",(yyvsp[-7].node)->varname);
                                exit(1);
                            }
                            if(Lookup((yyvsp[-7].node)->varname)->type!=type)
                            {
                                printf("Type mismatch error in function '%s'\n ",(yyvsp[-7].node)->varname);
                                exit(1);
                            }
                            int c=checkparam(paramlist,(yyvsp[-7].node)->varname);
                            if(c==-1)
                            {
                                paramlist=NULL;
                                printf("error has occured \n");
                                exit(1);
                            }

                                                    //code generation part
                                                    if(_codegen_pt)
                                                    {                                                   
                                                    struct Gsymbol *temp=Lookup((yyvsp[-7].node)->varname);
                                                    fprintf(targetFile,"F%d:\n",temp->flabel);
                                                    fprintf(targetFile,"PUSH BP\n");
                                                    fprintf(targetFile,"MOV BP,SP\n");
                                                    struct Lsymbol*curr=getLocal();
                                                    while(curr!=NULL)
                                                    {
                                                        if(curr->binding>0)
                                                        {
                                                            fprintf(targetFile,"PUSH R0\n");
                                                        }
                                                        curr=curr->next;
                                                    } 
                                                    /* reset_all(); */
                                                    codeGen(targetFile,(yyvsp[-1].node));
                                                    }
                            //for testing
                            if(_prefix_pt)
                            {
                            printf("The ast of %s -----------\n",(yyvsp[-7].node)->varname);
                            prefix((yyvsp[-1].node));
                            printf("\n\n");
                            }
                            if(_local_pt)
                            {
                            printf("function=%s\n",(yyvsp[-7].node)->varname);
                            print_local();
                            printf("\n\n");
                            }

                                                    //reseting of all local and argument lists
                                                    paramlist=NULL;
                                                    reset_local();
                                                    argnum=-2;
                                                    lnum=0;
                        }
#line 1667 "y.tab.c"
    break;

  case 18: /* ParamList: ParamList COMMA Param  */
#line 216 "tree.y"
                                      {}
#line 1673 "y.tab.c"
    break;

  case 19: /* ParamList: Param  */
#line 216 "tree.y"
                                                {}
#line 1679 "y.tab.c"
    break;

  case 20: /* ParamList: %empty  */
#line 217 "tree.y"
                   {}
#line 1685 "y.tab.c"
    break;

  case 21: /* Param: Type ID  */
#line 220 "tree.y"
                        {
                            
                                struct paramstruct *temp=(struct paramstruct*)malloc(sizeof(struct paramstruct));
                                temp->name=strdup((yyvsp[0].node)->varname);
                                temp->type=type;
                                temp->next=paramlist;
                                paramlist=temp;
                                if(_in_func)
                                {
                                    if(LLookup(temp->name)==NULL)
                                    {
                                        argnum--;
                                        LInstall(temp->name,temp->type,argnum);
                                    }
                                    else{
                                        argnum=-2;
                                        printf("redeclaration error in  %s\n",temp->name);
                                        printf("line no=%d\n",lineno);
                                        exit(1);
                                    }
                                }
                        }
#line 1712 "y.tab.c"
    break;

  case 22: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 245 "tree.y"
                        {
                            //codegeneration part
                            if(_codegen_pt)
                            {
                            fprintf(targetFile,"MAIN:\n");
                            fprintf(targetFile,"PUSH BP\n");
                            fprintf(targetFile,"MOV BP,SP\n");
                            struct Lsymbol*curr=getLocal();
                            while(curr!=NULL)
                            {
                                if(curr->binding>0)
                                {
                                    fprintf(targetFile,"PUSH R0\n");
                                }
                                curr=curr->next;
                            } 
                            /* reset_all(); */
                            codeGen(targetFile,(yyvsp[-1].node));
                            }

                                            //for testing
                                            if(_prefix_pt)
                                            {
                                            printf("The ast of Main -----------\n");
                                            prefix((yyvsp[-1].node));
                                            }
                                            if(_local_pt)
                                            {
                                            printf("function= MAIN\n");
                                            print_local();
                                            printf("\n\n");
                                            }

                            //1.free memory of Gtable and Local table and AST
                            //reseting of all local and argument lists
                            paramlist=NULL;
                            reset_local();
                            argnum=-2;
                            lnum=0;
                        }
#line 1757 "y.tab.c"
    break;

  case 23: /* Type: INT  */
#line 288 "tree.y"
                        {
                        type=tINT;
                        }
#line 1765 "y.tab.c"
    break;

  case 24: /* Type: STR  */
#line 291 "tree.y"
                        { type=tSTR;}
#line 1771 "y.tab.c"
    break;

  case 25: /* FType: INT  */
#line 294 "tree.y"
                        {
                        type=tINT;
                        _in_func=1;
                        }
#line 1780 "y.tab.c"
    break;

  case 26: /* FType: STR  */
#line 298 "tree.y"
                        { type=tSTR;
                        _in_func=1;
                        }
#line 1788 "y.tab.c"
    break;

  case 27: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 303 "tree.y"
                                      {}
#line 1794 "y.tab.c"
    break;

  case 28: /* LdeclBlock: DECL ENDDECL  */
#line 304 "tree.y"
                              {}
#line 1800 "y.tab.c"
    break;

  case 29: /* LDecList: LDecList LDecl  */
#line 306 "tree.y"
                            {}
#line 1806 "y.tab.c"
    break;

  case 30: /* LDecList: LDecl  */
#line 307 "tree.y"
                       {}
#line 1812 "y.tab.c"
    break;

  case 31: /* LDecl: Type IdList EOL  */
#line 309 "tree.y"
                            {}
#line 1818 "y.tab.c"
    break;

  case 32: /* IdList: IdList COMMA ID  */
#line 312 "tree.y"
                        {
                            if(LLookup((yyvsp[0].node)->varname)==NULL){
                                lnum++;
                                LInstall((yyvsp[0].node)->varname,type,lnum);
                                }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",(yyvsp[0].node)->varname);exit(1);
                                }
                        }
#line 1833 "y.tab.c"
    break;

  case 33: /* IdList: ID  */
#line 323 "tree.y"
                        {
                            if(LLookup((yyvsp[0].node)->varname)==NULL)
                            {
                                lnum++;
                                LInstall((yyvsp[0].node)->varname,type,lnum);
                            }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",(yyvsp[0].node)->varname);
                                exit(1);
                                }
                        }
#line 1850 "y.tab.c"
    break;

  case 34: /* Body: START Slist END  */
#line 336 "tree.y"
                        {
                            (yyval.node)=(yyvsp[-1].node);
                        }
#line 1858 "y.tab.c"
    break;

  case 35: /* Body: START END  */
#line 339 "tree.y"
              {}
#line 1864 "y.tab.c"
    break;

  case 36: /* Slist: Slist Stmt  */
#line 342 "tree.y"
                        {
                            (yyval.node)=createTree(-1,-1,NULL,tCONNECT,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 1872 "y.tab.c"
    break;

  case 37: /* Slist: Stmt  */
#line 346 "tree.y"
                        {
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 1880 "y.tab.c"
    break;

  case 38: /* Stmt: InputStmt  */
#line 350 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 1886 "y.tab.c"
    break;

  case 39: /* Stmt: OutputStmt  */
#line 351 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 1892 "y.tab.c"
    break;

  case 40: /* Stmt: AsgStmt  */
#line 352 "tree.y"
                 { (yyval.node)=(yyvsp[0].node);}
#line 1898 "y.tab.c"
    break;

  case 41: /* Stmt: Ifstmt  */
#line 353 "tree.y"
                {(yyval.node)=(yyvsp[0].node);}
#line 1904 "y.tab.c"
    break;

  case 42: /* Stmt: Whilestmt  */
#line 354 "tree.y"
                   { (yyval.node)=(yyvsp[0].node);}
#line 1910 "y.tab.c"
    break;

  case 43: /* Stmt: BreakStmt  */
#line 355 "tree.y"
                    { (yyval.node)=(yyvsp[0].node);}
#line 1916 "y.tab.c"
    break;

  case 44: /* Stmt: ContStmt  */
#line 356 "tree.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 1922 "y.tab.c"
    break;

  case 45: /* Stmt: ReturnStmt  */
#line 357 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 1928 "y.tab.c"
    break;

  case 46: /* ReturnStmt: Return expr EOL  */
#line 359 "tree.y"
                               {(yyval.node)=createTree(-1,-1,NULL,tReturn,(yyvsp[-1].node),NULL,NULL);}
#line 1934 "y.tab.c"
    break;

  case 47: /* ReturnStmt: Return EOL  */
#line 360 "tree.y"
                             {(yyval.node)=createTree(-1,-1,NULL,tReturn,NULL,NULL,NULL);}
#line 1940 "y.tab.c"
    break;

  case 48: /* BreakStmt: BREAK EOL  */
#line 362 "tree.y"
                         {(yyval.node)=createTree(-1,-1,NULL,tBREAK,NULL,NULL,NULL);}
#line 1946 "y.tab.c"
    break;

  case 49: /* ContStmt: CONTINUE EOL  */
#line 364 "tree.y"
                           {(yyval.node)=createTree(-1,-1,NULL,tCONTINUE,NULL,NULL,NULL);}
#line 1952 "y.tab.c"
    break;

  case 50: /* InputStmt: READ '(' expr ')' EOL  */
#line 366 "tree.y"
                                      {(yyval.node)=createTree(-1,-1,NULL,tREAD,(yyvsp[-2].node),NULL,NULL);}
#line 1958 "y.tab.c"
    break;

  case 51: /* OutputStmt: WRITE '(' expr ')' EOL  */
#line 368 "tree.y"
                                       {(yyval.node)=createTree(-1,-1,NULL,tWRITE,(yyvsp[-2].node),NULL,NULL);}
#line 1964 "y.tab.c"
    break;

  case 52: /* AsgStmt: expr ASSIGN expr EOL  */
#line 370 "tree.y"
                                  { (yyval.node)=createTree(-1,-1,NULL,tASSIGN,(yyvsp[-3].node),(yyvsp[-1].node),NULL);}
#line 1970 "y.tab.c"
    break;

  case 53: /* Ifstmt: IF '(' expr ')' then Slist Else Slist ENDIF EOL  */
#line 372 "tree.y"
                                                            {(yyval.node)=createTree(-1,-1,NULL,tIF,(yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 1976 "y.tab.c"
    break;

  case 54: /* Ifstmt: IF '(' expr ')' then Slist ENDIF EOL  */
#line 373 "tree.y"
                                               {(yyval.node)=createTree(-1,-1,NULL,tIF,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 1982 "y.tab.c"
    break;

  case 55: /* Whilestmt: WHILE '(' expr ')' DO Slist endwhile EOL  */
#line 375 "tree.y"
                                                        {(yyval.node)=createTree(-1,-1,NULL,tWHILE,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 1988 "y.tab.c"
    break;

  case 56: /* expr: expr PLUS expr  */
#line 377 "tree.y"
                        {(yyval.node)=createTree(-1,-1,"+",tADD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 1994 "y.tab.c"
    break;

  case 57: /* expr: expr MINUS expr  */
#line 378 "tree.y"
                         {(yyval.node)=createTree(-1,-1,"-",tSUB,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2000 "y.tab.c"
    break;

  case 58: /* expr: expr MUL expr  */
#line 379 "tree.y"
                       {(yyval.node)=createTree(-1,-1,"*",tMUL,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2006 "y.tab.c"
    break;

  case 59: /* expr: expr DIV expr  */
#line 380 "tree.y"
                      {(yyval.node)=createTree(-1,-1,"/",tDIV,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2012 "y.tab.c"
    break;

  case 60: /* expr: expr LE expr  */
#line 381 "tree.y"
                      {(yyval.node)=createTree(-1,-1,NULL,tLE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2018 "y.tab.c"
    break;

  case 61: /* expr: expr GE expr  */
#line 382 "tree.y"
                      {(yyval.node)=createTree(-1,-1,NULL,tGE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2024 "y.tab.c"
    break;

  case 62: /* expr: expr LT expr  */
#line 383 "tree.y"
                      {(yyval.node)=createTree(-1,-1,NULL,tLT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2030 "y.tab.c"
    break;

  case 63: /* expr: expr GT expr  */
#line 384 "tree.y"
                      {(yyval.node)=createTree(-1,-1,NULL,tGT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2036 "y.tab.c"
    break;

  case 64: /* expr: expr NE expr  */
#line 385 "tree.y"
                      {(yyval.node)=createTree(-1,-1,NULL,tNE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2042 "y.tab.c"
    break;

  case 65: /* expr: expr EQ expr  */
#line 386 "tree.y"
                      {(yyval.node)=createTree(-1,-1,NULL,tEQ,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2048 "y.tab.c"
    break;

  case 66: /* expr: expr MOD expr  */
#line 387 "tree.y"
                       {(yyval.node)=createTree(-1,-1,NULL,tMOD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2054 "y.tab.c"
    break;

  case 67: /* expr: expr AND expr  */
#line 388 "tree.y"
                       {(yyval.node)=createTree(-1,-1,NULL,tAND,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2060 "y.tab.c"
    break;

  case 68: /* expr: expr OR expr  */
#line 389 "tree.y"
                      {(yyval.node)=createTree(-1,-1,NULL,tOR,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2066 "y.tab.c"
    break;

  case 69: /* expr: NUM  */
#line 390 "tree.y"
             {(yyval.node)=(yyvsp[0].node);}
#line 2072 "y.tab.c"
    break;

  case 70: /* expr: MSG  */
#line 391 "tree.y"
             {(yyval.node)=(yyvsp[0].node);}
#line 2078 "y.tab.c"
    break;

  case 71: /* expr: VAR  */
#line 392 "tree.y"
            {(yyval.node)=(yyvsp[0].node);}
#line 2084 "y.tab.c"
    break;

  case 72: /* expr: '(' expr ')'  */
#line 393 "tree.y"
                        {(yyval.node) = (yyvsp[-1].node);}
#line 2090 "y.tab.c"
    break;

  case 73: /* expr: ID '(' ')'  */
#line 395 "tree.y"
                        {
                            (yyvsp[-2].node)->Gentry=Lookup((yyvsp[-2].node)->varname);
                            if((yyvsp[-2].node)->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",(yyvsp[-2].node)->varname);
                                exit(1);
                            }
                            struct typi*temp=typ_head;
                            if(temp!=NULL)
                            {
                                printf("error in number of argu. in function %s\n",(yyvsp[-2].node)->varname);
                                exit(1);
                            }

                            (yyvsp[-2].node)->type=(yyvsp[-2].node)->Gentry->type;
                            (yyval.node)=createTree(-1,type,(yyvsp[-2].node)->varname,tFunction,NULL,NULL,NULL);
                        }
#line 2112 "y.tab.c"
    break;

  case 74: /* expr: ID '(' ArgList ')'  */
#line 414 "tree.y"
                        {
                            (yyvsp[-3].node)->Gentry=Lookup((yyvsp[-3].node)->varname);
                            if((yyvsp[-3].node)->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",(yyvsp[-3].node)->varname);
                                exit(1);
                            }

                                                        //type check in argument list of a funtion and the arguments passed to a function also
                                                        struct typi*temp=typ_head;
                                                        struct Gsymbol*temp1=Lookup((yyvsp[-3].node)->varname);
                                                        struct paramstruct *curr=temp1->paramlist;
                                                        int x=0,y=0;
                                                        while(temp!=NULL){temp=temp->next;x++;}
                                                        while(curr!=NULL){curr=curr->next;y++;}
                                                        if(x!=y)
                                                        {printf("number of arguments not correct in function '%s'\n",(yyvsp[-3].node)->varname);
                                                        exit(1);                                                                            
                                                        }
                                                        temp=typ_head;curr=temp1->paramlist;
                                                        while(curr!=NULL)
                                                        {   
                                                            if(temp==NULL)
                                                            {
                                                                printf("error,full arguments are not passed in fucntion %s\n",(yyvsp[-3].node)->varname);
                                                                exit(1);
                                                            }
                                                            if(curr->type!=temp->type) 
                                                            {
                                                            printf("argument type error in '%s'\n",(yyvsp[-3].node)->varname);
                                                            exit(1);
                                                            }
                                                            curr=curr->next;
                                                            temp=temp->next;
                                                        }
                                                        
                            typ_head=NULL;
                            (yyvsp[-3].node)->type=(yyvsp[-3].node)->Gentry->type;
                            (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,(yyvsp[-3].node)->varname,tFunction,(yyvsp[-1].node),NULL,NULL);
                        }
#line 2157 "y.tab.c"
    break;

  case 75: /* ArgList: ArgList COMMA expr  */
#line 455 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyvsp[0].node)->third=(yyvsp[-2].node);
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2170 "y.tab.c"
    break;

  case 76: /* ArgList: expr  */
#line 464 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2182 "y.tab.c"
    break;

  case 77: /* VAR: ID  */
#line 472 "tree.y"
                        {
                        if(LLookup((yyvsp[0].node)->varname)==NULL && Lookup((yyvsp[0].node)->varname)==NULL)
                        {
                            printf("Variable '%s' not declared!", (yyvsp[0].node)->varname);
                            exit(1);
                        }
                        if(LLookup((yyvsp[0].node)->varname)!=NULL)
                        {
                            (yyvsp[0].node)->Gentry=NULL;
                            struct Lsymbol*temp=LLookup((yyvsp[0].node)->varname);
                            (yyvsp[0].node)->type=temp->type;
                        }
                        else {
                        (yyvsp[0].node)->Gentry=Lookup((yyvsp[0].node)->varname);
                        (yyvsp[0].node)->type=(yyvsp[0].node)->Gentry->type;
                        }
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2205 "y.tab.c"
    break;

  case 78: /* VAR: ID '[' expr ']'  */
#line 491 "tree.y"
                        {
                            if((yyvsp[-1].node)->type!=tINT)
                            {
                                printf("array index is not int");
                                exit(1);
                            }
                            if(LLookup((yyvsp[-3].node)->varname)==NULL && Lookup((yyvsp[-3].node)->varname)==NULL)
                            {
                                printf("array not %s declared",(yyvsp[-3].node)->varname);
                                exit(1);
                            }
                            if(LLookup((yyvsp[-3].node)->varname)!=NULL)
                            {
                               (yyvsp[-3].node)->Gentry=NULL;
                                (yyvsp[-3].node)->type=type;
                            }
                            else {
                            (yyvsp[-3].node)->Gentry=Lookup((yyvsp[-3].node)->varname);
                            (yyvsp[-3].node)->type=(yyvsp[-3].node)->Gentry->type;
                            }
                            (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tARRAY,(yyvsp[-3].node),(yyvsp[-1].node),NULL);
                        }
#line 2232 "y.tab.c"
    break;


#line 2236 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 513 "tree.y"


/* by printing lineno  we can get in which line the error has occured */

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    printf("line number=%d\n",lineno);
    return 0;
}



int main() {
  targetFile=fopen("targetFile.xsm","w");
  if(targetFile==NULL)
  {
    printf("file error\n");
  }
  yyin=fopen("input_l","r");
  yyparse();
  if(targetFile!=NULL)
  fclose(targetFile);
  return 0;
}
