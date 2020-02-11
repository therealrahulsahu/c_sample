%{
	#include<stdio.h>
	#include<stdlib.h>
	int i=1;
	char data[10000]={'\0'};
%}
%%
(.+)	{	
			char temp[1000];
			sprintf(temp, "%3d ~ %s\n", i, yytext);
			strcat(data, temp);
			i++;
		}
%%
int main(){
	yyin=fopen("p1.l","r");
	yylex();
	yyout=fopen("result_1.txt","w");
	fprintf(yyout, "%s", data);
	return 0;
}
int yywrap(){
	return 1;
}
