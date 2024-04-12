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
    SELF = 306,                    /* SELF  */
    Extends = 307                  /* Extends  */
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
#define Extends 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "tree.y"

        struct tnode *node;
    

#line 252 "y.tab.c"

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
  YYSYMBOL_Extends = 52,                   /* Extends  */
  YYSYMBOL_53_ = 53,                       /* '{'  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* '('  */
  YYSYMBOL_56_ = 56,                       /* ')'  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_Program = 61,                   /* Program  */
  YYSYMBOL_ClassDefBlock = 62,             /* ClassDefBlock  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_ClassDefList = 64,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 65,                  /* ClassDef  */
  YYSYMBOL_Cname = 66,                     /* Cname  */
  YYSYMBOL_Fieldlists = 67,                /* Fieldlists  */
  YYSYMBOL_Fld = 68,                       /* Fld  */
  YYSYMBOL_MethoddeclP = 69,               /* MethoddeclP  */
  YYSYMBOL_MethodDecl = 70,                /* MethodDecl  */
  YYSYMBOL_MDecl = 71,                     /* MDecl  */
  YYSYMBOL_MethodP = 72,                   /* MethodP  */
  YYSYMBOL_MethodDefns = 73,               /* MethodDefns  */
  YYSYMBOL_TypeDefBlock = 74,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 75,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 76,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 77,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 78,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 79,                  /* TypeName  */
  YYSYMBOL_GdeclBlock = 80,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 81,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 82,                     /* Gdecl  */
  YYSYMBOL_GidList = 83,                   /* GidList  */
  YYSYMBOL_Gid = 84,                       /* Gid  */
  YYSYMBOL_FdefBlock = 85,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 86,                      /* Fdef  */
  YYSYMBOL_ParamList = 87,                 /* ParamList  */
  YYSYMBOL_Param = 88,                     /* Param  */
  YYSYMBOL_PType = 89,                     /* PType  */
  YYSYMBOL_MainBlock = 90,                 /* MainBlock  */
  YYSYMBOL_FTypeName = 91,                 /* FTypeName  */
  YYSYMBOL_LdeclBlock = 92,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 93,                  /* LDecList  */
  YYSYMBOL_LDecl = 94,                     /* LDecl  */
  YYSYMBOL_IdList = 95,                    /* IdList  */
  YYSYMBOL_Body = 96,                      /* Body  */
  YYSYMBOL_Slist = 97,                     /* Slist  */
  YYSYMBOL_Stmt = 98,                      /* Stmt  */
  YYSYMBOL_ReturnStmt = 99,                /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 100,                /* BreakStmt  */
  YYSYMBOL_ContStmt = 101,                 /* ContStmt  */
  YYSYMBOL_InputStmt = 102,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 103,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 104,                  /* AsgStmt  */
  YYSYMBOL_Ifstmt = 105,                   /* Ifstmt  */
  YYSYMBOL_Whilestmt = 106,                /* Whilestmt  */
  YYSYMBOL_AllocStmt = 107,                /* AllocStmt  */
  YYSYMBOL_FreeStmt = 108,                 /* FreeStmt  */
  YYSYMBOL_InitialStmt = 109,              /* InitialStmt  */
  YYSYMBOL_NewStmt = 110,                  /* NewStmt  */
  YYSYMBOL_DeleteStmt = 111,               /* DeleteStmt  */
  YYSYMBOL_expr = 112,                     /* expr  */
  YYSYMBOL_FieldFunction = 113,            /* FieldFunction  */
  YYSYMBOL_FIELD = 114,                    /* FIELD  */
  YYSYMBOL_ArgList = 115,                  /* ArgList  */
  YYSYMBOL_VAR = 116                       /* VAR  */
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
#define YYLAST   580

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      55,    56,     2,     2,     2,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    55,    60,    67,    67,    74,    78,    80,
      83,    94,   100,   106,   107,   109,   117,   125,   135,   135,
     136,   137,   139,   147,   155,   163,   163,   164,   165,   172,
     176,   179,   180,   183,   225,   229,   234,   254,   258,   262,
     272,   280,   289,   290,   293,   295,   296,   299,   322,   336,
     357,   361,   367,   467,   467,   468,   470,   495,   499,   503,
     510,   557,   560,   566,   572,   582,   583,   583,   585,   586,
     588,   590,   612,   636,   640,   642,   646,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     667,   668,   670,   672,   674,   676,   678,   690,   692,   693,
     695,   697,   699,   701,   705,   732,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   831,   834,   844,
     854,   861,   869,   873,   882,   891,   898,   902,   928
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
  "NEW", "DELETE", "SELF", "Extends", "'{'", "'}'", "'('", "')'", "'['",
  "']'", "'.'", "$accept", "Program", "ClassDefBlock", "$@1",
  "ClassDefList", "ClassDef", "Cname", "Fieldlists", "Fld", "MethoddeclP",
  "MethodDecl", "MDecl", "MethodP", "MethodDefns", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "TypeName",
  "GdeclBlock", "GdeclList", "Gdecl", "GidList", "Gid", "FdefBlock",
  "Fdef", "ParamList", "Param", "PType", "MainBlock", "FTypeName",
  "LdeclBlock", "LDecList", "LDecl", "IdList", "Body", "Slist", "Stmt",
  "ReturnStmt", "BreakStmt", "ContStmt", "InputStmt", "OutputStmt",
  "AsgStmt", "Ifstmt", "Whilestmt", "AllocStmt", "FreeStmt", "InitialStmt",
  "NewStmt", "DeleteStmt", "expr", "FieldFunction", "FIELD", "ArgList",
  "VAR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,    19,    34,    10,   -10,     0,  -244,  -244,    16,  -244,
      58,  -244,   159,  -244,  -244,    46,    93,   187,   295,  -244,
    -244,  -244,    67,  -244,   111,    76,    98,    -8,  -244,    90,
    -244,   143,   206,  -244,  -244,    16,  -244,   295,  -244,  -244,
     151,  -244,  -244,   156,   114,   157,  -244,  -244,   147,   107,
      22,  -244,  -244,  -244,  -244,  -244,   135,  -244,   166,  -244,
    -244,   318,   180,  -244,   143,   318,   253,   167,   341,  -244,
    -244,  -244,    51,  -244,   195,   154,  -244,    61,  -244,   211,
     273,  -244,   136,   173,   219,   231,   234,  -244,   224,   364,
    -244,   318,  -244,  -244,  -244,   194,  -244,    96,  -244,  -244,
    -244,   198,   200,    54,   201,    25,  -244,  -244,   202,   248,
     249,   205,   208,   212,    26,   169,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
     485,  -244,   213,  -244,  -244,    -1,     3,     5,   387,   255,
     266,   274,  -244,  -244,   166,  -244,   283,    26,    26,    26,
      26,   292,    26,  -244,   508,    26,  -244,  -244,    26,    26,
     294,   270,  -244,  -244,    26,    26,    26,    26,   433,    26,
      26,    26,    26,    26,    26,    83,    91,    26,   296,  -244,
     318,  -244,   318,  -244,   318,  -244,   251,   387,  -244,   254,
     263,   272,   167,  -244,   293,   316,   554,    68,     1,   276,
     339,  -244,   362,   385,   408,   277,  -244,   204,   204,   178,
     178,   286,   297,   319,   299,   531,  -244,  -244,   244,   244,
     244,   244,  -244,   244,  -244,   244,  -244,   300,    97,   100,
     104,  -244,  -244,   310,   340,   363,    26,  -244,  -244,    26,
     314,   313,   365,   367,    26,   322,   331,  -244,   384,  -244,
      26,   388,   390,   391,  -244,  -244,  -244,   554,   109,   430,
     430,  -244,  -244,   123,   400,   409,   366,   128,  -244,  -244,
    -244,  -244,    75,   189,  -244,  -244,  -244,   410,  -244,   430,
     411,   413,  -244,   229,  -244,  -244,   414,  -244
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      30,     0,     0,     7,     0,     0,    32,     1,     0,     5,
       0,     4,     0,    29,    31,     0,     0,     0,    61,    39,
      37,    38,     0,    35,     0,     0,    11,     0,     9,     0,
      41,     0,     0,    43,    64,    62,    63,    61,    51,     3,
       0,    33,    34,     0,     0,     0,     6,     8,     0,    47,
       0,    46,    40,    42,    50,     2,     0,    36,    67,    12,
      14,    55,     0,    44,     0,    55,     0,     0,    19,    59,
      57,    58,     0,    54,     0,     0,    45,     0,    66,     0,
       0,    69,     0,     0,     0,     0,     0,    13,     0,    18,
      21,     0,    49,    56,    48,     0,    72,     0,    65,    68,
     121,     0,     0,   137,     0,     0,   122,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    84,    82,    83,
      77,    78,    79,    80,    81,    85,    86,    87,    88,    89,
       0,   125,   127,   123,    60,     0,     0,     0,    26,     0,
       0,     0,    20,    53,    67,    70,     0,     0,     0,   136,
       0,     0,     0,    91,     0,     0,    92,    93,     0,     0,
       0,     0,    73,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      55,    16,    55,    17,    55,    62,     0,    25,    28,     0,
       0,     0,     0,    71,     0,     0,   135,     0,     0,   131,
       0,    90,     0,     0,     0,   133,   124,   106,   107,   108,
     109,     0,     0,     0,     0,     0,   117,   118,   110,   111,
     112,   113,   119,   114,   120,   115,   116,   132,     0,     0,
       0,    10,    27,     0,     0,     0,     0,   126,   138,   136,
       0,     0,     0,     0,   136,     0,     0,    97,     0,    96,
     136,     0,     0,     0,    52,    95,    94,   134,     0,     0,
       0,   102,   105,     0,     0,     0,     0,     0,    22,    23,
      24,   129,     0,     0,   128,   101,   103,     0,   130,     0,
       0,     0,   104,     0,    99,   100,     0,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,  -244,  -244,   347,  -244,  -244,  -244,  -244,
    -244,   308,  -244,  -244,  -244,  -244,   432,  -244,   418,     9,
    -244,  -244,   403,  -244,   380,  -244,   -36,   -62,   356,  -244,
      -4,  -244,   304,  -244,   369,  -244,   258,  -243,  -115,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -103,  -244,  -244,  -146,  -244
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    10,    16,    27,    28,    29,    68,    87,    88,
      89,    90,   186,   187,     3,     5,     6,    22,    23,    24,
      18,    32,    33,    50,    51,    37,    38,    72,    73,    74,
      11,    40,    67,    80,    81,    97,    83,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   197,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     163,    54,   154,    77,    26,   164,   165,   166,   167,   179,
     -61,   161,     4,   181,    39,   183,   272,   273,   169,   170,
     171,   172,   173,   174,   175,   176,    31,   177,   100,   100,
       1,     4,    63,    55,     7,   153,   283,   103,   103,     8,
      46,    31,    13,    12,   194,   195,   196,   198,    15,   200,
     106,   106,   202,    64,   180,   203,   204,     9,   182,   238,
     184,   207,   208,   209,   210,   215,   216,   217,   218,   219,
     220,   221,   223,   225,   226,    79,   113,   113,   100,    19,
     114,   114,    91,   101,   102,    17,   100,   103,   104,    79,
     279,   105,    91,   258,   100,   103,    20,    21,   263,   236,
     106,    25,   188,   103,   267,    26,   145,    92,   106,   149,
     280,   150,   108,   151,   109,   110,   106,    95,   228,   111,
     229,    41,   230,    43,   237,   112,   113,   146,    91,   222,
     114,    91,    44,   257,   113,    91,   196,   224,   114,   100,
     236,   196,   113,    48,   101,   102,   114,   196,   103,   104,
      45,   232,   105,   251,   236,    49,   252,   163,   163,   236,
     253,   106,    61,    56,    62,   271,    57,    58,   163,    59,
     107,    19,   100,   108,    60,   109,   110,   101,   102,   274,
     111,   103,   104,    75,   278,   105,   112,   113,    20,    21,
      65,   114,   100,    66,   106,   169,   170,   101,   102,    19,
      82,   103,   104,   162,   177,   105,   108,    93,   109,   110,
     166,   167,    94,   111,   106,    30,    20,    21,    19,   112,
     113,   169,   170,    96,   114,   281,   108,   134,   109,   110,
     177,   135,   100,   111,    52,    20,    21,   101,   102,   112,
     113,   103,   104,   136,   114,   105,   137,   144,   164,   165,
     166,   167,   138,   147,   106,   148,   152,   155,   156,   157,
     158,   169,   170,   159,   286,    19,   108,   189,   109,   110,
     177,   160,   178,   111,   164,   165,   166,   167,   190,   112,
     113,    78,    20,    21,   114,    19,   191,   169,   170,   171,
     172,   173,   174,   175,   176,   193,   177,   164,   165,   166,
     167,    98,    20,    21,   199,   231,   205,    34,   227,   180,
     169,   170,   171,   172,   173,   174,   175,   176,   182,   177,
     164,   165,   166,   167,    35,    36,   206,   184,   259,   247,
      69,   239,   244,   169,   170,   171,   172,   173,   174,   175,
     176,   245,   177,   164,   165,   166,   167,    70,    71,   234,
     255,   260,   246,    84,   248,   250,   169,   170,   171,   172,
     173,   174,   175,   176,   254,   177,   164,   165,   166,   167,
      85,    86,   235,   256,    47,   261,   139,   262,   264,   169,
     170,   171,   172,   173,   174,   175,   176,   265,   177,   164,
     165,   166,   167,   140,   141,   240,   266,   142,   268,    34,
     269,   270,   169,   170,   171,   172,   173,   174,   175,   176,
     275,   177,   164,   165,   166,   167,   185,    36,   241,   276,
     282,   284,   277,   285,   287,   169,   170,   171,   172,   173,
     174,   175,   176,   100,   177,    53,   100,    14,   101,   102,
      42,   242,   103,   104,    76,   103,   105,   143,   192,    99,
     233,     0,     0,     0,     0,   106,     0,     0,   106,     0,
       0,     0,     0,     0,   243,     0,     0,   108,     0,   109,
     110,     0,     0,     0,   111,     0,   211,     0,   212,   213,
     112,   113,   214,     0,   113,   114,     0,     0,   114,   164,
     165,   166,   167,     0,     0,     0,   168,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
       0,   177,   164,   165,   166,   167,     0,     0,   201,     0,
       0,     0,     0,     0,     0,   169,   170,   171,   172,   173,
     174,   175,   176,     0,   177,   164,   165,   166,   167,     0,
       0,   249,     0,     0,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,     0,   177,   164,   165,
     166,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177
};

static const yytype_int16 yycheck[] =
{
     115,    37,   105,    65,    12,     4,     5,     6,     7,    10,
       0,   114,    12,    10,    18,    10,   259,   260,    17,    18,
      19,    20,    21,    22,    23,    24,    17,    26,     3,     3,
      41,    12,    10,    37,     0,    10,   279,    12,    12,    29,
      48,    32,    42,    53,   147,   148,   149,   150,    32,   152,
      25,    25,   155,    31,    55,   158,   159,    47,    55,    58,
      55,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,    66,    51,    51,     3,    12,
      55,    55,    31,     8,     9,    27,     3,    12,    13,    80,
      15,    16,    31,   239,     3,    12,    29,    30,   244,    31,
      25,    55,   138,    12,   250,    12,    10,    56,    25,    55,
      35,    57,    37,    59,    39,    40,    25,    56,   180,    44,
     182,    54,   184,    12,    56,    50,    51,    31,    31,    46,
      55,    31,    56,   236,    51,    31,   239,    46,    55,     3,
      31,   244,    51,    53,     8,     9,    55,   250,    12,    13,
      52,   187,    16,    56,    31,    12,    56,   272,   273,    31,
      56,    25,    55,    12,    57,    56,    10,    53,   283,    12,
      34,    12,     3,    37,    27,    39,    40,     8,     9,    56,
      44,    12,    13,     3,    56,    16,    50,    51,    29,    30,
      55,    55,     3,    27,    25,    17,    18,     8,     9,    12,
      33,    12,    13,    34,    26,    16,    37,    12,    39,    40,
       6,     7,    58,    44,    25,    28,    29,    30,    12,    50,
      51,    17,    18,    12,    55,    36,    37,    54,    39,    40,
      26,    12,     3,    44,    28,    29,    30,     8,     9,    50,
      51,    12,    13,    12,    55,    16,    12,    53,     4,     5,
       6,     7,    28,    55,    25,    55,    55,    55,    10,    10,
      55,    17,    18,    55,    35,    12,    37,    12,    39,    40,
      26,    59,    59,    44,     4,     5,     6,     7,    12,    50,
      51,    28,    29,    30,    55,    12,    12,    17,    18,    19,
      20,    21,    22,    23,    24,    12,    26,     4,     5,     6,
       7,    28,    29,    30,    12,    54,    12,    12,    12,    55,
      17,    18,    19,    20,    21,    22,    23,    24,    55,    26,
       4,     5,     6,     7,    29,    30,    56,    55,    14,    10,
      12,    55,    55,    17,    18,    19,    20,    21,    22,    23,
      24,    55,    26,     4,     5,     6,     7,    29,    30,    56,
      10,    38,    55,    12,    55,    55,    17,    18,    19,    20,
      21,    22,    23,    24,    54,    26,     4,     5,     6,     7,
      29,    30,    56,    10,    27,    10,    12,    10,    56,    17,
      18,    19,    20,    21,    22,    23,    24,    56,    26,     4,
       5,     6,     7,    29,    30,    56,    12,    89,    10,    12,
      10,    10,    17,    18,    19,    20,    21,    22,    23,    24,
      10,    26,     4,     5,     6,     7,    29,    30,    56,    10,
      10,    10,    56,    10,    10,    17,    18,    19,    20,    21,
      22,    23,    24,     3,    26,    32,     3,     5,     8,     9,
      22,    56,    12,    13,    64,    12,    16,    91,   144,    80,
     192,    -1,    -1,    -1,    -1,    25,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    37,    -1,    39,
      40,    -1,    -1,    -1,    44,    -1,    43,    -1,    45,    46,
      50,    51,    49,    -1,    51,    55,    -1,    -1,    55,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    61,    74,    12,    75,    76,     0,    29,    47,
      62,    90,    53,    42,    76,    32,    63,    27,    80,    12,
      29,    30,    77,    78,    79,    55,    12,    64,    65,    66,
      28,    79,    81,    82,    12,    29,    30,    85,    86,    90,
      91,    54,    78,    12,    56,    52,    48,    65,    53,    12,
      83,    84,    28,    82,    86,    90,    12,    10,    53,    12,
      27,    55,    57,    10,    31,    55,    27,    92,    67,    12,
      29,    30,    87,    88,    89,     3,    84,    87,    28,    79,
      93,    94,    33,    96,    12,    29,    30,    68,    69,    70,
      71,    31,    56,    12,    58,    56,    12,    95,    28,    94,
       3,     8,     9,    12,    13,    16,    25,    34,    37,    39,
      40,    44,    50,    51,    55,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   116,    54,    12,    12,    12,    28,    12,
      29,    30,    71,    88,    53,    10,    31,    55,    55,    55,
      57,    59,    55,    10,   112,    55,    10,    10,    55,    55,
      59,   112,    34,    98,     4,     5,     6,     7,    11,    17,
      18,    19,    20,    21,    22,    23,    24,    26,    59,    10,
      55,    10,    55,    10,    55,    29,    72,    73,    86,    12,
      12,    12,    92,    12,   112,   112,   112,   115,   112,    12,
     112,    10,   112,   112,   112,    12,    56,   112,   112,   112,
     112,    43,    45,    46,    49,   112,   112,   112,   112,   112,
     112,   112,    46,   112,    46,   112,   112,    12,    87,    87,
      87,    54,    86,    96,    56,    56,    31,    56,    58,    55,
      56,    56,    56,    56,    55,    55,    55,    10,    55,    10,
      55,    56,    56,    56,    54,    10,    10,   112,   115,    14,
      38,    10,    10,   115,    56,    56,    12,   115,    10,    10,
      10,    56,    97,    97,    56,    10,    10,    56,    56,    15,
      35,    36,    10,    97,    10,    10,    35,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    61,    63,    62,    62,    64,    64,
      65,    66,    66,    67,    67,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    77,    77,    78,    79,    79,    79,
      80,    80,    81,    81,    82,    83,    83,    84,    84,    84,
      85,    85,    86,    87,    87,    87,    88,    89,    89,    89,
      90,    90,    91,    91,    91,    92,    92,    92,    93,    93,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,   100,   101,   102,   103,   104,   104,   105,   105,
     106,   107,   108,   109,   110,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     113,   114,   114,   114,   115,   115,   115,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     2,     0,     4,     0,     2,     1,
       8,     1,     3,     2,     0,     3,     3,     3,     1,     0,
       2,     1,     6,     6,     6,     1,     0,     2,     1,     3,
       0,     2,     1,     4,     2,     1,     3,     1,     1,     1,
       3,     2,     2,     1,     3,     3,     1,     1,     4,     4,
       2,     1,     9,     3,     1,     0,     2,     1,     1,     1,
       8,     0,     1,     1,     1,     3,     2,     0,     2,     1,
       3,     3,     1,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     2,     5,     5,     4,     4,    10,     8,
       8,     6,     5,     6,     7,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     1,     4,     1,     6,     6,
       6,     3,     3,     3,     3,     1,     0,     1,     4
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
#line 51 "tree.y"
                        {
                            printf("Done!!\n");
                            if(_global_pt)printSTable();
                        }
#line 1606 "y.tab.c"
    break;

  case 3: /* Program: TypeDefBlock ClassDefBlock GdeclBlock MainBlock  */
#line 56 "tree.y"
                        {
                            printf("Done!!\n");
                             if(_global_pt)printSTable();
                        }
#line 1615 "y.tab.c"
    break;

  case 4: /* Program: TypeDefBlock MainBlock  */
#line 61 "tree.y"
                        {  
                            printf("Done!!\n");
                        }
#line 1623 "y.tab.c"
    break;

  case 5: /* $@1: %empty  */
#line 67 "tree.y"
                       {initial(targetFile);}
#line 1629 "y.tab.c"
    break;

  case 6: /* ClassDefBlock: CLASS $@1 ClassDefList ENDCLASS  */
#line 68 "tree.y"
                        {
                            if(_class_pt){printClasstable();}
                            bind=bind+(Cptr->Class_index+1)*8;
                            Cptr=NULL;
                            flabel=funclass;
                        }
#line 1640 "y.tab.c"
    break;

  case 7: /* ClassDefBlock: %empty  */
#line 74 "tree.y"
                         {initial(targetFile);
                        flabel=funclass;
                        }
#line 1648 "y.tab.c"
    break;

  case 8: /* ClassDefList: ClassDefList ClassDef  */
#line 79 "tree.y"
                        {}
#line 1654 "y.tab.c"
    break;

  case 9: /* ClassDefList: ClassDef  */
#line 81 "tree.y"
                        {}
#line 1660 "y.tab.c"
    break;

  case 10: /* ClassDef: Cname '{' DECL Fieldlists MethoddeclP ENDDECL MethodP '}'  */
#line 84 "tree.y"
                        {
                            /* if(Cptr->Parentptr!=NULL)
                            {
                                addParent(Cptr);
                            } */
                            Cptr->Fieldcount=field_index;
                            check_cnt(Cptr);
                            _in_func=0;
                        }
#line 1674 "y.tab.c"
    break;

  case 11: /* Cname: ID  */
#line 94 "tree.y"
                                {Cptr = CInstall((yyvsp[0].node)->varname,NULL);flabel=0;field_index=0;}
#line 1680 "y.tab.c"
    break;

  case 12: /* Cname: ID Extends ID  */
#line 100 "tree.y"
                                {Cptr = CInstall((yyvsp[-2].node)->varname,(yyvsp[0].node)->varname);
                    addParent(Cptr);
                    flabel=CLookup((yyvsp[0].node)->varname)->Methodcount;
                    field_index=CLookup((yyvsp[0].node)->varname)->Fieldcount;
                }
#line 1690 "y.tab.c"
    break;

  case 13: /* Fieldlists: Fieldlists Fld  */
#line 106 "tree.y"
                                    {}
#line 1696 "y.tab.c"
    break;

  case 14: /* Fieldlists: %empty  */
#line 107 "tree.y"
                 {}
#line 1702 "y.tab.c"
    break;

  case 15: /* Fld: ID ID EOL  */
#line 110 "tree.y"
                        {
                            (yyvsp[-1].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                            (yyvsp[-1].node)->Gentry->Ctype=CLookup((yyvsp[-2].node)->varname);
                            (yyvsp[-1].node)->Gentry->type=TLookup((yyvsp[-2].node)->varname);
                            Class_Finstall(Cptr,(yyvsp[-2].node)->varname,(yyvsp[-1].node)->varname,field_index);
                            field_index++;
                        }
#line 1714 "y.tab.c"
    break;

  case 16: /* Fld: INT ID EOL  */
#line 118 "tree.y"
                        {
                            (yyvsp[-1].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                            (yyvsp[-1].node)->Gentry->Ctype=CLookup((yyvsp[-2].node)->varname);
                            (yyvsp[-1].node)->Gentry->type=TLookup((yyvsp[-2].node)->varname);
                            Class_Finstall(Cptr,"int",(yyvsp[-1].node)->varname,field_index);
                            field_index++;
                        }
#line 1726 "y.tab.c"
    break;

  case 17: /* Fld: STR ID EOL  */
#line 126 "tree.y"
                        {
                            (yyvsp[-1].node)->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                            (yyvsp[-1].node)->Gentry->Ctype=CLookup((yyvsp[-2].node)->varname);
                            (yyvsp[-1].node)->Gentry->type=TLookup((yyvsp[-2].node)->varname);
                            Class_Finstall(Cptr,"str",(yyvsp[-1].node)->varname,field_index);
                            field_index++;
                        }
#line 1738 "y.tab.c"
    break;

  case 19: /* MethoddeclP: %empty  */
#line 135 "tree.y"
                           {}
#line 1744 "y.tab.c"
    break;

  case 22: /* MDecl: ID ID '(' ParamList ')' EOL  */
#line 140 "tree.y"
                        {
                        
                        Class_Minstall(Cptr,(yyvsp[-4].node)->varname,TLookup((yyvsp[-5].node)->varname),paramlist,flabel);
                        flabel++;
                        funclass++;
                        paramlist=NULL;
                        }
#line 1756 "y.tab.c"
    break;

  case 23: /* MDecl: INT ID '(' ParamList ')' EOL  */
#line 148 "tree.y"
                        {
                        struct Typetable *temp=TLookup("int");
                        Class_Minstall(Cptr,(yyvsp[-4].node)->varname,temp,paramlist,flabel);
                        flabel++;
                        funclass++;
                        paramlist=NULL;
                        }
#line 1768 "y.tab.c"
    break;

  case 24: /* MDecl: STR ID '(' ParamList ')' EOL  */
#line 156 "tree.y"
                        {
                        Class_Minstall(Cptr,(yyvsp[-4].node)->varname,TLookup("str"),paramlist,flabel);
                        flabel++;
                        funclass++;
                        paramlist=NULL;
                        }
#line 1779 "y.tab.c"
    break;

  case 25: /* MethodP: MethodDefns  */
#line 163 "tree.y"
                       {}
#line 1785 "y.tab.c"
    break;

  case 26: /* MethodP: %empty  */
#line 163 "tree.y"
                          {}
#line 1791 "y.tab.c"
    break;

  case 29: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 173 "tree.y"
                        {
                            if(_type_pt)printTypeTable();
                        }
#line 1799 "y.tab.c"
    break;

  case 30: /* TypeDefBlock: %empty  */
#line 176 "tree.y"
                        {}
#line 1805 "y.tab.c"
    break;

  case 31: /* TypeDefList: TypeDefList TypeDef  */
#line 179 "tree.y"
                                       {}
#line 1811 "y.tab.c"
    break;

  case 32: /* TypeDefList: TypeDef  */
#line 180 "tree.y"
                         {}
#line 1817 "y.tab.c"
    break;

  case 33: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 184 "tree.y"
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
#line 1846 "y.tab.c"
    break;

  case 34: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 226 "tree.y"
                        {
                            
                        }
#line 1854 "y.tab.c"
    break;

  case 35: /* FieldDeclList: FieldDecl  */
#line 230 "tree.y"
                        {
                        }
#line 1861 "y.tab.c"
    break;

  case 36: /* FieldDecl: TypeName ID EOL  */
#line 235 "tree.y"
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
#line 1884 "y.tab.c"
    break;

  case 37: /* TypeName: INT  */
#line 255 "tree.y"
                        {
                        typename="int";
                        }
#line 1892 "y.tab.c"
    break;

  case 38: /* TypeName: STR  */
#line 259 "tree.y"
                        {
                        typename="str";
                        }
#line 1900 "y.tab.c"
    break;

  case 39: /* TypeName: ID  */
#line 263 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);typename=(yyvsp[0].node)->varname;
                        }
#line 1908 "y.tab.c"
    break;

  case 40: /* GdeclBlock: DECL GdeclList ENDDECL  */
#line 273 "tree.y"
                        {
                            /* initial(targetFile); */
                            reset_local();
                            argnum=-2;
                            flabel=0;
                            
                        }
#line 1920 "y.tab.c"
    break;

  case 41: /* GdeclBlock: DECL ENDDECL  */
#line 281 "tree.y"
                        {
                            /* initial(targetFile); */
                            reset_local();
                            argnum=-2;
                            flabel=0;
                        }
#line 1931 "y.tab.c"
    break;

  case 42: /* GdeclList: GdeclList Gdecl  */
#line 289 "tree.y"
                             {}
#line 1937 "y.tab.c"
    break;

  case 43: /* GdeclList: Gdecl  */
#line 290 "tree.y"
                   {}
#line 1943 "y.tab.c"
    break;

  case 45: /* GidList: GidList COMMA Gid  */
#line 295 "tree.y"
                               {}
#line 1949 "y.tab.c"
    break;

  case 46: /* GidList: Gid  */
#line 296 "tree.y"
                 {}
#line 1955 "y.tab.c"
    break;

  case 47: /* Gid: ID  */
#line 300 "tree.y"
                        {
                            if(Lookup((yyvsp[0].node)->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                int h;
                                if(CLookup(typename)) h=2;else h=1;
                                struct Gsymbol * temp= Install((yyvsp[0].node)->varname,type_ptr,h,NULL,-1);
                                if(CLookup(typename))
                                {
                                    (yyvsp[0].node)->Gentry=temp;
                                    (yyvsp[0].node)->Gentry->Ctype=CLookup(typename);
                                    /* struct tnode*cur=$1;
                                    struct Gsymbol *fg=Lookup($1->varname);
                                    printf("print in 303\n"); */
                                }
                            }
                            else{
                                printf("redclare error of %s\n",(yyvsp[0].node)->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                        }
#line 1982 "y.tab.c"
    break;

  case 48: /* Gid: ID '[' NUM ']'  */
#line 323 "tree.y"
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
#line 2000 "y.tab.c"
    break;

  case 49: /* Gid: ID '(' ParamList ')'  */
#line 337 "tree.y"
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
#line 2021 "y.tab.c"
    break;

  case 50: /* FdefBlock: FdefBlock Fdef  */
#line 358 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tFunconnect,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 2029 "y.tab.c"
    break;

  case 51: /* FdefBlock: Fdef  */
#line 362 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tFunconnect,(yyvsp[0].node),NULL,NULL);
                        }
#line 2037 "y.tab.c"
    break;

  case 52: /* Fdef: FTypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 368 "tree.y"
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
#line 2139 "y.tab.c"
    break;

  case 53: /* ParamList: ParamList COMMA Param  */
#line 467 "tree.y"
                                      {}
#line 2145 "y.tab.c"
    break;

  case 54: /* ParamList: Param  */
#line 467 "tree.y"
                                                {}
#line 2151 "y.tab.c"
    break;

  case 55: /* ParamList: %empty  */
#line 468 "tree.y"
                   {}
#line 2157 "y.tab.c"
    break;

  case 56: /* Param: PType ID  */
#line 471 "tree.y"
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
#line 2185 "y.tab.c"
    break;

  case 57: /* PType: INT  */
#line 496 "tree.y"
                        {
                        ptypename="int";
                        }
#line 2193 "y.tab.c"
    break;

  case 58: /* PType: STR  */
#line 500 "tree.y"
                        {
                        ptypename="str";
                        }
#line 2201 "y.tab.c"
    break;

  case 59: /* PType: ID  */
#line 504 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);ptypename=(yyvsp[0].node)->varname;
                        }
#line 2209 "y.tab.c"
    break;

  case 60: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 511 "tree.y"
                        {
                            //codegeneration part
                            if(_codegen_pt)
                            {
                            fprintf(targetFile,"MAIN:\n");
                            if(classhead!=NULL)
                            {
                                vftSet(targetFile);
                            }
                            fprintf(targetFile, "MOV SP,%d\n",bind);
                            fprintf(targetFile,"MOV BP,%d\n",bind);
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
#line 2261 "y.tab.c"
    break;

  case 61: /* MainBlock: %empty  */
#line 557 "tree.y"
                          {}
#line 2267 "y.tab.c"
    break;

  case 62: /* FTypeName: INT  */
#line 561 "tree.y"
                        {
                        ftypename="int";
                        _in_func=1;
                        if(Cptr!=NULL) argnum=argnum-2;
                        }
#line 2277 "y.tab.c"
    break;

  case 63: /* FTypeName: STR  */
#line 567 "tree.y"
                        {
                        ftypename="str";
                        _in_func=1;
                        if(Cptr!=NULL) argnum=argnum-2;
                        }
#line 2287 "y.tab.c"
    break;

  case 64: /* FTypeName: ID  */
#line 573 "tree.y"
                        {
                        (yyval.node)=(yyvsp[0].node);ftypename=(yyvsp[0].node)->varname;
                        _in_func=1;
                        if(Cptr!=NULL) argnum=argnum-2;
                        }
#line 2297 "y.tab.c"
    break;

  case 65: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 582 "tree.y"
                                      {}
#line 2303 "y.tab.c"
    break;

  case 66: /* LdeclBlock: DECL ENDDECL  */
#line 583 "tree.y"
                              {}
#line 2309 "y.tab.c"
    break;

  case 67: /* LdeclBlock: %empty  */
#line 583 "tree.y"
                                 {}
#line 2315 "y.tab.c"
    break;

  case 68: /* LDecList: LDecList LDecl  */
#line 585 "tree.y"
                            {}
#line 2321 "y.tab.c"
    break;

  case 69: /* LDecList: LDecl  */
#line 586 "tree.y"
                       {}
#line 2327 "y.tab.c"
    break;

  case 70: /* LDecl: TypeName IdList EOL  */
#line 588 "tree.y"
                                {}
#line 2333 "y.tab.c"
    break;

  case 71: /* IdList: IdList COMMA ID  */
#line 591 "tree.y"
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
#line 2359 "y.tab.c"
    break;

  case 72: /* IdList: ID  */
#line 613 "tree.y"
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
#line 2386 "y.tab.c"
    break;

  case 73: /* Body: START Slist END  */
#line 637 "tree.y"
                        {
                            (yyval.node)=(yyvsp[-1].node);
                        }
#line 2394 "y.tab.c"
    break;

  case 74: /* Body: START END  */
#line 640 "tree.y"
              {}
#line 2400 "y.tab.c"
    break;

  case 75: /* Slist: Slist Stmt  */
#line 643 "tree.y"
                        {
                            (yyval.node)=createTree(-1,NULL,NULL,tCONNECT,(yyvsp[-1].node),(yyvsp[0].node),NULL);
                        }
#line 2408 "y.tab.c"
    break;

  case 76: /* Slist: Stmt  */
#line 647 "tree.y"
                        {
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2416 "y.tab.c"
    break;

  case 77: /* Stmt: InputStmt  */
#line 651 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2422 "y.tab.c"
    break;

  case 78: /* Stmt: OutputStmt  */
#line 652 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2428 "y.tab.c"
    break;

  case 79: /* Stmt: AsgStmt  */
#line 653 "tree.y"
                  { (yyval.node)=(yyvsp[0].node);}
#line 2434 "y.tab.c"
    break;

  case 80: /* Stmt: Ifstmt  */
#line 654 "tree.y"
                 {(yyval.node)=(yyvsp[0].node);}
#line 2440 "y.tab.c"
    break;

  case 81: /* Stmt: Whilestmt  */
#line 655 "tree.y"
                    { (yyval.node)=(yyvsp[0].node);}
#line 2446 "y.tab.c"
    break;

  case 82: /* Stmt: BreakStmt  */
#line 656 "tree.y"
                     { (yyval.node)=(yyvsp[0].node);}
#line 2452 "y.tab.c"
    break;

  case 83: /* Stmt: ContStmt  */
#line 657 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2458 "y.tab.c"
    break;

  case 84: /* Stmt: ReturnStmt  */
#line 658 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2464 "y.tab.c"
    break;

  case 85: /* Stmt: AllocStmt  */
#line 659 "tree.y"
                    {(yyval.node)=(yyvsp[0].node);}
#line 2470 "y.tab.c"
    break;

  case 86: /* Stmt: FreeStmt  */
#line 660 "tree.y"
                   {(yyval.node)=(yyvsp[0].node);}
#line 2476 "y.tab.c"
    break;

  case 87: /* Stmt: InitialStmt  */
#line 661 "tree.y"
                      {(yyval.node)=(yyvsp[0].node);}
#line 2482 "y.tab.c"
    break;

  case 88: /* Stmt: NewStmt  */
#line 662 "tree.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 2488 "y.tab.c"
    break;

  case 89: /* Stmt: DeleteStmt  */
#line 663 "tree.y"
                     {(yyval.node)=(yyvsp[0].node);}
#line 2494 "y.tab.c"
    break;

  case 90: /* ReturnStmt: Return expr EOL  */
#line 667 "tree.y"
                               {(yyval.node)=createTree(-1,NULL,NULL,tReturn,(yyvsp[-1].node),NULL,NULL);}
#line 2500 "y.tab.c"
    break;

  case 91: /* ReturnStmt: Return EOL  */
#line 668 "tree.y"
                             {(yyval.node)=createTree(-1,NULL,NULL,tReturn,NULL,NULL,NULL);}
#line 2506 "y.tab.c"
    break;

  case 92: /* BreakStmt: BREAK EOL  */
#line 670 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tBREAK,NULL,NULL,NULL);}
#line 2512 "y.tab.c"
    break;

  case 93: /* ContStmt: CONTINUE EOL  */
#line 672 "tree.y"
                           {(yyval.node)=createTree(-1,NULL,NULL,tCONTINUE,NULL,NULL,NULL);}
#line 2518 "y.tab.c"
    break;

  case 94: /* InputStmt: READ '(' expr ')' EOL  */
#line 674 "tree.y"
                                      {(yyval.node)=createTree(-1,NULL,NULL,tREAD,(yyvsp[-2].node),NULL,NULL);}
#line 2524 "y.tab.c"
    break;

  case 95: /* OutputStmt: WRITE '(' expr ')' EOL  */
#line 676 "tree.y"
                                       {(yyval.node)=createTree(-1,NULL,NULL,tWRITE,(yyvsp[-2].node),NULL,NULL);}
#line 2530 "y.tab.c"
    break;

  case 96: /* AsgStmt: expr ASSIGN expr EOL  */
#line 678 "tree.y"
                                  { 
                        (yyval.node)=createTree(-1,NULL,NULL,tASSIGN,(yyvsp[-3].node),(yyvsp[-1].node),NULL);
                        /* struct Gsymbol *temp=Lookup($3->varname); */
                        struct tnode *curri=(yyvsp[-1].node);
                        /* $1->Gentry=Lookup($1->varname);
                        $3->Gentry=Lookup($3->varname); */
                        
                        if((yyvsp[-3].node)->Gentry && (yyvsp[-3].node)->Gentry->Ctype)
                        {
                            assgClass((yyvsp[-3].node)->Gentry->Ctype,(yyvsp[-1].node)->Gentry->Ctype);
                        }
                        }
#line 2547 "y.tab.c"
    break;

  case 97: /* AsgStmt: expr ASSIGN Nullptr EOL  */
#line 690 "tree.y"
                                    {(yyval.node)=createTree(-1,NULL,NULL,tNullAs,(yyvsp[-3].node),NULL,NULL);}
#line 2553 "y.tab.c"
    break;

  case 98: /* Ifstmt: IF '(' expr ')' then Slist Else Slist ENDIF EOL  */
#line 692 "tree.y"
                                                            {(yyval.node)=createTree(-1,NULL,NULL,tIF,(yyvsp[-7].node),(yyvsp[-4].node),(yyvsp[-2].node));}
#line 2559 "y.tab.c"
    break;

  case 99: /* Ifstmt: IF '(' expr ')' then Slist ENDIF EOL  */
#line 693 "tree.y"
                                               {(yyval.node)=createTree(-1,NULL,NULL,tIF,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2565 "y.tab.c"
    break;

  case 100: /* Whilestmt: WHILE '(' expr ')' DO Slist endwhile EOL  */
#line 695 "tree.y"
                                                        {(yyval.node)=createTree(-1,NULL,NULL,tWHILE,(yyvsp[-5].node),(yyvsp[-2].node),NULL);}
#line 2571 "y.tab.c"
    break;

  case 101: /* AllocStmt: expr ASSIGN ALLOC '(' ')' EOL  */
#line 697 "tree.y"
                                           {(yyval.node)=createTree(-1,NULL,NULL,tALLOC,(yyvsp[-5].node),NULL,NULL);}
#line 2577 "y.tab.c"
    break;

  case 102: /* FreeStmt: FREE '(' expr ')' EOL  */
#line 699 "tree.y"
                                {(yyval.node)=createTree(-1,NULL,NULL,tFREE,(yyvsp[-2].node),NULL,NULL);}
#line 2583 "y.tab.c"
    break;

  case 103: /* InitialStmt: expr ASSIGN INITIALIZE '(' ')' EOL  */
#line 701 "tree.y"
                                                 {(yyval.node)=createTree(-1,TLookup("int"),NULL,tInitial,(yyvsp[-5].node),NULL,NULL);
                //in temp.lib it is limited to 1020
                }
#line 2591 "y.tab.c"
    break;

  case 104: /* NewStmt: expr ASSIGN NEW '(' ID ')' EOL  */
#line 706 "tree.y"
            {
                //new in class and new in outside the calss must be have some closs lookups other wise hard it
                //errors can still come
                if(CLookup((yyvsp[-2].node)->varname)==NULL)
                {
                    printf("acess of undefined class\n");
                    printf("error at  line:%d\n",lineno);
                    exit(1);
                }
                (yyvsp[-6].node)->Gentry=Lookup((yyvsp[-6].node)->varname);
                if(Lookup((yyvsp[-6].node)->varname)==NULL && Cptr==NULL)
                {
                    printf("'%s' is not globaly declared\n",(yyvsp[-6].node)->varname);printf("error at lineno=%d\n",lineno); exit(1);
                }
                if(Cptr==NULL)
                assgClass((yyvsp[-6].node)->Gentry->Ctype,CLookup((yyvsp[-2].node)->varname)); //check for assginment in classes
                /* $1->Gentry->Ctype=CLookup($5->varname); */
                /* if($1->Gentry==NULL)
                {
                
                $1->Gentry=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
                $1->Gentry->Ctype=CLookup($5->varname);
                } */
                (yyval.node)=createTree(-1,NULL,NULL,tNEW,(yyvsp[-6].node),(yyvsp[-2].node),NULL);
            }
#line 2621 "y.tab.c"
    break;

  case 105: /* DeleteStmt: DELETE '(' expr ')' EOL  */
#line 733 "tree.y"
            {
                if(CLookup((yyvsp[-2].node)->varname)==NULL)
                {
                    printf("acess of undefined class\n");
                    printf("error at  line:%d\n",lineno);
                    exit(1);
                }
                (yyval.node)=createTree(-1,NULL,NULL,tDELETE,(yyvsp[-2].node),NULL,NULL);
            }
#line 2635 "y.tab.c"
    break;

  case 106: /* expr: expr PLUS expr  */
#line 744 "tree.y"
                        {(yyval.node)=createTree(-1,NULL,"+",tADD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2641 "y.tab.c"
    break;

  case 107: /* expr: expr MINUS expr  */
#line 745 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,"-",tSUB,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2647 "y.tab.c"
    break;

  case 108: /* expr: expr MUL expr  */
#line 746 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,"*",tMUL,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2653 "y.tab.c"
    break;

  case 109: /* expr: expr DIV expr  */
#line 747 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,"/",tDIV,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2659 "y.tab.c"
    break;

  case 110: /* expr: expr LE expr  */
#line 748 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tLE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2665 "y.tab.c"
    break;

  case 111: /* expr: expr GE expr  */
#line 749 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tGE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2671 "y.tab.c"
    break;

  case 112: /* expr: expr LT expr  */
#line 750 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tLT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2677 "y.tab.c"
    break;

  case 113: /* expr: expr GT expr  */
#line 751 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tGT,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2683 "y.tab.c"
    break;

  case 114: /* expr: expr NE expr  */
#line 752 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tNE,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2689 "y.tab.c"
    break;

  case 115: /* expr: expr EQ expr  */
#line 753 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tEQ,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2695 "y.tab.c"
    break;

  case 116: /* expr: expr MOD expr  */
#line 754 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,NULL,tMOD,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2701 "y.tab.c"
    break;

  case 117: /* expr: expr AND expr  */
#line 755 "tree.y"
                       {(yyval.node)=createTree(-1,NULL,NULL,tAND,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2707 "y.tab.c"
    break;

  case 118: /* expr: expr OR expr  */
#line 756 "tree.y"
                      {(yyval.node)=createTree(-1,NULL,NULL,tOR,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2713 "y.tab.c"
    break;

  case 119: /* expr: expr NE Nullptr  */
#line 757 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tNullNe,(yyvsp[-2].node),NULL,NULL);}
#line 2719 "y.tab.c"
    break;

  case 120: /* expr: expr EQ Nullptr  */
#line 758 "tree.y"
                         {(yyval.node)=createTree(-1,NULL,NULL,tNullEq,(yyvsp[-2].node),NULL,NULL);}
#line 2725 "y.tab.c"
    break;

  case 121: /* expr: NUM  */
#line 759 "tree.y"
             { (yyvsp[0].node)->type=TLookup("int");(yyval.node)=(yyvsp[0].node);}
#line 2731 "y.tab.c"
    break;

  case 122: /* expr: MSG  */
#line 760 "tree.y"
             {(yyvsp[0].node)->type=TLookup("str");(yyval.node)=(yyvsp[0].node);}
#line 2737 "y.tab.c"
    break;

  case 123: /* expr: VAR  */
#line 761 "tree.y"
            {(yyval.node)=(yyvsp[0].node);}
#line 2743 "y.tab.c"
    break;

  case 124: /* expr: '(' expr ')'  */
#line 762 "tree.y"
                        {(yyval.node) = (yyvsp[-1].node);}
#line 2749 "y.tab.c"
    break;

  case 125: /* expr: FieldFunction  */
#line 763 "tree.y"
                       {(yyval.node)=(yyvsp[0].node);}
#line 2755 "y.tab.c"
    break;

  case 126: /* expr: ID '(' ArgList ')'  */
#line 765 "tree.y"
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
#line 2826 "y.tab.c"
    break;

  case 127: /* expr: FIELD  */
#line 831 "tree.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 2832 "y.tab.c"
    break;

  case 128: /* FieldFunction: SELF '.' ID '(' ArgList ')'  */
#line 835 "tree.y"
                    {
                       if(Cptr==NULL){printf("self out of class\n");printf("error at  line:%d\n",lineno);exit(1);}
                       if(selftype(Cptr,(yyvsp[-3].node),0)){printf("error at  line:%d\n",lineno);exit(1);}
                       (yyvsp[-3].node)->type=Class_Mlookup(Cptr,(yyvsp[-3].node)->varname)->Type;
                       (yyvsp[-3].node)->third=(yyvsp[-1].node);
                       (yyvsp[-3].node)->Gentry=(struct Gsymbol *)malloc(sizeof(struct Gsymbol));
                       /* $3->Gentry->binding=Class_Mlookup(Cptr,$3->varname)->Fiel */
                       (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tFieldFun,(yyvsp[-5].node),(yyvsp[-3].node),NULL);
                    }
#line 2846 "y.tab.c"
    break;

  case 129: /* FieldFunction: ID '.' ID '(' ArgList ')'  */
#line 845 "tree.y"
                {
                    // not in class
                    if(Cptr!=NULL){printf("error in id.id(args) \n");printf("error at  line:%d\n",lineno);exit(1);}
                    set_id((yyvsp[-5].node));
                    if(selftype((yyvsp[-5].node)->Gentry->Ctype,(yyvsp[-3].node),0)){printf("error at  line:%d\n",lineno);exit(1);}
                    (yyvsp[-3].node)->type=Class_Mlookup((yyvsp[-5].node)->Gentry->Ctype,(yyvsp[-3].node)->varname)->Type;
                    (yyvsp[-3].node)->third=(yyvsp[-1].node);
                    (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tFieldFun,(yyvsp[-5].node),(yyvsp[-3].node),NULL);
                }
#line 2860 "y.tab.c"
    break;

  case 130: /* FieldFunction: FIELD '.' ID '(' ArgList ')'  */
#line 855 "tree.y"
                {
                    if(t_c_method((yyvsp[-5].node),(yyvsp[-3].node),Cptr)){printf("error at  line:%d\n",lineno);exit(1);}
                    (yyvsp[-3].node)->third=(yyvsp[-1].node);
                    (yyval.node)=createTree(-1,(yyvsp[-3].node)->type,NULL,tFieldFun,(yyvsp[-5].node),(yyvsp[-3].node),NULL);
                }
#line 2870 "y.tab.c"
    break;

  case 131: /* FIELD: ID '.' ID  */
#line 861 "tree.y"
                      {
                    //both are in symbol.c
                    typeAssgn((yyvsp[-2].node));
                    if((yyvsp[-2].node)->type)
                    fieldTypeAssgn((yyvsp[0].node),(yyvsp[-2].node)->type->fields);
                    else
                    iddotid((yyvsp[0].node),(yyvsp[-2].node));
                    (yyval.node)=createTree(-1,(yyvsp[0].node)->type,NULL,tField,(yyvsp[-2].node),(yyvsp[0].node),NULL);}
#line 2883 "y.tab.c"
    break;

  case 132: /* FIELD: FIELD '.' ID  */
#line 869 "tree.y"
                          {
            t_c_field((yyvsp[-2].node),(yyvsp[0].node),Cptr);
            (yyval.node)=insertField((yyvsp[-2].node),(yyvsp[0].node));  //in type.c file
            }
#line 2892 "y.tab.c"
    break;

  case 133: /* FIELD: SELF '.' ID  */
#line 873 "tree.y"
                      {
           if(Cptr==NULL){printf("self out of class\n");printf("error at  line:%d\n",lineno);exit(1);}
           if(selftype(Cptr,(yyvsp[0].node),1)){printf("error at  line:%d\n",lineno);exit(1);}

            (yyvsp[0].node)->type=Class_Flookup(Cptr,(yyvsp[0].node)->varname)->Type;
           (yyval.node)=createTree(-1,(yyvsp[0].node)->type,NULL,tField,(yyvsp[-2].node),(yyvsp[0].node),NULL);
          }
#line 2904 "y.tab.c"
    break;

  case 134: /* ArgList: ArgList COMMA expr  */
#line 883 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyvsp[0].node)->third=(yyvsp[-2].node);
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2917 "y.tab.c"
    break;

  case 135: /* ArgList: expr  */
#line 892 "tree.y"
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=(yyvsp[0].node)->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            (yyval.node)=(yyvsp[0].node);
                        }
#line 2929 "y.tab.c"
    break;

  case 136: /* ArgList: %empty  */
#line 898 "tree.y"
                          {(yyval.node)=NULL;}
#line 2935 "y.tab.c"
    break;

  case 137: /* VAR: ID  */
#line 903 "tree.y"
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
#line 2965 "y.tab.c"
    break;

  case 138: /* VAR: ID '[' expr ']'  */
#line 929 "tree.y"
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
#line 2994 "y.tab.c"
    break;


#line 2998 "y.tab.c"

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

#line 954 "tree.y"


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
