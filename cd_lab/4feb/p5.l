%{
	#include<stdio.h>
	char data[1000]={'\0'};
%}
%%
\/\/(.*)
\/\*(.*\n)*.*\*\/
(.|\n)	{strcat(data, yytext);}
%%
int main(){
	yyin=fopen("rk.txt","r");
	yylex();
	yyout=fopen("result_5.txt","w");
	fprintf(yyout, "%s", data);
	return 0;
}
int yywrap(){
	return 1;
}
