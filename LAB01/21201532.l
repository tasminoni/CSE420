%{
#include "symbol_info.h"
#include <string>
#include <iostream>

#define YYSTYPE symbol_info*
#include "y.tab.h"

void yyerror(const char *);
extern int lines;
extern void logToken(const std::string& token, const std::string& lexeme);

%}

%option noyywrap

WHITESPACE [ \t\f\r\v]
NEWLINE \n
DIGIT [0-9]
LETTER [a-zA-Z]
ID ({LETTER}|_)({LETTER}|{DIGIT}|_)*
INTEGER {DIGIT}+
FLOAT {DIGIT}+(\.{DIGIT}+)?(E[+-]?{DIGIT}+)?

%%

{WHITESPACE}    { /* ignore whitespace */ }
{NEWLINE}       { lines++; }

"if"            { logToken("IF", yytext); return IF; }
"else"          { logToken("ELSE", yytext); return ELSE; }
"for"           { logToken("FOR", yytext); return FOR; }
"while"         { logToken("WHILE", yytext); return WHILE; }
"do"            { logToken("DO", yytext); return DO; }
"break"         { logToken("BREAK", yytext); return BREAK; }
"continue"      { logToken("CONTINUE", yytext); return CONTINUE; }
"return"        { logToken("RETURN", yytext); return RETURN; }
"int"           { logToken("INT", yytext); return INT; }
"float"         { logToken("FLOAT", yytext); return FLOAT; }
"char"          { logToken("CHAR", yytext); return CHAR; }
"void"          { logToken("VOID", yytext); return VOID; }
"double"        { logToken("DOUBLE", yytext); return DOUBLE; }
"switch"        { logToken("SWITCH", yytext); return SWITCH; }
"case"          { logToken("CASE", yytext); return CASE; }
"default"       { logToken("DEFAULT", yytext); return DEFAULT; }
"printf"       { logToken("PRINTLN", yytext); return PRINTLN; }

"+"             { logToken("ADDOP", yytext); yylval = new symbol_info(yytext, "ADDOP"); return ADDOP; }
"-"             { logToken("ADDOP", yytext); yylval = new symbol_info(yytext, "ADDOP"); return ADDOP; }
"*"             { logToken("MULOP", yytext); yylval = new symbol_info(yytext, "MULOP"); return MULOP; }
"/"             { logToken("MULOP", yytext); yylval = new symbol_info(yytext, "MULOP"); return MULOP; }
"%"             { logToken("MULOP", yytext); yylval = new symbol_info(yytext, "MULOP"); return MULOP; }
"++"            { logToken("INCOP", yytext); return INCOP; }
"--"            { logToken("DECOP", yytext); return DECOP; }

"<"             { logToken("RELOP", yytext); yylval = new symbol_info(yytext, "RELOP"); return RELOP; }
"<="            { logToken("RELOP", yytext); yylval = new symbol_info(yytext, "RELOP"); return RELOP; }
">"             { logToken("RELOP", yytext); yylval = new symbol_info(yytext, "RELOP"); return RELOP; }
">="            { logToken("RELOP", yytext); yylval = new symbol_info(yytext, "RELOP"); return RELOP; }
"=="            { logToken("RELOP", yytext); yylval = new symbol_info(yytext, "RELOP"); return RELOP; }
"!="            { logToken("RELOP", yytext); yylval = new symbol_info(yytext, "RELOP"); return RELOP; }

"="             { logToken("ASSIGNOP", yytext); return ASSIGNOP; }

"&&"            { logToken("LOGICOP", yytext); yylval = new symbol_info(yytext, "LOGICOP"); return LOGICOP; }
"||"            { logToken("LOGICOP", yytext); yylval = new symbol_info(yytext, "LOGICOP"); return LOGICOP; }

"!"             { logToken("NOT", yytext); return NOT; }

"("             { logToken("LPAREN", yytext); return LPAREN; }
")"             { logToken("RPAREN", yytext); return RPAREN; }
"{"             { logToken("LCURL", yytext); return LCURL; }
"}"             { logToken("RCURL", yytext); return RCURL; }
"["             { logToken("LTHIRD", yytext); return LTHIRD; }
"]"             { logToken("RTHIRD", yytext); return RTHIRD; }
","             { logToken("COMMA", yytext); return COMMA; }
";"             { logToken("SEMICOLON", yytext); return SEMICOLON; }

{ID}            { 
                  logToken("ID", yytext);
                  yylval = new symbol_info(yytext, "ID");
                  return ID; 
                }

{INTEGER}       { 
                  logToken("CONST_INT", yytext);
                  yylval = new symbol_info(yytext, "CONST_INT");
                  return CONST_INT; 
                }

{FLOAT}         { 
                  logToken("CONST_FLOAT", yytext);
                  yylval = new symbol_info(yytext, "CONST_FLOAT");
                  return CONST_FLOAT; 
                }


%%