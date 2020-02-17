%{
	int con;
%}
%%
([0-9]+)(\.[0-9]+)?		{con++;}
.
%%
int main(){
	yyin=fopen("rk.txt","r");
	yylex();
	printf("\nConstants : %d\n", con);
	return 0;
}
int yywrap(){
	return 1;
}
