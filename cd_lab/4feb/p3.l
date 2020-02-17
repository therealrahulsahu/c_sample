%{
	int nBlank, nLine, nChar, nWords;
%}
%%
[ ]			{nBlank++;}
\n			{nLine++;}
.			{nChar++;}
[a-zA-Z]+	{nWords+=yyleng;}
%%
int main(){
	yyin=fopen("rk.txt","r");
	yylex();
	printf("Blanks : %d\nLines : %d\nChars : %d\nWords %d\n", nBlank, nLine, nChar, nWords);
	return 0;
}
int yywrap(){
	return 1;
}
