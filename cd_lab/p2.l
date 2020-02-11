%{
	#include<stdio.h>
	#include<stdlib.h>
	int key=1;
	int idf=1;
	int oper=1;
	int cons=1;
	char s_key[10000]={'\0'};
	char s_idf[10000]={'\0'};
	char s_oper[10000]={'\0'};
	char s_cons[10000]={'\0'};
	char temp[1000];
%}
%%
(auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while)	{	
			sprintf(temp, "%3d ~ %s\n", key, yytext);
			strcat(s_key, temp);
			key++;
		}
[_a-zA-Z][_a-zA-Z0-9]*	{
							sprintf(temp, "%3d ~ %s\n", idf, yytext);
							strcat(s_idf, temp);
							idf++;
						}
[-+*/|&\.%=\\]+	{
				sprintf(temp, "%3d ~ %s\n", oper, yytext);
				strcat(s_oper, temp);
				oper++;
			}
([0-9]+)	{
				sprintf(temp, "%3d ~ %s\n", cons, yytext);
				strcat(s_cons, temp);
				cons++;
			}
%%
int main(){
	yyin=fopen("p2.l","r");
	yylex();
	FILE *a=fopen("key.txt","w");
	FILE *b=fopen("idf.txt","w");
	FILE *c=fopen("oper.txt","w");
	FILE *d=fopen("cons.txt","w");
	fprintf(a, "%s", s_key);
	fprintf(b, "%s", s_idf);
	fprintf(c, "%s", s_oper);
	fprintf(d, "%s", s_cons);
	fclose(a);
	fclose(b);
	fclose(c);
	fclose(d);
	return 0;
}
int yywrap(){
	return 1;
}
