%{
	int nchar, nline;
%}
%%
\n		{nline++; nchar++;}
.		{nchar++;}
%%
int main(){
	yyin=fopen("rk.txt","r");
	yylex();
	printf("nLine : %d\nnChar : %d\n", nline, nchar);
	return 0;
}
int yywrap(){
	return 1;
}
