%{
	int length=0;
	char data[50];
%}
%%
[A-Za-z]+	{
				if(yyleng>length){
					length=yyleng;
					strcpy(data, yytext);
				}					}
			}
%%
int main(){
	yyin=fopen("rk.txt","r");
	yylex();
	printf("Largest word : %s %d\n", data, length);
	return 0;
}
int yywrap(){
	return 1;
}
