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
    #include "type.h"
    #include "global.h"
    #include "tree.h"
    #include "tree.c"
    #include "symbol.h"
    #include "symbol.c"
    #include "type.c"
    #include<string.h>
    FILE *targetFile;
    extern FILE *yyin;
    int yylex(void);
    extern char* yytext;
    void yyerror(char const *s);
    

#line 90 "y.tab.c"

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
    CONTINUE = 295,                /* CONTINUE  */
    TYPE = 296,                    /* TYPE  */
    ENDTYPE = 297,                 /* ENDTYPE  */
    ALLOC = 298,                   /* ALLOC  */
    FREE = 299,                    /* FREE  */
    INITIALIZE = 300,              /* INITIALIZE  */
    Nullptr = 301                  /* Nullptr  */
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
#define TYPE 296
#define ENDTYPE 297
#define ALLOC 298
#define FREE 299
#define INITIALIZE 300
#define Nullptr 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "tree.y"

        struct tnode *node;
    

#line 240 "y.tab.c"

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
  YYSYMBOL_TYPE = 41,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 42,                   /* ENDTYPE  */
  YYSYMBOL_ALLOC = 43,                     /* ALLOC  */
  YYSYMBOL_FREE = 44,                      /* FREE  */
  YYSYMBOL_INITIALIZE = 45,                /* INITIALIZE  */
  YYSYMBOL_Nullptr = 46,                   /* Nullptr  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_Program = 55,                   /* Program  */
  YYSYMBOL_TypeDefBlock = 56,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 57,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 58,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 59,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 60,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 61,                  /* TypeName  */
  YYSYMBOL_GdeclBlock = 62,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 63,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 64,                     /* Gdecl  */
  YYSYMBOL_GidList = 65,                   /* GidList  */
  YYSYMBOL_Gid = 66,                       /* Gid  */
  YYSYMBOL_FdefBlock = 67,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 68,                      /* Fdef  */
  YYSYMBOL_ParamList = 69,                 /* ParamList  */
  YYSYMBOL_Param = 70,                     /* Param  */
  YYSYMBOL_PType = 71,                     /* PType  */
  YYSYMBOL_MainBlock = 72,                 /* MainBlock  */
  YYSYMBOL_FTypeName = 73,                 /* FTypeName  */
  YYSYMBOL_LdeclBlock = 74,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 75,                  /* LDecList  */
  YYSYMBOL_LDecl = 76,                     /* LDecl  */
  YYSYMBOL_IdList = 77,                    /* IdList  */
  YYSYMBOL_Body = 78,                      /* Body  */
  YYSYMBOL_Slist = 79,                     /* Slist  */
  YYSYMBOL_Stmt = 80,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 81,                /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 82,                 /* BreakStmt  */
  YYSYMBOL_ContStmt = 83,                  /* ContStmt  */
  YYSYMBOL_InputStmt = 84,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 85,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 86,                   /* AsgStmt  */
  YYSYMBOL_Ifstmt = 87,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 88,                 /* Whilestmt  */
  YYSYMBOL_AllocStmt = 89,                 /* AllocStmt  */
  YYSYMBOL_FreeStmt = 90,                  /* FreeStmt  */
  YYSYMBOL_InitialStmt = 91,               /* InitialStmt  */
  YYSYMBOL_expr = 92,                      /* expr  */
  YYSYMBOL_FIELD = 93,                     /* FIELD  */
  YYSYMBOL_ArgList = 94,                   /* ArgList  */
  YYSYMBOL_VAR = 95                        /* VAR  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   533

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      51,    52,     2,     2,     2,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    57,    62,    70,    74,    77,    78,    81,
     123,   127,   132,   152,   156,   160,   170,   176,   184,   185,
     188,   190,   191,   194,   207,   221,   242,   246,   252,   316,
     316,   317,   319,   344,   348,   352,   359,   399,   402,   407,
     412,   421,   422,   424,   425,   427,   429,   449,   471,   475,
     477,   481,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   508,   509,   511,   513,   515,   517,   519,
     520,   522,   523,   525,   527,   529,   531,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   576,   621,   624,
     629,   634,   643,   654,   680
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
  "ENDIF", "endwhile", "WHILE", "DO", "BREAK", "CONTINUE", "TYPE",
  "ENDTYPE", "ALLOC", "FREE", "INITIALIZE", "Nullptr", "'{'", "'}'", "'['",
  "']'", "'('", "')'", "'.'", "$accept", "Program", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "TypeName",
  "GdeclBlock", "GdeclList", "Gdecl", "GidList", "Gid", "FdefBlock",
  "Fdef", "ParamList", "Param", "PType", "MainBlock", "FTypeName",
  "LdeclBlock", "LDecList", "LDecl", "IdList", "Body", "Slist", "Stmt",
  "ReturnStmt", "BreakStmt", "ContStmt", "InputStmt", "OutputStmt",
  "AsgStmt", "Ifstmt", "Whilestmt", "AllocStmt", "FreeStmt", "InitialStmt",
  "expr", "FIELD", "ArgList", "VAR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -39,    -9,     9,    67,   -35,    -7,   -95,   -95,    63,   -16,
      59,   -95,   118,   -95,   -95,   -95,   -95,   -95,   -95,     7,
     183,   -95,   -23,   -95,   -16,   -95,    59,   -95,   -95,    29,
      -5,   -95,    49,   -36,    -4,   -95,   -95,   -95,    24,   -95,
     -95,    22,   -95,   -95,    90,    74,   151,   -95,     7,    62,
     151,   -95,    60,   -95,   -95,   -95,   -14,   -95,    99,   -95,
      95,   -13,   -95,   151,   -95,   -95,   198,    98,    85,   -95,
     -95,   116,   241,   -95,   239,    87,    95,   -95,    32,   -95,
     -95,   -95,    82,   104,    21,   105,    11,   -95,   -95,   106,
     140,   149,   109,   238,   272,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   414,   108,   -95,
     -95,    98,   -95,   150,   238,   238,   238,     8,   166,   238,
     -95,   438,   238,   -95,   -95,   238,    61,   -95,   -95,   238,
     238,   238,   238,   335,   238,   238,   238,   238,   238,   238,
      83,   133,   238,   171,   134,   -95,    97,   120,   391,   -95,
     484,    38,   -95,   147,   -95,   170,   197,   -95,   296,   296,
      81,    81,   135,   154,   175,   461,   -95,   -95,   507,   507,
     507,   507,   -95,   507,   -95,   507,   -95,   -95,   -95,   190,
     199,   -95,   238,   -95,   193,   187,   222,   156,   179,   -95,
     -95,   -95,   -95,   484,   350,   350,   -95,   225,   228,   221,
     292,   -95,   -95,   350,   229,   230,   332,   -95,   -95,   233,
     -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,    37,     0,     0,     8,     1,     0,     0,
      37,     4,     0,     5,     7,    15,    17,    13,    14,     0,
       0,    19,     0,    40,    38,    39,    37,    27,     3,     0,
       0,    11,     0,    23,     0,    22,    16,    18,     0,    26,
       2,     0,     9,    10,     0,     0,    31,    20,     0,     0,
      31,    12,     0,    35,    33,    34,     0,    30,     0,    21,
       0,     0,    24,     0,    25,    32,     0,     0,     0,    29,
      42,     0,     0,    44,     0,     0,     0,    47,     0,    41,
      43,    92,     0,     0,   103,     0,     0,    93,    49,     0,
       0,     0,     0,     0,     0,    51,    59,    57,    58,    52,
      53,    54,    55,    56,    60,    61,    62,     0,    98,    94,
      36,     0,    45,     0,     0,     0,     0,     0,     0,     0,
      64,     0,     0,    65,    66,     0,     0,    48,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,    96,
     102,     0,    99,     0,    63,     0,     0,    95,    77,    78,
      79,    80,     0,     0,     0,     0,    88,    89,    81,    82,
      83,    84,    90,    85,    91,    86,    87,   100,    28,     0,
       0,   104,     0,    97,     0,     0,     0,     0,     0,    70,
      69,    68,    67,   101,     0,     0,    75,     0,     0,     0,
       0,    74,    76,     0,     0,     0,     0,    72,    73,     0,
      71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   -95,   240,   -95,   214,    -8,   -95,   -95,
     234,   -95,   209,   -95,   236,   216,   196,   -95,     0,   -95,
     191,   -95,   202,   -95,   157,     3,   -94,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -85,   -95,
     -95,   -95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     6,    30,    31,    19,    10,    20,
      21,    34,    35,    26,    27,    56,    57,    58,    11,    29,
      67,    72,    73,    78,    75,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     151,   109
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     128,   121,     1,     4,    32,     4,    47,    15,   126,     7,
      28,    81,    12,    45,    81,    46,    22,    63,    63,    33,
      84,   120,    32,    84,    17,    18,    40,    48,    38,   146,
     147,   148,   150,    87,   153,    13,    87,   155,    64,    68,
     156,    41,   112,    42,   158,   159,   160,   161,   165,   166,
     167,   168,   169,   170,   171,   173,   175,   176,    71,    93,
     149,    44,    93,   113,    71,   129,   130,   131,   132,   182,
     116,    23,   117,    50,   118,    15,    49,    52,   134,   135,
     136,   137,   138,   139,   140,   141,    81,   142,    24,    25,
     183,    16,    17,    18,     8,    84,     9,   193,   134,   135,
      51,   129,   130,   131,   132,   128,   128,   142,    87,    60,
      62,    65,   128,   157,   134,   135,   136,   137,   138,   139,
     140,   141,    66,   142,   129,   130,   131,   132,    77,   172,
      15,    74,    76,   114,    93,   110,    81,   134,   135,   136,
     137,   138,   139,   140,   141,    84,   142,    17,    18,   179,
     123,   129,   130,   131,   132,   115,   119,   122,    87,   124,
     125,   143,   145,    53,   134,   135,   136,   137,   138,   139,
     140,   141,   180,   142,   129,   130,   131,   132,   152,   174,
      54,    55,   178,   177,    93,   189,   187,   134,   135,   136,
     137,   138,   139,   140,   141,    15,   142,   199,   200,   184,
     191,   129,   130,   131,   132,   188,   206,   194,   197,   192,
      15,    36,    17,    18,   134,   135,   136,   137,   138,   139,
     140,   141,   185,   142,    81,   195,    70,    17,    18,    82,
      83,   198,   196,    84,    85,   201,   203,    86,   202,   207,
     208,    81,    81,   210,    43,    14,    87,    82,    83,   186,
      84,    84,    85,    15,    37,    86,   204,    59,    89,    69,
      90,    91,    39,    87,    87,    92,    61,   111,   144,    79,
      17,    18,    93,    88,    80,    81,    89,     0,    90,    91,
      82,    83,     0,    92,    84,    85,     0,     0,    86,    93,
      93,     0,     0,     0,     0,    81,     0,    87,     0,     0,
      82,    83,   131,   132,    84,    85,   127,     0,    86,    89,
       0,    90,    91,   134,   135,     0,    92,    87,     0,     0,
       0,     0,   142,    93,     0,     0,     0,     0,   205,    89,
       0,    90,    91,     0,     0,    81,    92,     0,    81,     0,
      82,    83,     0,    93,    84,    85,     0,    84,    86,     0,
       0,     0,     0,    81,     0,     0,     0,    87,    82,    83,
      87,     0,    84,    85,     0,     0,    86,   209,     0,    89,
       0,    90,    91,     0,     0,    87,    92,     0,   162,     0,
     163,   164,     0,    93,     0,     0,    93,    89,     0,    90,
      91,     0,     0,     0,    92,   129,   130,   131,   132,     0,
       0,    93,     0,     0,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,   140,   141,     0,   142,   129,   130,
     131,   132,     0,     0,     0,   133,     0,     0,     0,     0,
       0,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   181,   129,   130,   131,   132,     0,     0,   154,     0,
       0,     0,     0,     0,     0,   134,   135,   136,   137,   138,
     139,   140,   141,     0,   142,   129,   130,   131,   132,     0,
       0,   190,     0,     0,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,   140,   141,     0,   142,   129,   130,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,   137,   138,   139,   140,   141,     0,
     142,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   142
};

static const yytype_int16 yycheck[] =
{
      94,    86,    41,    12,    12,    12,    10,    12,    93,     0,
      10,     3,    47,    49,     3,    51,    32,    31,    31,    12,
      12,    10,    30,    12,    29,    30,    26,    31,    51,   114,
     115,   116,   117,    25,   119,    42,    25,   122,    52,    52,
     125,    12,    10,    48,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,    66,    51,
      52,    12,    51,    31,    72,     4,     5,     6,     7,    31,
      49,    12,    51,    51,    53,    12,    52,     3,    17,    18,
      19,    20,    21,    22,    23,    24,     3,    26,    29,    30,
      52,    28,    29,    30,    27,    12,    29,   182,    17,    18,
      10,     4,     5,     6,     7,   199,   200,    26,    25,    47,
      50,    12,   206,    52,    17,    18,    19,    20,    21,    22,
      23,    24,    27,    26,     4,     5,     6,     7,    12,    46,
      12,    33,    47,    51,    51,    48,     3,    17,    18,    19,
      20,    21,    22,    23,    24,    12,    26,    29,    30,    52,
      10,     4,     5,     6,     7,    51,    51,    51,    25,    10,
      51,    53,    12,    12,    17,    18,    19,    20,    21,    22,
      23,    24,    52,    26,     4,     5,     6,     7,    12,    46,
      29,    30,    48,    12,    51,    10,    51,    17,    18,    19,
      20,    21,    22,    23,    24,    12,    26,   194,   195,    52,
      10,     4,     5,     6,     7,    51,   203,    14,    52,    10,
      12,    28,    29,    30,    17,    18,    19,    20,    21,    22,
      23,    24,    52,    26,     3,    38,    28,    29,    30,     8,
       9,    52,    10,    12,    13,    10,    15,    16,    10,    10,
      10,     3,     3,    10,    30,     5,    25,     8,     9,    52,
      12,    12,    13,    12,    20,    16,    35,    48,    37,    63,
      39,    40,    26,    25,    25,    44,    50,    76,   111,    28,
      29,    30,    51,    34,    72,     3,    37,    -1,    39,    40,
       8,     9,    -1,    44,    12,    13,    -1,    -1,    16,    51,
      51,    -1,    -1,    -1,    -1,     3,    -1,    25,    -1,    -1,
       8,     9,     6,     7,    12,    13,    34,    -1,    16,    37,
      -1,    39,    40,    17,    18,    -1,    44,    25,    -1,    -1,
      -1,    -1,    26,    51,    -1,    -1,    -1,    -1,    36,    37,
      -1,    39,    40,    -1,    -1,     3,    44,    -1,     3,    -1,
       8,     9,    -1,    51,    12,    13,    -1,    12,    16,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    25,     8,     9,
      25,    -1,    12,    13,    -1,    -1,    16,    35,    -1,    37,
      -1,    39,    40,    -1,    -1,    25,    44,    -1,    43,    -1,
      45,    46,    -1,    51,    -1,    -1,    51,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,     4,     5,     6,     7,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    50,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    55,    56,    12,    57,    58,     0,    27,    29,
      62,    72,    47,    42,    58,    12,    28,    29,    30,    61,
      63,    64,    32,    12,    29,    30,    67,    68,    72,    73,
      59,    60,    61,    12,    65,    66,    28,    64,    51,    68,
      72,    12,    48,    60,    12,    49,    51,    10,    31,    52,
      51,    10,     3,    12,    29,    30,    69,    70,    71,    66,
      47,    69,    50,    31,    52,    12,    27,    74,    52,    70,
      28,    61,    75,    76,    33,    78,    47,    12,    77,    28,
      76,     3,     8,     9,    12,    13,    16,    25,    34,    37,
      39,    40,    44,    51,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    95,
      48,    74,    10,    31,    51,    51,    49,    51,    53,    51,
      10,    92,    51,    10,    10,    51,    92,    34,    80,     4,
       5,     6,     7,    11,    17,    18,    19,    20,    21,    22,
      23,    24,    26,    53,    78,    12,    92,    92,    92,    52,
      92,    94,    12,    92,    10,    92,    92,    52,    92,    92,
      92,    92,    43,    45,    46,    92,    92,    92,    92,    92,
      92,    92,    46,    92,    46,    92,    92,    12,    48,    52,
      52,    50,    31,    52,    52,    52,    52,    51,    51,    10,
      10,    10,    10,    92,    14,    38,    10,    52,    52,    79,
      79,    10,    10,    15,    35,    36,    79,    10,    10,    35,
      10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    56,    56,    57,    57,    58,
      59,    59,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    65,    65,    66,    66,    66,    67,    67,    68,    69,
      69,    69,    70,    71,    71,    71,    72,    72,    73,    73,
      73,    74,    74,    75,    75,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    83,    84,    85,    86,
      86,    87,    87,    88,    89,    90,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     3,     0,     2,     1,     4,
       2,     1,     3,     1,     1,     1,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     4,     2,     1,     9,     3,
       1,     0,     2,     1,     1,     1,     8,     0,     1,     1,
       1,     3,     2,     2,     1,     3,     3,     1,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     2,     2,     5,     5,     4,
       4,    10,     8,     8,     6,     5,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     4,     1,     3,
       3,     3,     1,     1,     4
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
  case 2: /* Program: TypeDefBlock GdeclBlock FdefBlock MainBlock  */
#line 53 "tree.y"
                        {
                            printf("Done!!\n");
                            if(_global_pt)printSTable();
                        }
#line 1527 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock GdeclBlock MainBlock  */
#line 58 "tree.y"
                        {
                            printf("Done!!\n");
                             if(_global_pt)printSTable();
                        }
#line 1536 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock MainBlock  */
#line 63 "tree.y"
                        {  
                            printf("Done!!\n");
                        }
#line 1544 "y.tab.c"
    break;

  case 5: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 71 "tree.y"
                        {
                            if(_type_pt)printTypeTable();
                        }
#line 1552 "y.tab.c"
    break;

  case 6: /* TypeDefBlock: %empty  */
#line 74 "tree.y"
                        {}
#line 1558 "y.tab.c"
    break;

  case 7: /* TypeDefList: TypeDefList TypeDef  */
#line 77 "tree.y"
                                       {}
#line 1564 "y.tab.c"
    break;

  case 8: /* TypeDefList: TypeDef  */
#line 78 "tree.y"
                         {}
#line 1570 "y.tab.c"
    break;

  case 9: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 82 "tree.y"
                        { 
                            if(TLookup((yyvsp[-3].node)->varname)!=NULL)
                            {
                                printf("type %s aldready declared\n",(yyvsp[-3].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            Tptr = TInstall((yyvsp[-3].node)->varname,1,fieldHead);
                            struct Fieldlist*temp=fieldHead;
                            while(temp!=NULL)
                            {
                                if(temp->type==NULL)
                                {
                                if(strcmp(temp->curr_type,(yyvsp[-3].node)->varname)==0) temp->type=Tptr;
                                else {printf("type '%s' is not defined function =%s\n",temp->curr_type,(yyvsp[-3].node)->varname);
                                printf("error at  line:%d\n",lineno-2);
                                exit(1);
                                }
                                }
                                temp=temp->next;
                            }
                            fieldHead=NULL;
                            field_index=0;
                        }
#line 1599 "y.tab.c"
    break;

  case 10: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 124 "tree.y"
                        {
                            
                        }
#line 1607 "y.tab.c"
    break;

  case 11: /* FieldDeclList: FieldDecl  */
#line 128 "tree.y"
                        {
                        }
#line 1614 "y.tab.c"
    break;

  case 12: /* FieldDecl: TypeName ID EOL  */
#line 133 "tree.y"
                        {
                            struct Fieldlist*temp=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
                            struct Typetable*curr=NULL;
                            if(FLookup(fieldHead,(yyvsp[-1].node)->varname)!=NULL)
                            {
                                printf("field '%s' redeclare error in type '%s'\n",(yyvsp[-1].node)->varname,typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            temp->name=strdup((yyvsp[-1].node)->varname);
                            temp->fieldIndex=field_index;
                            field_index++;
                            curr=TLookup(typename);
                            temp->type=curr;
                            temp->curr_type=strdup(typename);
                            temp->next=fieldHead;
                            fieldHead=temp;
                        }
#line 1637 "y.tab.c"
    break;

  case 13: /* TypeName: INT  */
#line 153 "tree.y"
                        {
                        typename="int";
                        }
#line 1645 "y.tab.c"
    break;

  case 14: /* TypeName: STR  */
#line 157 "tree.y"
                        {
                        typename="str";
                        }
#line 1653 "y.tab.c"
    break;

  case 15: /* TypeName: ID  */
#line 161 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);typename=(yyvsp[0].node)->varname;
                        }
#line 1661 "y.tab.c"
    break;

  case 16: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 171 "tree.y"
                        {
                            initial(targetFile);
                            reset_local();
                            argnum=-2;
                        }
#line 1671 "y.tab.c"
    break;

  case 17: /* GdeclBlock: DECL ENDDECL  */
#line 177 "tree.y"
                        {
                            initial(targetFile);
                            reset_local();
                            argnum=-2;
                        }
#line 1681 "y.tab.c"
    break;

  case 18: /* GdeclList: GdeclList Gdecl  */
#line 184 "tree.y"
                             {}
#line 1687 "y.tab.c"
    break;

  case 19: /* GdeclList: Gdecl  */
#line 185 "tree.y"
                   {}
#line 1693 "y.tab.c"
    break;

  case 20: /* Gdecl: TypeName GidList EOL  */
#line 188 "tree.y"
                              {}
#line 1699 "y.tab.c"
    break;

  case 21: /* GidList: GidList COMMA Gid  */
#line 190 "tree.y"
                               {}
#line 1705 "y.tab.c"
    break;

  case 22: /* GidList: Gid  */
#line 191 "tree.y"
                 {}
#line 1711 "y.tab.c"
    break;

  case 23: /* Gid: ID  */
#line 195 "tree.y"
                        {
                            if(Lookup((yyvsp[0].node)->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                struct Gsymbol * temp= Install((yyvsp[0].node)->varname,type_ptr,1,NULL,-1);
                            }
                            else{
                                printf("redclare error of %s\n",(yyvsp[0].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                        }
#line 1728 "y.tab.c"
    break;

  case 24: /* Gid: ID '[' NUM ']'  */
#line 208 "tree.y"
                        {
                            if(Lookup((yyvsp[-3].node)->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                struct paramstruct *curr=(struct paramstruct*)malloc(sizeof(struct paramstruct));
                                struct Gsymbol *temp=Install((yyvsp[-3].node)->varname,type_ptr,(yyvsp[-1].node)->val,curr,-1);
                            }
                            else{
                                printf("redclare error of the array %s\n",(yyvsp[-3].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                        }
#line 1746 "y.tab.c"
    break;

  case 25: /* Gid: ID '(' ParamList ')'  */
#line 222 "tree.y"
                        {
                            if(Lookup((yyvsp[-3].node)->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                struct Gsymbol *temp=Install((yyvsp[-3].node)->varname,type_ptr,-1,paramlist,flabel);
                            }
                            else{
                                printf("The function redeclaration error %s\n",(yyvsp[-3].node)->varname);
                                paramlist=NULL;
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            flabel=flabel+1;
                            paramtemp=paramlist;
                            paramlist=NULL;
                        }
#line 1767 "y.tab.c"
    break;

  case 26: /* FdefBlock: FdefBlock Fdef  */
#line 243 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tFunconnect,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 1775 "y.tab.c"
    break;

  case 27: /* FdefBlock: Fdef  */
#line 247 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tFunconnect,(yyvsp[0].node),NULL,NULL);
                        }
#line 1783 "y.tab.c"
    break;

  case 28: /* Fdef: FTypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 253 "tree.y"
                        {
                            /* type checking in function */
                            if(Lookup((yyvsp[-7].node)->varname)==NULL)
                            {
                                printf("function '%s' is not defined \n",(yyvsp[-7].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(Lookup((yyvsp[-7].node)->varname)->type!=TLookup(ftypename))
                            {
                                printf("Type mismatch error in function '%s'\n ",(yyvsp[-7].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            int c=checkparam(paramlist,(yyvsp[-7].node)->varname);
                            if(c==-1)
                            {
                                paramlist=NULL;
                                printf("error has occured \n");
                                printf("error at  line:%d\n",lineno);
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
#line 1849 "y.tab.c"
    break;

  case 29: /* ParamList: ParamList COMMA Param  */
#line 316 "tree.y"
                                      {}
#line 1855 "y.tab.c"
    break;

  case 30: /* ParamList: Param  */
#line 316 "tree.y"
                                                {}
#line 1861 "y.tab.c"
    break;

  case 31: /* ParamList: %empty  */
#line 317 "tree.y"
                   {}
#line 1867 "y.tab.c"
    break;

  case 32: /* Param: PType ID  */
#line 320 "tree.y"
                        {
                            
                                struct paramstruct *temp=(struct paramstruct*)malloc(sizeof(struct paramstruct));
                                temp->name=strdup((yyvsp[0].node)->varname);
                                struct Typetable *type_ptr=TLookup(ptypename);
                                temp->type=type_ptr;
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
                                        printf("error at  line:%d\n",lineno);
                                        exit(1);
                                    }
                                }
                        }
#line 1895 "y.tab.c"
    break;

  case 33: /* PType: INT  */
#line 345 "tree.y"
                        {
                        ptypename="int";
                        }
#line 1903 "y.tab.c"
    break;

  case 34: /* PType: STR  */
#line 349 "tree.y"
                        {
                        ptypename="str";
                        }
#line 1911 "y.tab.c"
    break;

  case 35: /* PType: ID  */
#line 353 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);ptypename=(yyvsp[0].node)->varname;
                        }
#line 1919 "y.tab.c"
    break;

  case 36: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 360 "tree.y"
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
#line 1964 "y.tab.c"
    break;

  case 37: /* MainBlock: %empty  */
#line 399 "tree.y"
                          {}
#line 1970 "y.tab.c"
    break;

  case 38: /* FTypeName: INT  */
#line 403 "tree.y"
                        {
                        ftypename="int";
                        _in_func=1;
                        }
#line 1979 "y.tab.c"
    break;

  case 39: /* FTypeName: STR  */
#line 408 "tree.y"
                        {
                        ftypename="str";
                        _in_func=1;
                        }
#line 1988 "y.tab.c"
    break;

  case 40: /* FTypeName: ID  */
#line 413 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);ftypename=(yyvsp[0].node)->varname;
                        _in_func=1;
                        }
#line 1997 "y.tab.c"
    break;

  case 41: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 421 "tree.y"
                                      {}
#line 2003 "y.tab.c"
    break;

  case 42: /* LdeclBlock: DECL ENDDECL  */
#line 422 "tree.y"
                              {}
#line 2009 "y.tab.c"
    break;

  case 43: /* LDecList: LDecList LDecl  */
#line 424 "tree.y"
                            {}
#line 2015 "y.tab.c"
    break;

  case 44: /* LDecList: LDecl  */
#line 425 "tree.y"
                       {}
#line 2021 "y.tab.c"
    break;

  case 45: /* LDecl: TypeName IdList EOL  */
#line 427 "tree.y"
                                {}
#line 2027 "y.tab.c"
    break;

  case 46: /* IdList: IdList COMMA ID  */
#line 430 "tree.y"
                        {
                            if(TLookup(typename)==NULL)
                            {
                                printf("type %s is not found\n",typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup((yyvsp[0].node)->varname)==NULL){
                                lnum++;
                                struct Typetable *type=TLookup(typename);
                                LInstall((yyvsp[0].node)->varname,type,lnum);
                                }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",(yyvsp[0].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                                }
                        }
#line 2051 "y.tab.c"
    break;

  case 47: /* IdList: ID  */
#line 450 "tree.y"
                        {
                            if(TLookup(typename)==NULL)
                            {
                                printf("type %s is not found\n",typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup((yyvsp[0].node)->varname)==NULL)
                            {
                                lnum++;
                                struct Typetable *type=TLookup(typename);
                                LInstall((yyvsp[0].node)->varname,type,lnum);
                            }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",(yyvsp[0].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                                }
                        }
#line 2076 "y.tab.c"
    break;

  case 48: /* Body: START Slist END  */
#line 472 "tree.y"
                        {
                            (yyval.node)=(yyvsp[-1].node);
                        }
#line 2084 "y.tab.c"
    break;

  case 49: /* Body: START END  */
#line 475 "tree.y"
              {}
#line 2090 "y.tab.c"
    break;

  case 50: /* Slist: Slist Stmt  */
#line 478 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tCONNECT,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 2098 "y.tab.c"
    break;

  case 51: /* Slist: Stmt  */
#line 482 "tree.y"
                        {
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2106 "y.tab.c"
    break;

  case 52: /* Stmt: InputStmt  */
#line 486 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2112 "y.tab.c"
    break;

  case 53: /* Stmt: OutputStmt  */
#line 487 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2118 "y.tab.c"
    break;

  case 54: /* Stmt: AsgStmt  */
#line 488 "tree.y"
                  { (yyval.node)=(yyvsp[0].node);}
#line 2124 "y.tab.c"
    break;

  case 55: /* Stmt: Ifstmt  */
#line 489 "tree.y"
                 {(yyval.node)=(yyvsp[0].node);}
#line 2130 "y.tab.c"
    break;

  case 56: /* Stmt: Whilestmt  */
#line 490 "tree.y"
                    { (yyval.node)=(yyvsp[0].node);}
#line 2136 "y.tab.c"
    break;

  case 57: /* Stmt: BreakStmt  */
#line 491 "tree.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 2142 "y.tab.c"
    break;

  case 58: /* Stmt: ContStmt  */
#line 492 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2148 "y.tab.c"
    break;

  case 59: /* Stmt: ReturnStmt  */
#line 493 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2154 "y.tab.c"
    break;

  case 60: /* Stmt: AllocStmt  */
#line 494 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2160 "y.tab.c"
    break;

  case 61: /* Stmt: FreeStmt  */
#line 495 "tree.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 2166 "y.tab.c"
    break;

  case 62: /* Stmt: InitialStmt  */
#line 496 "tree.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 2172 "y.tab.c"
    break;

  case 63: /* ReturnStmt: Return expr EOL  */
#line 508 "tree.y"
                               {(yyval.node)=createTree(-1,NULL,NULL,tReturn,(yyvsp[-1].node),NULL,NULL);}
#line 2178 "y.tab.c"
    break;

  case 64: /* ReturnStmt: Return EOL  */
#line 509 "tree.y"
                             {(yyval.node)=createTree(-1,NULL,NULL,tReturn,NULL,NULL,NULL);}
#line 2184 "y.tab.c"
    break;

  case 65: /* BreakStmt: BREAK EOL  */
#line 511 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tBREAK,NULL,NULL,NULL);}
#line 2190 "y.tab.c"
    break;

  case 66: /* ContStmt: CONTINUE EOL  */
#line 513 "tree.y"
                           {(yyval.node)=createTree(-1,NULL,NULL,tCONTINUE,NULL,NULL,NULL);}
#line 2196 "y.tab.c"
    break;

  case 67: /* InputStmt: READ '(' expr ')' EOL  */
#line 515 "tree.y"
                                      {(yyval.node)=createTree(-1,NULL,NULL,tREAD,(yyvsp[-2].node),NULL,NULL);}
#line 2202 "y.tab.c"
    break;

  case 68: /* OutputStmt: WRITE '(' expr ')' EOL  */
#line 517 "tree.y"
                                       {(yyval.node)=createTree(-1,NULL,NULL,tWRITE,(yyvsp[-2].node),NULL,NULL);}
#line 2208 "y.tab.c"
    break;

  case 69: /* AsgStmt: expr ASSIGN expr EOL  */
#line 519 "tree.y"
                                  { (yyval.node)=createTree(-1,NULL,NULL,tASSIGN,(yyvsp[-3].node),(yyvsp[-1].node),NULL);}
#line 2214 "y.tab.c"
    break;

  case 70: /* AsgStmt: expr ASSIGN Nullptr EOL  */
#line 520 "tree.y"
                                    {(yyval.node)=createTree(-1,NULL,NULL,tNullAs,(yyvsp[-3].node),NULL,NULL);}
#line 2220 "y.tab.c"
    break;

  case 71: /* Ifstmt: IF '(' expr ')' then Slist Else Slist ENDIF EOL  */
#line 522 "tree.y"
                                                            {(yyval.node)=createTree(-1,NULL,NULL,tIF,(yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2226 "y.tab.c"
    break;

  case 72: /* Ifstmt: IF '(' expr ')' then Slist ENDIF EOL  */
#line 523 "tree.y"
                                               {(yyval.node)=createTree(-1,NULL,NULL,tIF,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2232 "y.tab.c"
    break;

  case 73: /* Whilestmt: WHILE '(' expr ')' DO Slist endwhile EOL  */
#line 525 "tree.y"
                                                        {(yyval.node)=createTree(-1,NULL,NULL,tWHILE,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2238 "y.tab.c"
    break;

  case 74: /* AllocStmt: expr ASSIGN ALLOC '(' ')' EOL  */
#line 527 "tree.y"
                                           {(yyval.node)=createTree(-1,NULL,NULL,tALLOC,(yyvsp[-5].node),NULL,NULL);}
#line 2244 "y.tab.c"
    break;

  case 75: /* FreeStmt: FREE '(' expr ')' EOL  */
#line 529 "tree.y"
                                {(yyval.node)=createTree(-1,NULL,NULL,tFREE,(yyvsp[-2].node),NULL,NULL);}
#line 2250 "y.tab.c"
    break;

  case 76: /* InitialStmt: expr ASSIGN INITIALIZE '(' ')' EOL  */
#line 531 "tree.y"
                                                 {(yyval.node)=createTree(-1,TLookup("int"),NULL,tInitial,(yyvsp[-5].node),NULL,NULL);
                //in temp.lib it is limited to 1020
                }
#line 2258 "y.tab.c"
    break;

  case 77: /* expr: expr PLUS expr  */
#line 536 "tree.y"
                        {(yyval.node)=createTree(-1,NULL,"+",tADD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2264 "y.tab.c"
    break;

  case 78: /* expr: expr MINUS expr  */
#line 537 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,"-",tSUB,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2270 "y.tab.c"
    break;

  case 79: /* expr: expr MUL expr  */
#line 538 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,"*",tMUL,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2276 "y.tab.c"
    break;

  case 80: /* expr: expr DIV expr  */
#line 539 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,"/",tDIV,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2282 "y.tab.c"
    break;

  case 81: /* expr: expr LE expr  */
#line 540 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tLE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2288 "y.tab.c"
    break;

  case 82: /* expr: expr GE expr  */
#line 541 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tGE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2294 "y.tab.c"
    break;

  case 83: /* expr: expr LT expr  */
#line 542 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tLT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2300 "y.tab.c"
    break;

  case 84: /* expr: expr GT expr  */
#line 543 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tGT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2306 "y.tab.c"
    break;

  case 85: /* expr: expr NE expr  */
#line 544 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tNE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2312 "y.tab.c"
    break;

  case 86: /* expr: expr EQ expr  */
#line 545 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tEQ,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2318 "y.tab.c"
    break;

  case 87: /* expr: expr MOD expr  */
#line 546 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,NULL,tMOD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2324 "y.tab.c"
    break;

  case 88: /* expr: expr AND expr  */
#line 547 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,NULL,tAND,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2330 "y.tab.c"
    break;

  case 89: /* expr: expr OR expr  */
#line 548 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tOR,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2336 "y.tab.c"
    break;

  case 90: /* expr: expr NE Nullptr  */
#line 549 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tNullNe,(yyvsp[-2].node),NULL,NULL);}
#line 2342 "y.tab.c"
    break;

  case 91: /* expr: expr EQ Nullptr  */
#line 550 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tNullEq,(yyvsp[-2].node),NULL,NULL);}
#line 2348 "y.tab.c"
    break;

  case 92: /* expr: NUM  */
#line 551 "tree.y"
             { (yyvsp[0].node)->type=TLookup("int");(yyval.node)=(yyvsp[0].node);}
#line 2354 "y.tab.c"
    break;

  case 93: /* expr: MSG  */
#line 552 "tree.y"
             {(yyvsp[0].node)->type=TLookup("str");(yyval.node)=(yyvsp[0].node);}
#line 2360 "y.tab.c"
    break;

  case 94: /* expr: VAR  */
#line 553 "tree.y"
            {(yyval.node)=(yyvsp[0].node);}
#line 2366 "y.tab.c"
    break;

  case 95: /* expr: '(' expr ')'  */
#line 554 "tree.y"
                        {(yyval.node) = (yyvsp[-1].node);}
#line 2372 "y.tab.c"
    break;

  case 96: /* expr: ID '(' ')'  */
#line 556 "tree.y"
                        {
                            (yyvsp[-2].node)->Gentry=Lookup((yyvsp[-2].node)->varname);
                            if((yyvsp[-2].node)->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",(yyvsp[-2].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            struct typi*temp=typ_head;
                            if(temp!=NULL)
                            {
                                printf("error in number of argu. in function %s\n",(yyvsp[-2].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }

                            (yyvsp[-2].node)->type=(yyvsp[-2].node)->Gentry->type;
                            (yyval.node)=createTree(-1,(yyvsp[-2].node)->type,(yyvsp[-2].node)->varname,tFunction,NULL,NULL,NULL);
                        }
#line 2396 "y.tab.c"
    break;

  case 97: /* expr: ID '(' ArgList ')'  */
#line 577 "tree.y"
                        {
                            (yyvsp[-3].node)->Gentry=Lookup((yyvsp[-3].node)->varname);
                            if((yyvsp[-3].node)->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",(yyvsp[-3].node)->varname);
                                printf("error at  line:%d\n",lineno);
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
                                                        printf("error at  line:%d\n",lineno);
                                                        exit(1);                                                                            
                                                        }
                                                        temp=typ_head;curr=temp1->paramlist;
                                                        while(curr!=NULL)
                                                        {   
                                                            if(temp==NULL)
                                                            {
                                                                printf("error,full arguments are not passed in fucntion %s\n",(yyvsp[-3].node)->varname);
                                                                printf("error at  line:%d\n",lineno);
                                                                exit(1);
                                                            }
                                                            if(curr->type!=temp->type) 
                                                            {
                                                            printf("argument type error in '%s'\n",(yyvsp[-3].node)->varname);
                                                            printf("error at  line:%d\n",lineno);
                                                            exit(1);
                                                            }
                                                            curr=curr->next;
                                                            temp=temp->next;
                                                        }
                                                        
                            typ_head=NULL;
                            (yyvsp[-3].node)->type=(yyvsp[-3].node)->Gentry->type;
                            (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,(yyvsp[-3].node)->varname,tFunction,(yyvsp[-1].node),NULL,NULL);
                        }
#line 2445 "y.tab.c"
    break;

  case 98: /* expr: FIELD  */
#line 621 "tree.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 2451 "y.tab.c"
    break;

  case 99: /* FIELD: ID '.' ID  */
#line 624 "tree.y"
                      {
                    //both are in symbol.c
                    typeAssgn((yyvsp[-2].node));
                    fieldTypeAssgn((yyvsp[0].node),(yyvsp[-2].node)->type->fields);
                    (yyval.node)=createTree(-1,(yyvsp[0].node)->type,NULL,tField,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2461 "y.tab.c"
    break;

  case 100: /* FIELD: FIELD '.' ID  */
#line 629 "tree.y"
                          {
            (yyval.node)=insertField((yyvsp[-2].node),(yyvsp[0].node));  //in type.c file
            }
#line 2469 "y.tab.c"
    break;

  case 101: /* ArgList: ArgList COMMA expr  */
#line 635 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyvsp[0].node)->third=(yyvsp[-2].node);
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2482 "y.tab.c"
    break;

  case 102: /* ArgList: expr  */
#line 644 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2494 "y.tab.c"
    break;

  case 103: /* VAR: ID  */
#line 655 "tree.y"
                        {
                        if(LLookup((yyvsp[0].node)->varname)==NULL && Lookup((yyvsp[0].node)->varname)==NULL)
                        {
                            printf("Variable '%s' not declared!", (yyvsp[0].node)->varname);
                            printf("error at  line:%d\n",lineno);
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
                        if((yyvsp[0].node)->Gentry->paramlist!=NULL)
                        {
                            printf("assg to arr without index\n");
                            printf("error at  line:%d\n",lineno);
                            exit(1);
                        }
                        (yyvsp[0].node)->type=(yyvsp[0].node)->Gentry->type;
                        }
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2524 "y.tab.c"
    break;

  case 104: /* VAR: ID '[' expr ']'  */
#line 681 "tree.y"
                        {
                            if((yyvsp[-1].node)->type!=TLookup("int"))
                            {
                                printf("array index is not int");
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup((yyvsp[-3].node)->varname)==NULL && Lookup((yyvsp[-3].node)->varname)==NULL)
                            {
                                printf("array not %s declared",(yyvsp[-3].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup((yyvsp[-3].node)->varname)!=NULL)
                            {
                               (yyvsp[-3].node)->Gentry=NULL;
                                (yyvsp[-3].node)->type=TLookup(typename);
                            }
                            else {
                            (yyvsp[-3].node)->Gentry=Lookup((yyvsp[-3].node)->varname);
                            (yyvsp[-3].node)->type=(yyvsp[-3].node)->Gentry->type;
                            }
                            (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tARRAY,(yyvsp[-3].node),(yyvsp[-1].node),NULL);
                        }
#line 2553 "y.tab.c"
    break;


#line 2557 "y.tab.c"

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

#line 706 "tree.y"


/* by printing lineno  we can get in which line the error has occured */

void yyerror(char const *s)
{
    printf("yyerror %s",s);
    printf("line number=%d\n",lineno);
}



int main() {
  targetFile=fopen("targetFile.xsm","w");
  if(targetFile==NULL)
  {
    printf("file error\n");
  }
  yyin=fopen("input_l","r");
  TypeTableCreate();
  yyparse();
  if(targetFile!=NULL)
  fclose(targetFile);
  return 0;
}
