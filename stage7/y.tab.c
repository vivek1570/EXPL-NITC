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
    Nullptr = 301,                 /* Nullptr  */
    CLASS = 302,                   /* CLASS  */
    ENDCLASS = 303,                /* ENDCLASS  */
    NEW = 304,                     /* NEW  */
    DELETE = 305,                  /* DELETE  */
    SELF = 306                     /* SELF  */
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
#define CLASS 302
#define ENDCLASS 303
#define NEW 304
#define DELETE 305
#define SELF 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "tree.y"

        struct tnode *node;
    

#line 250 "y.tab.c"

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
  YYSYMBOL_CLASS = 47,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 48,                  /* ENDCLASS  */
  YYSYMBOL_NEW = 49,                       /* NEW  */
  YYSYMBOL_DELETE = 50,                    /* DELETE  */
  YYSYMBOL_SELF = 51,                      /* SELF  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_Program = 60,                   /* Program  */
  YYSYMBOL_ClassDefBlock = 61,             /* ClassDefBlock  */
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_ClassDefList = 63,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 64,                  /* ClassDef  */
  YYSYMBOL_Cname = 65,                     /* Cname  */
  YYSYMBOL_Fieldlists = 66,                /* Fieldlists  */
  YYSYMBOL_Fld = 67,                       /* Fld  */
  YYSYMBOL_MethodDecl = 68,                /* MethodDecl  */
  YYSYMBOL_MDecl = 69,                     /* MDecl  */
  YYSYMBOL_MethodDefns = 70,               /* MethodDefns  */
  YYSYMBOL_TypeDefBlock = 71,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 72,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 73,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 74,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 75,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 76,                  /* TypeName  */
  YYSYMBOL_GdeclBlock = 77,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 78,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 79,                     /* Gdecl  */
  YYSYMBOL_GidList = 80,                   /* GidList  */
  YYSYMBOL_Gid = 81,                       /* Gid  */
  YYSYMBOL_FdefBlock = 82,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 83,                      /* Fdef  */
  YYSYMBOL_ParamList = 84,                 /* ParamList  */
  YYSYMBOL_Param = 85,                     /* Param  */
  YYSYMBOL_PType = 86,                     /* PType  */
  YYSYMBOL_MainBlock = 87,                 /* MainBlock  */
  YYSYMBOL_FTypeName = 88,                 /* FTypeName  */
  YYSYMBOL_LdeclBlock = 89,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 90,                  /* LDecList  */
  YYSYMBOL_LDecl = 91,                     /* LDecl  */
  YYSYMBOL_IdList = 92,                    /* IdList  */
  YYSYMBOL_Body = 93,                      /* Body  */
  YYSYMBOL_Slist = 94,                     /* Slist  */
  YYSYMBOL_Stmt = 95,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 96,                /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 97,                 /* BreakStmt  */
  YYSYMBOL_ContStmt = 98,                  /* ContStmt  */
  YYSYMBOL_InputStmt = 99,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 100,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 101,                  /* AsgStmt  */
  YYSYMBOL_Ifstmt = 102,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 103,                /* Whilestmt  */
  YYSYMBOL_AllocStmt = 104,                /* AllocStmt  */
  YYSYMBOL_FreeStmt = 105,                 /* FreeStmt  */
  YYSYMBOL_InitialStmt = 106,              /* InitialStmt  */
  YYSYMBOL_NewStmt = 107,                  /* NewStmt  */
  YYSYMBOL_DeleteStmt = 108,               /* DeleteStmt  */
  YYSYMBOL_expr = 109,                     /* expr  */
  YYSYMBOL_FieldFunction = 110,            /* FieldFunction  */
  YYSYMBOL_FIELD = 111,                    /* FIELD  */
  YYSYMBOL_ArgList = 112,                  /* ArgList  */
  YYSYMBOL_VAR = 113                       /* VAR  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   579

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      54,    55,     2,     2,     2,     2,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    60,    65,    72,    72,    78,    82,    84,
      87,    94,    98,    99,   101,   110,   118,   128,   129,   131,
     137,   144,   152,   153,   160,   164,   167,   168,   171,   213,
     217,   222,   242,   246,   250,   260,   268,   277,   278,   281,
     283,   284,   287,   305,   319,   340,   344,   350,   450,   450,
     451,   453,   478,   482,   486,   493,   536,   539,   545,   551,
     561,   562,   562,   564,   565,   567,   569,   591,   615,   619,
     621,   625,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   646,   647,   649,   651,   653,
     655,   657,   658,   660,   661,   663,   665,   667,   669,   673,
     688,   700,   701,   702,   703,   704,   705,   706,   707,   708,
     709,   710,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   787,   790,   800,   810,   817,   825,   829,   838,
     847,   854,   858,   884
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
  "ENDTYPE", "ALLOC", "FREE", "INITIALIZE", "Nullptr", "CLASS", "ENDCLASS",
  "NEW", "DELETE", "SELF", "'{'", "'}'", "'('", "')'", "'['", "']'", "'.'",
  "$accept", "Program", "ClassDefBlock", "$@1", "ClassDefList", "ClassDef",
  "Cname", "Fieldlists", "Fld", "MethodDecl", "MDecl", "MethodDefns",
  "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl",
  "TypeName", "GdeclBlock", "GdeclList", "Gdecl", "GidList", "Gid",
  "FdefBlock", "Fdef", "ParamList", "Param", "PType", "MainBlock",
  "FTypeName", "LdeclBlock", "LDecList", "LDecl", "IdList", "Body",
  "Slist", "Stmt", "ReturnStmt", "BreakStmt", "ContStmt", "InputStmt",
  "OutputStmt", "AsgStmt", "Ifstmt", "Whilestmt", "AllocStmt", "FreeStmt",
  "InitialStmt", "NewStmt", "DeleteStmt", "expr", "FieldFunction", "FIELD",
  "ArgList", "VAR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-113)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,     3,    25,    12,   -19,    -3,  -113,  -113,    18,  -113,
       8,  -113,   139,  -113,  -113,    27,    72,   197,   191,  -113,
    -113,  -113,    75,  -113,    85,    46,  -113,    30,  -113,    58,
    -113,    94,   283,  -113,  -113,    18,  -113,   191,  -113,  -113,
      99,  -113,  -113,   106,    79,  -113,  -113,   111,    91,    17,
    -113,  -113,  -113,  -113,  -113,   107,  -113,   133,  -113,   216,
     160,  -113,    94,   216,   417,   141,   307,  -113,  -113,  -113,
     -21,  -113,   177,   136,  -113,   -18,  -113,   186,   530,  -113,
     146,   148,   194,   198,   202,  -113,   549,  -113,   216,  -113,
    -113,  -113,   165,  -113,    93,  -113,  -113,  -113,   178,   180,
     121,   183,    26,  -113,  -113,   187,   230,   244,   203,   208,
     205,    28,   179,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,   481,  -113,   210,
    -113,  -113,     4,     6,    22,   257,   330,   265,   269,  -113,
    -113,   133,  -113,   270,    28,    28,    28,    28,   276,    28,
    -113,   504,    28,  -113,  -113,    28,    28,   279,   280,  -113,
    -113,    28,    28,    28,    28,   127,    28,    28,    28,    28,
      28,    28,    90,   219,    28,   282,  -113,   216,  -113,   216,
    -113,   216,   238,  -113,   113,  -113,   242,   251,   141,  -113,
     303,   326,   550,    -1,     0,   260,   349,  -113,   372,   395,
     418,   261,  -113,   452,   452,   249,   249,   262,   263,   246,
     264,   527,  -113,  -113,   254,   254,   254,   254,  -113,   254,
    -113,   254,  -113,   274,    52,    54,    57,  -113,  -113,   281,
     328,   329,    28,  -113,  -113,    28,   327,   302,   341,   347,
      28,   306,   308,  -113,   350,  -113,    28,   354,   355,   364,
    -113,  -113,  -113,   550,    59,   440,   440,  -113,  -113,    95,
     370,   373,   331,    98,  -113,  -113,  -113,  -113,    83,   199,
    -113,  -113,  -113,   374,  -113,   440,   375,   377,  -113,   239,
    -113,  -113,   378,  -113
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      25,     0,     0,     7,     0,     0,    27,     1,     0,     5,
       0,     4,     0,    24,    26,     0,     0,     0,    56,    34,
      32,    33,     0,    30,     0,     0,    11,     0,     9,     0,
      36,     0,     0,    38,    59,    57,    58,    56,    46,     3,
       0,    28,    29,     0,     0,     6,     8,     0,    42,     0,
      41,    35,    37,    45,     2,     0,    31,    62,    13,    50,
       0,    39,     0,    50,     0,     0,     0,    54,    52,    53,
       0,    49,     0,     0,    40,     0,    61,     0,     0,    64,
       0,     0,     0,     0,     0,    12,     0,    18,     0,    44,
      51,    43,     0,    67,     0,    60,    63,   116,     0,     0,
     132,     0,     0,   117,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    79,    77,    78,    72,    73,    74,
      75,    76,    80,    81,    82,    83,    84,     0,   120,   122,
     118,    55,     0,     0,     0,     0,     0,     0,     0,    17,
      48,    62,    65,     0,     0,     0,   131,     0,     0,     0,
      86,     0,     0,    87,    88,     0,     0,     0,     0,    68,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    50,    15,    50,
      16,    50,     0,    57,     0,    23,     0,     0,     0,    66,
       0,     0,   130,     0,     0,   126,     0,    85,     0,     0,
       0,   128,   119,   101,   102,   103,   104,     0,     0,     0,
       0,     0,   112,   113,   105,   106,   107,   108,   114,   109,
     115,   110,   111,   127,     0,     0,     0,    10,    22,     0,
       0,     0,     0,   121,   133,   131,     0,     0,     0,     0,
     131,     0,     0,    92,     0,    91,   131,     0,     0,     0,
      47,    90,    89,   129,     0,     0,     0,    97,   100,     0,
       0,     0,     0,     0,    19,    20,    21,   124,     0,     0,
     123,    96,    98,     0,   125,     0,     0,     0,    99,     0,
      94,    95,     0,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,  -113,  -113,   376,  -113,  -113,  -113,  -113,
     296,  -113,  -113,  -113,   392,  -113,   383,    11,  -113,  -113,
     379,  -113,   344,  -113,   -36,   -60,   319,  -113,    76,  -113,
     267,  -113,   332,  -113,   221,   -91,  -112,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -100,  -113,  -113,   -41,  -113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    10,    16,    27,    28,    29,    66,    85,    86,
      87,   184,     3,     5,     6,    22,    23,    24,    18,    32,
      33,    49,    50,    37,    38,    70,    71,    72,    11,    40,
      65,    78,    79,    94,    81,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   193,   130
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     160,    53,   151,    75,   161,   162,   163,   164,     1,     4,
      88,   158,   -56,    88,   176,     4,   178,   166,   167,   168,
     169,   170,   171,   172,   173,     7,   174,    61,    31,    97,
     232,    97,   180,    12,    89,    17,   150,    92,   100,    13,
     100,     8,    26,    31,   190,   191,   192,   194,    62,   196,
      15,   103,   198,   103,   233,   199,   200,   234,   177,     9,
     179,   203,   204,   205,   206,   211,   212,   213,   214,   215,
     216,   217,   219,   221,   222,    77,   181,   110,    45,   110,
     111,    25,   111,    88,    26,    88,    97,    19,    88,    77,
     232,    98,    99,    97,    39,   100,   101,    43,   275,   102,
     185,    44,   100,   142,    20,    21,    48,   247,   103,   248,
      47,    55,   249,    54,   267,   103,    56,   224,   276,   225,
     105,   226,   106,   107,   143,    34,   232,   108,    41,   232,
      97,    57,   253,   109,   110,   192,   218,   111,    58,   100,
     192,   110,   183,    36,   111,    59,   192,    60,   228,    97,
     270,    19,   103,   274,    98,    99,   160,   160,   100,   101,
      64,    63,   102,    73,   268,   269,   227,   160,    20,    21,
     207,   103,   208,   209,    80,   146,   210,   147,   110,   148,
     104,   111,    97,   105,   279,   106,   107,    98,    99,    90,
     108,   100,   101,    91,   254,   102,   109,   110,    93,   259,
     111,   131,    97,    34,   103,   263,   132,    98,    99,    19,
     133,   100,   101,   159,   134,   102,   105,   141,   106,   107,
      35,    36,    97,   108,   103,    30,    20,    21,    67,   109,
     110,   100,   144,   111,   145,   277,   105,   149,   106,   107,
     153,   152,    97,   108,   103,    68,    69,    98,    99,   109,
     110,   100,   101,   111,   154,   102,   243,   155,   161,   162,
     163,   164,   156,   157,   103,   220,   166,   167,   175,   182,
     110,   166,   167,   111,   282,   174,   105,   186,   106,   107,
     174,   187,   189,   108,   161,   162,   163,   164,   195,   109,
     110,   201,   177,   111,   223,    19,   179,   166,   167,   168,
     169,   170,   171,   172,   173,   181,   174,   161,   162,   163,
     164,    51,    20,    21,   235,   240,   241,   242,   244,    82,
     166,   167,   168,   169,   170,   171,   172,   173,   246,   174,
     161,   162,   163,   164,   250,   202,    83,    84,   251,   252,
     256,   255,    34,   166,   167,   168,   169,   170,   171,   172,
     173,   257,   174,   161,   162,   163,   164,   258,   230,   183,
      36,   260,   262,   261,   264,   265,   166,   167,   168,   169,
     170,   171,   172,   173,   266,   174,   161,   162,   163,   164,
     271,   231,   139,   272,   278,   280,   273,   281,   283,   166,
     167,   168,   169,   170,   171,   172,   173,    14,   174,   161,
     162,   163,   164,    46,   236,    42,    74,   140,   188,   229,
      96,    52,   166,   167,   168,   169,   170,   171,   172,   173,
       0,   174,   161,   162,   163,   164,     0,   237,     0,    19,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,    97,   174,    76,    20,    21,    98,    99,
     238,     0,   100,   101,     0,     0,   102,     0,   163,   164,
       0,     0,     0,     0,     0,   103,     0,     0,     0,   166,
     167,     0,     0,   239,     0,     0,     0,   105,   174,   106,
     107,     0,     0,     0,   108,   161,   162,   163,   164,     0,
     109,   110,   165,     0,   111,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,     0,   174,   161,   162,
     163,   164,     0,     0,   197,     0,     0,     0,     0,     0,
       0,   166,   167,   168,   169,   170,   171,   172,   173,     0,
     174,   161,   162,   163,   164,     0,     0,   245,     0,     0,
       0,     0,    19,     0,   166,   167,   168,   169,   170,   171,
     172,   173,     0,   174,   161,   162,   163,   164,    95,    20,
      21,   135,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,   171,   172,   173,     0,   174,   136,   137,   138
};

static const yytype_int16 yycheck[] =
{
     112,    37,   102,    63,     4,     5,     6,     7,    41,    12,
      31,   111,     0,    31,    10,    12,    10,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    26,    10,    17,     3,
      31,     3,    10,    52,    55,    27,    10,    55,    12,    42,
      12,    29,    12,    32,   144,   145,   146,   147,    31,   149,
      32,    25,   152,    25,    55,   155,   156,    57,    54,    47,
      54,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,    64,    54,    51,    48,    51,
      54,    54,    54,    31,    12,    31,     3,    12,    31,    78,
      31,     8,     9,     3,    18,    12,    13,    12,    15,    16,
     136,    55,    12,    10,    29,    30,    12,    55,    25,    55,
      52,    12,    55,    37,    55,    25,    10,   177,    35,   179,
      37,   181,    39,    40,    31,    12,    31,    44,    53,    31,
       3,    52,   232,    50,    51,   235,    46,    54,    27,    12,
     240,    51,    29,    30,    54,    54,   246,    56,   184,     3,
      55,    12,    25,    55,     8,     9,   268,   269,    12,    13,
      27,    54,    16,     3,   255,   256,    53,   279,    29,    30,
      43,    25,    45,    46,    33,    54,    49,    56,    51,    58,
      34,    54,     3,    37,   275,    39,    40,     8,     9,    12,
      44,    12,    13,    57,   235,    16,    50,    51,    12,   240,
      54,    53,     3,    12,    25,   246,    12,     8,     9,    12,
      12,    12,    13,    34,    12,    16,    37,    52,    39,    40,
      29,    30,     3,    44,    25,    28,    29,    30,    12,    50,
      51,    12,    54,    54,    54,    36,    37,    54,    39,    40,
      10,    54,     3,    44,    25,    29,    30,     8,     9,    50,
      51,    12,    13,    54,    10,    16,    10,    54,     4,     5,
       6,     7,    54,    58,    25,    46,    17,    18,    58,    12,
      51,    17,    18,    54,    35,    26,    37,    12,    39,    40,
      26,    12,    12,    44,     4,     5,     6,     7,    12,    50,
      51,    12,    54,    54,    12,    12,    54,    17,    18,    19,
      20,    21,    22,    23,    24,    54,    26,     4,     5,     6,
       7,    28,    29,    30,    54,    54,    54,    54,    54,    12,
      17,    18,    19,    20,    21,    22,    23,    24,    54,    26,
       4,     5,     6,     7,    53,    55,    29,    30,    10,    10,
      38,    14,    12,    17,    18,    19,    20,    21,    22,    23,
      24,    10,    26,     4,     5,     6,     7,    10,    55,    29,
      30,    55,    12,    55,    10,    10,    17,    18,    19,    20,
      21,    22,    23,    24,    10,    26,     4,     5,     6,     7,
      10,    55,    86,    10,    10,    10,    55,    10,    10,    17,
      18,    19,    20,    21,    22,    23,    24,     5,    26,     4,
       5,     6,     7,    27,    55,    22,    62,    88,   141,   188,
      78,    32,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,     4,     5,     6,     7,    -1,    55,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,     3,    26,    28,    29,    30,     8,     9,
      55,    -1,    12,    13,    -1,    -1,    16,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    17,
      18,    -1,    -1,    55,    -1,    -1,    -1,    37,    26,    39,
      40,    -1,    -1,    -1,    44,     4,     5,     6,     7,    -1,
      50,    51,    11,    -1,    54,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    12,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,     4,     5,     6,     7,    28,    29,
      30,    12,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    60,    71,    12,    72,    73,     0,    29,    47,
      61,    87,    52,    42,    73,    32,    62,    27,    77,    12,
      29,    30,    74,    75,    76,    54,    12,    63,    64,    65,
      28,    76,    78,    79,    12,    29,    30,    82,    83,    87,
      88,    53,    75,    12,    55,    48,    64,    52,    12,    80,
      81,    28,    79,    83,    87,    12,    10,    52,    27,    54,
      56,    10,    31,    54,    27,    89,    66,    12,    29,    30,
      84,    85,    86,     3,    81,    84,    28,    76,    90,    91,
      33,    93,    12,    29,    30,    67,    68,    69,    31,    55,
      12,    57,    55,    12,    92,    28,    91,     3,     8,     9,
      12,    13,    16,    25,    34,    37,    39,    40,    44,    50,
      51,    54,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     113,    53,    12,    12,    12,    12,    28,    29,    30,    69,
      85,    52,    10,    31,    54,    54,    54,    56,    58,    54,
      10,   109,    54,    10,    10,    54,    54,    58,   109,    34,
      95,     4,     5,     6,     7,    11,    17,    18,    19,    20,
      21,    22,    23,    24,    26,    58,    10,    54,    10,    54,
      10,    54,    12,    29,    70,    83,    12,    12,    89,    12,
     109,   109,   109,   112,   109,    12,   109,    10,   109,   109,
     109,    12,    55,   109,   109,   109,   109,    43,    45,    46,
      49,   109,   109,   109,   109,   109,   109,   109,    46,   109,
      46,   109,   109,    12,    84,    84,    84,    53,    83,    93,
      55,    55,    31,    55,    57,    54,    55,    55,    55,    55,
      54,    54,    54,    10,    54,    10,    54,    55,    55,    55,
      53,    10,    10,   109,   112,    14,    38,    10,    10,   112,
      55,    55,    12,   112,    10,    10,    10,    55,    94,    94,
      55,    10,    10,    55,    55,    15,    35,    36,    10,    94,
      10,    10,    35,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    60,    62,    61,    61,    63,    63,
      64,    65,    66,    66,    67,    67,    67,    68,    68,    69,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    75,    76,    76,    76,    77,    77,    78,    78,    79,
      80,    80,    81,    81,    81,    82,    82,    83,    84,    84,
      84,    85,    86,    86,    86,    87,    87,    88,    88,    88,
      89,    89,    89,    90,    90,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    98,    99,
     100,   101,   101,   102,   102,   103,   104,   105,   106,   107,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   113,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     2,     0,     4,     0,     2,     1,
       8,     1,     2,     0,     3,     3,     3,     2,     1,     6,
       6,     6,     2,     1,     3,     0,     2,     1,     4,     2,
       1,     3,     1,     1,     1,     3,     2,     2,     1,     3,
       3,     1,     1,     4,     4,     2,     1,     9,     3,     1,
       0,     2,     1,     1,     1,     8,     0,     1,     1,     1,
       3,     2,     0,     2,     1,     3,     3,     1,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     2,     5,
       5,     4,     4,    10,     8,     8,     6,     5,     6,     7,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       1,     4,     1,     6,     6,     6,     3,     3,     3,     3,
       1,     0,     1,     4
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
  case 2: /* Program: TypeDefBlock ClassDefBlock GdeclBlock FdefBlock MainBlock  */
#line 56 "tree.y"
                        {
                            printf("Done!!\n");
                            if(_global_pt)printSTable();
                        }
#line 1598 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock ClassDefBlock GdeclBlock MainBlock  */
#line 61 "tree.y"
                        {
                            printf("Done!!\n");
                             if(_global_pt)printSTable();
                        }
#line 1607 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock MainBlock  */
#line 66 "tree.y"
                        {  
                            printf("Done!!\n");
                        }
#line 1615 "y.tab.c"
    break;

  case 5: /* $@1: %empty  */
#line 72 "tree.y"
                       {initial(targetFile);}
#line 1621 "y.tab.c"
    break;

  case 6: /* ClassDefBlock: CLASS $@1 ClassDefList ENDCLASS  */
#line 73 "tree.y"
                        {
                            if(_class_pt)printClasstable();
                            Cptr=NULL;
                            flabel=funclass;
                        }
#line 1631 "y.tab.c"
    break;

  case 7: /* ClassDefBlock: %empty  */
#line 78 "tree.y"
                         {initial(targetFile);
                        flabel=funclass;
                        }
#line 1639 "y.tab.c"
    break;

  case 8: /* ClassDefList: ClassDefList ClassDef  */
#line 83 "tree.y"
                        {}
#line 1645 "y.tab.c"
    break;

  case 9: /* ClassDefList: ClassDef  */
#line 85 "tree.y"
                        {}
#line 1651 "y.tab.c"
    break;

  case 10: /* ClassDef: Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'  */
#line 88 "tree.y"
                        {
                            field_index=0;
                            flabel=0;
                            _in_func=0;
                        }
#line 1661 "y.tab.c"
    break;

  case 11: /* Cname: ID  */
#line 94 "tree.y"
                                {Cptr = CInstall((yyvsp[0].node)->varname,NULL);}
#line 1667 "y.tab.c"
    break;

  case 13: /* Fieldlists: %empty  */
#line 99 "tree.y"
                 {}
#line 1673 "y.tab.c"
    break;

  case 14: /* Fld: ID ID EOL  */
#line 102 "tree.y"
                        {
                            Class_Finstall(Cptr,(yyvsp[-2].node)->varname,(yyvsp[-1].node)->varname,field_index);
                            (yyvsp[-1].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                            (yyvsp[-1].node)->Gentry->Ctype=CLookup((yyvsp[-2].node)->varname);
                            (yyvsp[-1].node)->Gentry->type=TLookup((yyvsp[-2].node)->varname);
                            struct tnode *temp=(yyvsp[-1].node);
                            field_index++;
                        }
#line 1686 "y.tab.c"
    break;

  case 15: /* Fld: INT ID EOL  */
#line 111 "tree.y"
                        {
                            Class_Finstall(Cptr,"int",(yyvsp[-1].node)->varname,field_index);
                            (yyvsp[-1].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                            (yyvsp[-1].node)->Gentry->Ctype=CLookup((yyvsp[-2].node)->varname);
                            (yyvsp[-1].node)->Gentry->type=TLookup((yyvsp[-2].node)->varname);
                            field_index++;
                        }
#line 1698 "y.tab.c"
    break;

  case 16: /* Fld: STR ID EOL  */
#line 119 "tree.y"
                        {
                            Class_Finstall(Cptr,"str",(yyvsp[-1].node)->varname,field_index);
                            (yyvsp[-1].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                            (yyvsp[-1].node)->Gentry->Ctype=CLookup((yyvsp[-2].node)->varname);
                            (yyvsp[-1].node)->Gentry->type=TLookup((yyvsp[-2].node)->varname);
                            field_index++;
                        }
#line 1710 "y.tab.c"
    break;

  case 19: /* MDecl: ID ID '(' ParamList ')' EOL  */
#line 132 "tree.y"
                        {
                        Class_Minstall(Cptr,(yyvsp[-4].node)->varname,TLookup((yyvsp[-5].node)->varname),paramlist,flabel);
                        flabel++;
                        paramlist=NULL;
                        }
#line 1720 "y.tab.c"
    break;

  case 20: /* MDecl: INT ID '(' ParamList ')' EOL  */
#line 138 "tree.y"
                        {
                        struct Typetable *temp=TLookup("int");
                        Class_Minstall(Cptr,(yyvsp[-4].node)->varname,temp,paramlist,flabel);
                        flabel++;
                        paramlist=NULL;
                        }
#line 1731 "y.tab.c"
    break;

  case 21: /* MDecl: STR ID '(' ParamList ')' EOL  */
#line 145 "tree.y"
                        {
                        Class_Minstall(Cptr,(yyvsp[-4].node)->varname,TLookup("str"),paramlist,flabel);
                        flabel++;
                        paramlist=NULL;
                        }
#line 1741 "y.tab.c"
    break;

  case 24: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 161 "tree.y"
                        {
                            if(_type_pt)printTypeTable();
                        }
#line 1749 "y.tab.c"
    break;

  case 25: /* TypeDefBlock: %empty  */
#line 164 "tree.y"
                        {}
#line 1755 "y.tab.c"
    break;

  case 26: /* TypeDefList: TypeDefList TypeDef  */
#line 167 "tree.y"
                                       {}
#line 1761 "y.tab.c"
    break;

  case 27: /* TypeDefList: TypeDef  */
#line 168 "tree.y"
                         {}
#line 1767 "y.tab.c"
    break;

  case 28: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 172 "tree.y"
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
#line 1796 "y.tab.c"
    break;

  case 29: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 214 "tree.y"
                        {
                            
                        }
#line 1804 "y.tab.c"
    break;

  case 30: /* FieldDeclList: FieldDecl  */
#line 218 "tree.y"
                        {
                        }
#line 1811 "y.tab.c"
    break;

  case 31: /* FieldDecl: TypeName ID EOL  */
#line 223 "tree.y"
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
#line 1834 "y.tab.c"
    break;

  case 32: /* TypeName: INT  */
#line 243 "tree.y"
                        {
                        typename="int";
                        }
#line 1842 "y.tab.c"
    break;

  case 33: /* TypeName: STR  */
#line 247 "tree.y"
                        {
                        typename="str";
                        }
#line 1850 "y.tab.c"
    break;

  case 34: /* TypeName: ID  */
#line 251 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);typename=(yyvsp[0].node)->varname;
                        }
#line 1858 "y.tab.c"
    break;

  case 35: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 261 "tree.y"
                        {
                            /* initial(targetFile); */
                            reset_local();
                            argnum=-2;
                            flabel=0;
                            
                        }
#line 1870 "y.tab.c"
    break;

  case 36: /* GdeclBlock: DECL ENDDECL  */
#line 269 "tree.y"
                        {
                            /* initial(targetFile); */
                            reset_local();
                            argnum=-2;
                            flabel=0;
                        }
#line 1881 "y.tab.c"
    break;

  case 37: /* GdeclList: GdeclList Gdecl  */
#line 277 "tree.y"
                             {}
#line 1887 "y.tab.c"
    break;

  case 38: /* GdeclList: Gdecl  */
#line 278 "tree.y"
                   {}
#line 1893 "y.tab.c"
    break;

  case 40: /* GidList: GidList COMMA Gid  */
#line 283 "tree.y"
                               {}
#line 1899 "y.tab.c"
    break;

  case 41: /* GidList: Gid  */
#line 284 "tree.y"
                 {}
#line 1905 "y.tab.c"
    break;

  case 42: /* Gid: ID  */
#line 288 "tree.y"
                        {
                            if(Lookup((yyvsp[0].node)->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                struct Gsymbol * temp= Install((yyvsp[0].node)->varname,type_ptr,1,NULL,-1);
                                if(CLookup(typename))
                                {
                                    (yyvsp[0].node)->Gentry=temp;
                                    (yyvsp[0].node)->Gentry->Ctype=CLookup(typename);
                                }
                            }
                            else{
                                printf("redclare error of %s\n",(yyvsp[0].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                        }
#line 1927 "y.tab.c"
    break;

  case 43: /* Gid: ID '[' NUM ']'  */
#line 306 "tree.y"
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
#line 1945 "y.tab.c"
    break;

  case 44: /* Gid: ID '(' ParamList ')'  */
#line 320 "tree.y"
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
#line 1966 "y.tab.c"
    break;

  case 45: /* FdefBlock: FdefBlock Fdef  */
#line 341 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tFunconnect,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 1974 "y.tab.c"
    break;

  case 46: /* FdefBlock: Fdef  */
#line 345 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tFunconnect,(yyvsp[0].node),NULL,NULL);
                        }
#line 1982 "y.tab.c"
    break;

  case 47: /* Fdef: FTypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 351 "tree.y"
                        {
                            /* type checking in function */
                           if(Cptr==NULL)
                           {
                             if(Lookup((yyvsp[-7].node)->varname)==NULL)
                            {
                                printf("function '%s' is not defined \n",(yyvsp[-7].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if( Lookup((yyvsp[-7].node)->varname)->type!=TLookup(ftypename))
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
                           }
                           else{
                            //for oexpl functions
                            struct Memberfunclist*funa= Class_Mlookup(Cptr,(yyvsp[-7].node)->varname);
                            if(funa==NULL)
                            {
                                printf("fun '%s' not defined in class '%s' ",(yyvsp[-7].node)->varname,Cptr->Name);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(funa->Type!=TLookup(ftypename))
                            {
                                printf("Type mismatch fun '%s' class '%s'\n",(yyvsp[-7].node)->varname,Cptr->Name);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            int c1=checkparam_class(funa,paramlist);
                            if(c1==-1)
                            {
                                paramlist=NULL;
                                printf("error has occured in paramlist class '%s' fun '%s'\n",Cptr->Name,(yyvsp[-7].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }

                           }
                                                    //code generation part
                                                    if(_codegen_pt)
                                                    {                                                   
                                                    if(Cptr==NULL)
                                                    {
                                                    struct Gsymbol *temp=Lookup((yyvsp[-7].node)->varname);
                                                    fprintf(targetFile,"F%d:\n",temp->flabel);
                                                    }
                                                    else{
                                                    struct Memberfunclist*funb= Class_Mlookup(Cptr,(yyvsp[-7].node)->varname);
                                                    fprintf(targetFile,"F%d:\n",funb->Flabel);
                                                    }
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
                                                    fprintf(targetFile,"RET\n");
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
#line 2084 "y.tab.c"
    break;

  case 48: /* ParamList: ParamList COMMA Param  */
#line 450 "tree.y"
                                      {}
#line 2090 "y.tab.c"
    break;

  case 49: /* ParamList: Param  */
#line 450 "tree.y"
                                                {}
#line 2096 "y.tab.c"
    break;

  case 50: /* ParamList: %empty  */
#line 451 "tree.y"
                   {}
#line 2102 "y.tab.c"
    break;

  case 51: /* Param: PType ID  */
#line 454 "tree.y"
                        {
                            
                                struct paramstruct *temp=(struct paramstruct*)malloc(sizeof(struct paramstruct));
                                temp->name=strdup((yyvsp[0].node)->varname);
                                struct Typetable *type_ptr=TLookup(ptypename);
                                temp->type=type_ptr;
                                temp->next=paramlist;
                                paramlist=temp;
                                if(_in_func)
                                {
                                    if( LLookup(temp->name)==NULL)
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
#line 2130 "y.tab.c"
    break;

  case 52: /* PType: INT  */
#line 479 "tree.y"
                        {
                        ptypename="int";
                        }
#line 2138 "y.tab.c"
    break;

  case 53: /* PType: STR  */
#line 483 "tree.y"
                        {
                        ptypename="str";
                        }
#line 2146 "y.tab.c"
    break;

  case 54: /* PType: ID  */
#line 487 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);ptypename=(yyvsp[0].node)->varname;
                        }
#line 2154 "y.tab.c"
    break;

  case 55: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 494 "tree.y"
                        {
                            //codegeneration part
                            if(_codegen_pt)
                            {
                            fprintf(targetFile,"MAIN:\n");
                            fprintf(targetFile, "MOV SP,%d\n", bind-1);
                            fprintf(targetFile,"MOV BP,%d\n",bind-1);
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
                            endcode(targetFile);
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
#line 2202 "y.tab.c"
    break;

  case 56: /* MainBlock: %empty  */
#line 536 "tree.y"
                          {}
#line 2208 "y.tab.c"
    break;

  case 57: /* FTypeName: INT  */
#line 540 "tree.y"
                        {
                        ftypename="int";
                        _in_func=1;
                        if(Cptr!=NULL) argnum--;
                        }
#line 2218 "y.tab.c"
    break;

  case 58: /* FTypeName: STR  */
#line 546 "tree.y"
                        {
                        ftypename="str";
                        _in_func=1;
                        if(Cptr!=NULL) argnum--;
                        }
#line 2228 "y.tab.c"
    break;

  case 59: /* FTypeName: ID  */
#line 552 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);ftypename=(yyvsp[0].node)->varname;
                        _in_func=1;
                        if(Cptr!=NULL) argnum--;
                        }
#line 2238 "y.tab.c"
    break;

  case 60: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 561 "tree.y"
                                      {}
#line 2244 "y.tab.c"
    break;

  case 61: /* LdeclBlock: DECL ENDDECL  */
#line 562 "tree.y"
                              {}
#line 2250 "y.tab.c"
    break;

  case 62: /* LdeclBlock: %empty  */
#line 562 "tree.y"
                                 {}
#line 2256 "y.tab.c"
    break;

  case 63: /* LDecList: LDecList LDecl  */
#line 564 "tree.y"
                            {}
#line 2262 "y.tab.c"
    break;

  case 64: /* LDecList: LDecl  */
#line 565 "tree.y"
                       {}
#line 2268 "y.tab.c"
    break;

  case 65: /* LDecl: TypeName IdList EOL  */
#line 567 "tree.y"
                                {}
#line 2274 "y.tab.c"
    break;

  case 66: /* IdList: IdList COMMA ID  */
#line 570 "tree.y"
                        {
                            if(TLookup(typename)==NULL && CLookup(typename)==NULL)
                            {
                                printf("type or class %s is not found\n",typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup((yyvsp[0].node)->varname)==NULL){
                                lnum++;
                                struct Typetable *type=TLookup(typename);
                                (yyvsp[0].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                                (yyvsp[0].node)->Gentry->Ctype=CLookup(typename);
                                LInstall((yyvsp[0].node)->varname,type,lnum);
                                }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",(yyvsp[0].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                                }
                        }
#line 2300 "y.tab.c"
    break;

  case 67: /* IdList: ID  */
#line 592 "tree.y"
                        {
                            if(TLookup(typename)==NULL && CLookup(typename)==NULL)
                            {
                                printf("type or class %s is not found\n",typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup((yyvsp[0].node)->varname)==NULL)
                            {
                                lnum++;
                                struct Typetable *type=TLookup(typename);
                                (yyvsp[0].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                                (yyvsp[0].node)->Gentry->Ctype=CLookup(typename);
                                LInstall((yyvsp[0].node)->varname,type,lnum);
                            }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",(yyvsp[0].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                                }
                        }
#line 2327 "y.tab.c"
    break;

  case 68: /* Body: START Slist END  */
#line 616 "tree.y"
                        {
                            (yyval.node)=(yyvsp[-1].node);
                        }
#line 2335 "y.tab.c"
    break;

  case 69: /* Body: START END  */
#line 619 "tree.y"
              {}
#line 2341 "y.tab.c"
    break;

  case 70: /* Slist: Slist Stmt  */
#line 622 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tCONNECT,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 2349 "y.tab.c"
    break;

  case 71: /* Slist: Stmt  */
#line 626 "tree.y"
                        {
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2357 "y.tab.c"
    break;

  case 72: /* Stmt: InputStmt  */
#line 630 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2363 "y.tab.c"
    break;

  case 73: /* Stmt: OutputStmt  */
#line 631 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2369 "y.tab.c"
    break;

  case 74: /* Stmt: AsgStmt  */
#line 632 "tree.y"
                  { (yyval.node)=(yyvsp[0].node);}
#line 2375 "y.tab.c"
    break;

  case 75: /* Stmt: Ifstmt  */
#line 633 "tree.y"
                 {(yyval.node)=(yyvsp[0].node);}
#line 2381 "y.tab.c"
    break;

  case 76: /* Stmt: Whilestmt  */
#line 634 "tree.y"
                    { (yyval.node)=(yyvsp[0].node);}
#line 2387 "y.tab.c"
    break;

  case 77: /* Stmt: BreakStmt  */
#line 635 "tree.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 2393 "y.tab.c"
    break;

  case 78: /* Stmt: ContStmt  */
#line 636 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2399 "y.tab.c"
    break;

  case 79: /* Stmt: ReturnStmt  */
#line 637 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2405 "y.tab.c"
    break;

  case 80: /* Stmt: AllocStmt  */
#line 638 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2411 "y.tab.c"
    break;

  case 81: /* Stmt: FreeStmt  */
#line 639 "tree.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 2417 "y.tab.c"
    break;

  case 82: /* Stmt: InitialStmt  */
#line 640 "tree.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 2423 "y.tab.c"
    break;

  case 83: /* Stmt: NewStmt  */
#line 641 "tree.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 2429 "y.tab.c"
    break;

  case 84: /* Stmt: DeleteStmt  */
#line 642 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2435 "y.tab.c"
    break;

  case 85: /* ReturnStmt: Return expr EOL  */
#line 646 "tree.y"
                               {(yyval.node)=createTree(-1,NULL,NULL,tReturn,(yyvsp[-1].node),NULL,NULL);}
#line 2441 "y.tab.c"
    break;

  case 86: /* ReturnStmt: Return EOL  */
#line 647 "tree.y"
                             {(yyval.node)=createTree(-1,NULL,NULL,tReturn,NULL,NULL,NULL);}
#line 2447 "y.tab.c"
    break;

  case 87: /* BreakStmt: BREAK EOL  */
#line 649 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tBREAK,NULL,NULL,NULL);}
#line 2453 "y.tab.c"
    break;

  case 88: /* ContStmt: CONTINUE EOL  */
#line 651 "tree.y"
                           {(yyval.node)=createTree(-1,NULL,NULL,tCONTINUE,NULL,NULL,NULL);}
#line 2459 "y.tab.c"
    break;

  case 89: /* InputStmt: READ '(' expr ')' EOL  */
#line 653 "tree.y"
                                      {(yyval.node)=createTree(-1,NULL,NULL,tREAD,(yyvsp[-2].node),NULL,NULL);}
#line 2465 "y.tab.c"
    break;

  case 90: /* OutputStmt: WRITE '(' expr ')' EOL  */
#line 655 "tree.y"
                                       {(yyval.node)=createTree(-1,NULL,NULL,tWRITE,(yyvsp[-2].node),NULL,NULL);}
#line 2471 "y.tab.c"
    break;

  case 91: /* AsgStmt: expr ASSIGN expr EOL  */
#line 657 "tree.y"
                                  { (yyval.node)=createTree(-1,NULL,NULL,tASSIGN,(yyvsp[-3].node),(yyvsp[-1].node),NULL);}
#line 2477 "y.tab.c"
    break;

  case 92: /* AsgStmt: expr ASSIGN Nullptr EOL  */
#line 658 "tree.y"
                                    {(yyval.node)=createTree(-1,NULL,NULL,tNullAs,(yyvsp[-3].node),NULL,NULL);}
#line 2483 "y.tab.c"
    break;

  case 93: /* Ifstmt: IF '(' expr ')' then Slist Else Slist ENDIF EOL  */
#line 660 "tree.y"
                                                            {(yyval.node)=createTree(-1,NULL,NULL,tIF,(yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2489 "y.tab.c"
    break;

  case 94: /* Ifstmt: IF '(' expr ')' then Slist ENDIF EOL  */
#line 661 "tree.y"
                                               {(yyval.node)=createTree(-1,NULL,NULL,tIF,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2495 "y.tab.c"
    break;

  case 95: /* Whilestmt: WHILE '(' expr ')' DO Slist endwhile EOL  */
#line 663 "tree.y"
                                                        {(yyval.node)=createTree(-1,NULL,NULL,tWHILE,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2501 "y.tab.c"
    break;

  case 96: /* AllocStmt: expr ASSIGN ALLOC '(' ')' EOL  */
#line 665 "tree.y"
                                           {(yyval.node)=createTree(-1,NULL,NULL,tALLOC,(yyvsp[-5].node),NULL,NULL);}
#line 2507 "y.tab.c"
    break;

  case 97: /* FreeStmt: FREE '(' expr ')' EOL  */
#line 667 "tree.y"
                                {(yyval.node)=createTree(-1,NULL,NULL,tFREE,(yyvsp[-2].node),NULL,NULL);}
#line 2513 "y.tab.c"
    break;

  case 98: /* InitialStmt: expr ASSIGN INITIALIZE '(' ')' EOL  */
#line 669 "tree.y"
                                                 {(yyval.node)=createTree(-1,TLookup("int"),NULL,tInitial,(yyvsp[-5].node),NULL,NULL);
                //in temp.lib it is limited to 1020
                }
#line 2521 "y.tab.c"
    break;

  case 99: /* NewStmt: expr ASSIGN NEW '(' ID ')' EOL  */
#line 674 "tree.y"
            {
                if(CLookup((yyvsp[-2].node)->varname)==NULL)
                {
                    printf("acess of undefined class\n");
                    printf("error at  line:%d\n",lineno);
                    exit(1);
                }
                (yyvsp[-6].node)->Gentry=Lookup((yyvsp[-6].node)->varname);
                if((yyvsp[-6].node)->Gentry==NULL)
                (yyvsp[-6].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                (yyvsp[-6].node)->Gentry->Ctype=CLookup((yyvsp[-2].node)->varname);
                (yyval.node)=createTree(-1,NULL,NULL,tNEW,(yyvsp[-6].node),(yyvsp[-2].node),NULL);
            }
#line 2539 "y.tab.c"
    break;

  case 100: /* DeleteStmt: DELETE '(' expr ')' EOL  */
#line 689 "tree.y"
            {
                if(CLookup((yyvsp[-2].node)->varname)==NULL)
                {
                    printf("acess of undefined class\n");
                    printf("error at  line:%d\n",lineno);
                    exit(1);
                }
                (yyval.node)=createTree(-1,NULL,NULL,tDELETE,(yyvsp[-2].node),NULL,NULL);
            }
#line 2553 "y.tab.c"
    break;

  case 101: /* expr: expr PLUS expr  */
#line 700 "tree.y"
                        {(yyval.node)=createTree(-1,NULL,"+",tADD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2559 "y.tab.c"
    break;

  case 102: /* expr: expr MINUS expr  */
#line 701 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,"-",tSUB,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2565 "y.tab.c"
    break;

  case 103: /* expr: expr MUL expr  */
#line 702 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,"*",tMUL,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2571 "y.tab.c"
    break;

  case 104: /* expr: expr DIV expr  */
#line 703 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,"/",tDIV,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2577 "y.tab.c"
    break;

  case 105: /* expr: expr LE expr  */
#line 704 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tLE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2583 "y.tab.c"
    break;

  case 106: /* expr: expr GE expr  */
#line 705 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tGE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2589 "y.tab.c"
    break;

  case 107: /* expr: expr LT expr  */
#line 706 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tLT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2595 "y.tab.c"
    break;

  case 108: /* expr: expr GT expr  */
#line 707 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tGT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2601 "y.tab.c"
    break;

  case 109: /* expr: expr NE expr  */
#line 708 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tNE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2607 "y.tab.c"
    break;

  case 110: /* expr: expr EQ expr  */
#line 709 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tEQ,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2613 "y.tab.c"
    break;

  case 111: /* expr: expr MOD expr  */
#line 710 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,NULL,tMOD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2619 "y.tab.c"
    break;

  case 112: /* expr: expr AND expr  */
#line 711 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,NULL,tAND,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2625 "y.tab.c"
    break;

  case 113: /* expr: expr OR expr  */
#line 712 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tOR,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2631 "y.tab.c"
    break;

  case 114: /* expr: expr NE Nullptr  */
#line 713 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tNullNe,(yyvsp[-2].node),NULL,NULL);}
#line 2637 "y.tab.c"
    break;

  case 115: /* expr: expr EQ Nullptr  */
#line 714 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tNullEq,(yyvsp[-2].node),NULL,NULL);}
#line 2643 "y.tab.c"
    break;

  case 116: /* expr: NUM  */
#line 715 "tree.y"
             { (yyvsp[0].node)->type=TLookup("int");(yyval.node)=(yyvsp[0].node);}
#line 2649 "y.tab.c"
    break;

  case 117: /* expr: MSG  */
#line 716 "tree.y"
             {(yyvsp[0].node)->type=TLookup("str");(yyval.node)=(yyvsp[0].node);}
#line 2655 "y.tab.c"
    break;

  case 118: /* expr: VAR  */
#line 717 "tree.y"
            {(yyval.node)=(yyvsp[0].node);}
#line 2661 "y.tab.c"
    break;

  case 119: /* expr: '(' expr ')'  */
#line 718 "tree.y"
                        {(yyval.node) = (yyvsp[-1].node);}
#line 2667 "y.tab.c"
    break;

  case 120: /* expr: FieldFunction  */
#line 719 "tree.y"
                       {(yyval.node)=(yyvsp[0].node);}
#line 2673 "y.tab.c"
    break;

  case 121: /* expr: ID '(' ArgList ')'  */
#line 721 "tree.y"
                        {
                            if((yyvsp[-1].node)!=NULL)
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
                            else{
                                (yyvsp[-3].node)->Gentry=Lookup((yyvsp[-3].node)->varname);
                            if((yyvsp[-3].node)->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",(yyvsp[-3].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            struct typi*temp=typ_head;
                            if(temp!=NULL)
                            {
                                printf("error in number of argu. in function %s\n",(yyvsp[-3].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }

                            (yyvsp[-3].node)->type=(yyvsp[-3].node)->Gentry->type;
                            (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,(yyvsp[-3].node)->varname,tFunction,NULL,NULL,NULL);
                            }
                        }
#line 2744 "y.tab.c"
    break;

  case 122: /* expr: FIELD  */
#line 787 "tree.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 2750 "y.tab.c"
    break;

  case 123: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 791 "tree.y"
                    {
                       if(Cptr==NULL){printf("self out of class\n");printf("error at  line:%d\n",lineno);exit(1);}
                       if(selftype(Cptr,(yyvsp[-3].node),0)){printf("error at  line:%d\n",lineno);exit(1);}
                       (yyvsp[-3].node)->type=Class_Mlookup(Cptr,(yyvsp[-3].node)->varname)->Type;
                       (yyvsp[-3].node)->third=(yyvsp[-1].node);
                       (yyvsp[-3].node)->Gentry=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
                       /* $3->Gentry->binding=Class_Mlookup(Cptr,$3->varname)->Fiel */
                       (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tFieldFun,(yyvsp[-5].node),(yyvsp[-3].node),NULL);
                    }
#line 2764 "y.tab.c"
    break;

  case 124: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 801 "tree.y"
                {
                    // not in class
                    if(Cptr!=NULL){printf("error in id.id(args) \n");printf("error at  line:%d\n",lineno);exit(1);}
                    set_id((yyvsp[-5].node));
                    if(selftype((yyvsp[-5].node)->Gentry->Ctype,(yyvsp[-3].node),0)){printf("error at  line:%d\n",lineno);exit(1);}
                    (yyvsp[-3].node)->type=Class_Mlookup((yyvsp[-5].node)->Gentry->Ctype,(yyvsp[-3].node)->varname)->Type;
                    (yyvsp[-3].node)->third=(yyvsp[-1].node);
                    (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tFieldFun,(yyvsp[-5].node),(yyvsp[-3].node),NULL);
                }
#line 2778 "y.tab.c"
    break;

  case 125: /* FieldFunction: FIELD '.' ID '(' ArgList ')'  */
#line 811 "tree.y"
                {
                    if(t_c_method((yyvsp[-5].node),(yyvsp[-3].node),Cptr)){printf("error at  line:%d\n",lineno);exit(1);}
                    (yyvsp[-3].node)->third=(yyvsp[-1].node);
                    (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tFieldFun,(yyvsp[-5].node),(yyvsp[-3].node),NULL);
                }
#line 2788 "y.tab.c"
    break;

  case 126: /* FIELD: ID '.' ID  */
#line 817 "tree.y"
                      {
                    //both are in symbol.c
                    typeAssgn((yyvsp[-2].node));
                    if((yyvsp[-2].node)->type)
                    fieldTypeAssgn((yyvsp[0].node),(yyvsp[-2].node)->type->fields);
                    else
                    iddotid((yyvsp[0].node),(yyvsp[-2].node));
                    (yyval.node)=createTree(-1,(yyvsp[0].node)->type,NULL,tField,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2801 "y.tab.c"
    break;

  case 127: /* FIELD: FIELD '.' ID  */
#line 825 "tree.y"
                          {
            t_c_field((yyvsp[-2].node),(yyvsp[0].node),Cptr);
            (yyval.node)=insertField((yyvsp[-2].node),(yyvsp[0].node));  //in type.c file
            }
#line 2810 "y.tab.c"
    break;

  case 128: /* FIELD: SELF '.' ID  */
#line 829 "tree.y"
                      {
           if(Cptr==NULL){printf("self out of class\n");printf("error at  line:%d\n",lineno);exit(1);}
           if(selftype(Cptr,(yyvsp[0].node),1)){printf("error at  line:%d\n",lineno);exit(1);}

            (yyvsp[0].node)->type=Class_Flookup(Cptr,(yyvsp[0].node)->varname)->Type;
           (yyval.node)=createTree(-1,(yyvsp[0].node)->type,NULL,tField,(yyvsp[-2].node),(yyvsp[0].node),NULL);
          }
#line 2822 "y.tab.c"
    break;

  case 129: /* ArgList: ArgList COMMA expr  */
#line 839 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyvsp[0].node)->third=(yyvsp[-2].node);
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2835 "y.tab.c"
    break;

  case 130: /* ArgList: expr  */
#line 848 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2847 "y.tab.c"
    break;

  case 131: /* ArgList: %empty  */
#line 854 "tree.y"
                          {(yyval.node)=NULL;}
#line 2853 "y.tab.c"
    break;

  case 132: /* VAR: ID  */
#line 859 "tree.y"
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
#line 2883 "y.tab.c"
    break;

  case 133: /* VAR: ID '[' expr ']'  */
#line 885 "tree.y"
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
#line 2912 "y.tab.c"
    break;


#line 2916 "y.tab.c"

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

#line 910 "tree.y"


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
