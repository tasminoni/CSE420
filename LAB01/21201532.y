%{
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

%}

%token IF ELSE FOR WHILE DO BREAK CONTINUE RETURN INT FLOAT CHAR VOID DOUBLE SWITCH CASE DEFAULT PRINTLN ADDOP MULOP INCOP DECOP RELOP ASSIGNOP LOGICOP NOT LPAREN RPAREN LCURL RCURL LTHIRD RTHIRD SEMICOLON COMMA ID CONST_INT CONST_FLOAT

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%

// Grammar rules and actions
start : program
    {
        logGrammarRule("start", "program", $1->getname());
        $$ = $1;
    }
    ;

program : program unit
    {
        std::string sourceText = $1->getname() + "\n" + $2->getname();
        $$ = new symbol_info(sourceText, "program");
        logGrammarRule("program", "program unit", sourceText);
    }
    | unit
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "program");
        logGrammarRule("program", "unit", sourceText);
    }
    ;

unit : var_declaration
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "unit");
        logGrammarRule("unit", "var_declaration", sourceText);
    }
    | func_definition
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "unit");
        logGrammarRule("unit", "func_definition", sourceText);
    }
    ;

func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement
    {
        std::string sourceText = $1->getname() + " " + $2->getname() + "(" + $4->getname() + ")" + "\n" + $6->getname();
        $$ = new symbol_info(sourceText, "func_def");
        logGrammarRule("func_definition", "type_specifier ID LPAREN parameter_list RPAREN compound_statement", sourceText);
    }
    | type_specifier ID LPAREN RPAREN compound_statement
    {
        std::string sourceText = $1->getname() + " " + $2->getname() + "()" + "\n" + $5->getname();
        $$ = new symbol_info(sourceText, "func_def");
        logGrammarRule("func_definition", "type_specifier ID LPAREN RPAREN compound_statement", sourceText);
    }
    ;

parameter_list : parameter_list COMMA type_specifier ID
    {
        std::string sourceText = $1->getname() + ", " + $3->getname() + " " + $4->getname();
        $$ = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "parameter_list COMMA type_specifier ID", sourceText);
    }
    | parameter_list COMMA type_specifier
    {
        std::string sourceText = $1->getname() + ", " + $3->getname();
        $$ = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "parameter_list COMMA type_specifier", sourceText);
    }
    | type_specifier ID
    {
        std::string sourceText = $1->getname() + " " + $2->getname();
        $$ = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "type_specifier ID", sourceText);
    }
    | type_specifier
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "param_list");
        logGrammarRule("parameter_list", "type_specifier", sourceText);
    }
    ;

compound_statement : LCURL statements RCURL
    {
        std::string sourceText = "{\n" + $2->getname() + "\n}";
        $$ = new symbol_info(sourceText, "compound_stmt");
        logGrammarRule("compound_statement", "LCURL statements RCURL", sourceText);
    }
    | LCURL RCURL
    {
        std::string sourceText = "{\n}";
        $$ = new symbol_info(sourceText, "compound_stmt");
        logGrammarRule("compound_statement", "LCURL RCURL", sourceText);
    }
    ;

var_declaration : type_specifier declaration_list SEMICOLON
    {
        std::string sourceText = $1->getname() + " " + $2->getname() + ";";
        $$ = new symbol_info(sourceText, "var_decl");
        logGrammarRule("var_declaration", "type_specifier declaration_list SEMICOLON", sourceText);
    }
    ;

declaration_list : declaration_list COMMA ID
    {
        std::string sourceText = $1->getname() + ", " + $3->getname();
        $$ = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "declaration_list COMMA ID", sourceText);
    }
    | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
    {
        std::string sourceText = $1->getname() + ", " + $3->getname() + "[" + $5->getname() + "]";
        $$ = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "declaration_list COMMA ID LTHIRD CONST_INT RTHIRD", sourceText);
    }
    | ID
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "ID", sourceText);
    }
    | ID LTHIRD CONST_INT RTHIRD
    {
        std::string sourceText = $1->getname() + "[" + $3->getname() + "]";
        $$ = new symbol_info(sourceText, "decl_list");
        logGrammarRule("declaration_list", "ID LTHIRD CONST_INT RTHIRD", sourceText);
    }
    ;

type_specifier : INT
    {
        std::string sourceText = "int";
        $$ = new symbol_info(sourceText, "type_spec");
        logGrammarRule("type_specifier", "INT", sourceText);
    }
    | FLOAT
    {
        std::string sourceText = "float";
        $$ = new symbol_info(sourceText, "type_spec");
        logGrammarRule("type_specifier", "FLOAT", sourceText);
    }
    | VOID
    {
        std::string sourceText = "void";
        $$ = new symbol_info(sourceText, "type_spec");
        logGrammarRule("type_specifier", "VOID", sourceText);
    }
    ;

statements : statements statement
    {
        std::string sourceText = $1->getname() + "\n" + $2->getname();
        $$ = new symbol_info(sourceText, "stmts");
        logGrammarRule("statements", "statements statement", sourceText);
    }
    | statement
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "stmts");
        logGrammarRule("statements", "statement", sourceText);
    }
    ;

statement : var_declaration
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "var_declaration", sourceText);
    }
    | expression_statement
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "expression_statement", sourceText);
    }
    | compound_statement
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "compound_statement", sourceText);
    }
    | FOR LPAREN expression_statement expression_statement expression RPAREN statement
    {
        std::string sourceText = "for(" + $3->getname() + $4->getname() + $5->getname() + ")" + $7->getname();
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "FOR LPAREN expression_statement expression_statement expression RPAREN statement", sourceText);
    }
    | IF LPAREN expression RPAREN statement %prec LOWER_THAN_ELSE
    {
        std::string sourceText = "if(" + $3->getname() + ")" + $5->getname();
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "IF LPAREN expression RPAREN statement", sourceText);
    }
    | IF LPAREN expression RPAREN statement ELSE statement
    {
        
        std::string elseStmt = $7->getname();
        size_t ifPos = elseStmt.find("if");
        
        std::string sourceText;
        if (ifPos == 0) 
        {
            
            sourceText = "if(" + $3->getname() + ")\n" + $5->getname() + "\nelse\n" + elseStmt;
        } 
        else 
        {
            
            sourceText = "if(" + $3->getname() + ")\n" + $5->getname() + "\nelse\n" + elseStmt;
        }
        
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "IF LPAREN expression RPAREN statement ELSE statement", sourceText);
    }
    | WHILE LPAREN expression RPAREN statement
    {
        std::string sourceText = "while(" + $3->getname() + ")" + $5->getname();
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "WHILE LPAREN expression RPAREN statement", sourceText);
    }
    | PRINTLN LPAREN ID RPAREN SEMICOLON
    {
        std::string sourceText = "printf(" + $3->getname() + ");";
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "PRINTLN LPAREN ID RPAREN SEMICOLON", sourceText);
    }
    | RETURN expression SEMICOLON
    {
        std::string sourceText = "return " + $2->getname() + ";";
        $$ = new symbol_info(sourceText, "stmt");
        logGrammarRule("statement", "RETURN expression SEMICOLON", sourceText);
    }
    ;

expression_statement : SEMICOLON
    {
        std::string sourceText = ";";
        $$ = new symbol_info(sourceText, "expr_stmt");
        logGrammarRule("expression_statement", "SEMICOLON", sourceText);
    }
    | expression SEMICOLON
    {
        std::string sourceText = $1->getname() + ";";
        $$ = new symbol_info(sourceText, "expr_stmt");
        logGrammarRule("expression_statement", "expression SEMICOLON", sourceText);
    }
    ;

expression : logic_expression
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "expr");
        logGrammarRule("expression", "logic_expression", sourceText);
    }
    | variable ASSIGNOP logic_expression
    {
        std::string sourceText = $1->getname() + "=" + $3->getname();
        $$ = new symbol_info(sourceText, "expr");
        logGrammarRule("expression", "variable ASSIGNOP logic_expression", sourceText);
    }
    ;

logic_expression : rel_expression
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "logic_expr");
        logGrammarRule("logic_expression", "rel_expression", sourceText);
    }
    | rel_expression LOGICOP rel_expression
    {
        std::string sourceText = $1->getname() + $2->getname() + $3->getname();
        $$ = new symbol_info(sourceText, "logic_expr");
        logGrammarRule("logic_expression", "rel_expression LOGICOP rel_expression", sourceText);
    }
    ;

rel_expression : simple_expression
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "rel_expr");
        logGrammarRule("rel_expression", "simple_expression", sourceText);
    }
    | simple_expression RELOP simple_expression
    {
        std::string sourceText = $1->getname() + $2->getname() + $3->getname();
        $$ = new symbol_info(sourceText, "rel_expr");
        logGrammarRule("rel_expression", "simple_expression RELOP simple_expression", sourceText);
    }
    ;

simple_expression : term
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "simple_expr");
        logGrammarRule("simple_expression", "term", sourceText);
    }
    | simple_expression ADDOP term
    {
        std::string sourceText = $1->getname() + $2->getname() + $3->getname();
        $$ = new symbol_info(sourceText, "simple_expr");
        logGrammarRule("simple_expression", "simple_expression ADDOP term", sourceText);
    }
    ;

term : unary_expression
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "term");
        logGrammarRule("term", "unary_expression", sourceText);
    }
    | term MULOP unary_expression
    {
        std::string sourceText = $1->getname() + $2->getname() + $3->getname();
        $$ = new symbol_info(sourceText, "term");
        logGrammarRule("term", "term MULOP unary_expression", sourceText);
    }
    ;

unary_expression : factor
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "unary_expr");
        logGrammarRule("unary_expression", "factor", sourceText);
    }
    | ADDOP unary_expression
    {
        std::string sourceText = $1->getname() + $2->getname();
        $$ = new symbol_info(sourceText, "unary_expr");
        logGrammarRule("unary_expression", "ADDOP unary_expression", sourceText);
    }
    | NOT unary_expression
    {
        std::string sourceText = "!" + $2->getname();
        $$ = new symbol_info(sourceText, "unary_expr");
        logGrammarRule("unary_expression", "NOT unary_expression", sourceText);
    }
    ;

factor : variable
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "variable", sourceText);
    }
    | ID LPAREN argument_list RPAREN
    {
        std::string sourceText = $1->getname() + "(" + $3->getname() + ")";
        $$ = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "ID LPAREN argument_list RPAREN", sourceText);
    }
    | LPAREN expression RPAREN
    {
        std::string sourceText = "(" + $2->getname() + ")";
        $$ = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "LPAREN expression RPAREN", sourceText);
    }
    | CONST_INT
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "CONST_INT", sourceText);
    }
    | CONST_FLOAT
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "CONST_FLOAT", sourceText);
    }
    | variable INCOP
    {
        std::string sourceText = $1->getname() + "++";
        $$ = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "variable INCOP", sourceText);
    }
    | variable DECOP
    {
        std::string sourceText = $1->getname() + "--";
        $$ = new symbol_info(sourceText, "factor");
        logGrammarRule("factor", "variable DECOP", sourceText);
    }
    ;

argument_list : arguments
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "arg_list");
        logGrammarRule("argument_list", "arguments", sourceText);
    }
    |
    {
        std::string sourceText = "";
        $$ = new symbol_info(sourceText, "arg_list");
        logGrammarRule("argument_list", "", sourceText);
    }
    ;

arguments : arguments COMMA logic_expression
    {
        std::string sourceText = $1->getname() + ", " + $3->getname();
        $$ = new symbol_info(sourceText, "args");
        logGrammarRule("arguments", "arguments COMMA logic_expression", sourceText);
    }
    | logic_expression
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "args");
        logGrammarRule("arguments", "logic_expression", sourceText);
    }
    ;

variable : ID
    {
        std::string sourceText = $1->getname();
        $$ = new symbol_info(sourceText, "var");
        logGrammarRule("variable", "ID", sourceText);
    }
    | ID LTHIRD expression RTHIRD
    {
        std::string sourceText = $1->getname() + "[" + $3->getname() + "]";
        $$ = new symbol_info(sourceText, "var");
        logGrammarRule("variable", "ID LTHIRD expression RTHIRD", sourceText);
    }
    ;

%%

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