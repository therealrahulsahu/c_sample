#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define F0 2
#define F1 3
#define TY 0
#define ST 1
char f_not(int n)
{
	if(n==-1)
		return '>';
	else if(n==1)
		return '*';
	else
		return ' ';
}
int in_state(int n)
{
	int raw;
	while(1)
	{
		scanf("%d", &raw);
		if(raw>0 & raw<=n)
			break;
	}
	return raw;

}
int in_bin()
{
	int t;
	while(1)
	{
		scanf("%d", &t);
		if(t==0 || t==1)
			break;
	}
	return t;
}
char *in_str()
{
	char *str = malloc(50*sizeof(char));
	while(1)
	{
		scanf("%s", str);
		int exit = 0;
		for(int i=0;str[i];i++)
		{
			if(str[i]=='0' || str[i]=='1')
				exit = 1;
			else
			{
				exit = 0;
				break;
			}
		}
		if(exit)
			break;
	}
	return str;
}
int check_dfa(char *st, int no_st, int **dfa, int state)
{
	int final = 0;
	for(int i=0;st[i];i++)
	{
		if(st[i]=='0')
			state = dfa[state][F0];
		else
			state = dfa[state][F1];
		final = dfa[state][TY];
	}
	return final;
}
int **in_dfa(int n)
{
	int **dfa=calloc(n+1, sizeof(int*));
	for(int i=0;i<=n;i++)
		dfa[i] = calloc(4, sizeof(int));
	dfa[0][TY]=-1;
	dfa[0][ST]=-1;
	dfa[0][F0]=0;
	dfa[0][F1]=1;
	for(int i=1;i<=n;i++)
	{
		dfa[i][ST]=i;
		printf("\nFrom %d (0) to : ",i);
		dfa[i][F0] = in_state(n);
		printf("From %d (1) to : ",i);
		dfa[i][F1] = in_state(n);
		printf("Enter Final(1) for %d:",i);
		dfa[i][TY] = in_bin();
	}
	return dfa;
}
void out_dfa(int **dfa, int n, int start)
{
	printf("Start : %d\n",start );
	printf("%4c%4c | %4d%4d\n", ' ',' ', dfa[0][F0], dfa[0][F1]);
	for(int i=1;i<=n;i++)
	{
		printf("%4c%4d | %4d%4d\n", f_not(dfa[i][TY]), dfa[i][ST], dfa[i][F0], dfa[i][F1]);
	}
}
int main()
{
	int n;
	printf("Enter No. of State : ");
	scanf("%d",&n);
	
	printf("Enter Start(n) state : ");
	int start=in_state(n);	
	
	int **dfa = in_dfa(n);
	
	out_dfa(dfa, n, start)	;
		
	while(1)
	{
		printf("Enter String: ");
		char *str = in_str();
		if(check_dfa(str, n, dfa, start))
			printf("Accepted\n");
		else
			printf("Rejected\n");
	}
}
