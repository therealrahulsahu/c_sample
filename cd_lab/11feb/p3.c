#include<stdio.h>
#include<string.h>
char data[100]={'\0'};
int i=0,f=0;
void E();
void Ed();
void T();
void Td();
void F();

int main(){
	printf("Enter String: ");
	scanf("%s", data);
	E();
	if(strlen(data)==i && f==0){
		printf("String Matched\n");
	}else{
		printf("Not Matched\n");
	}
}
void E(){
	T();
	Ed();
}
void Ed(){
	if(data[i]=='+'){
		i++;
		T();
		Ed();
	}else{
		return;
	}
}
void T(){
	F();
	Td();
}
void Td(){
	if(data[i]=='*'){
		i++;
		F();
		Td();
	}else{
		return;
	}
}
void F(){
	if(data[i]=='('){
		i++;
		E();
		if(data[i]==')'){
			i++;
		}else{
			f=1;
		}
	}else{
		if(data[i]=='n'){
			i++;
		}else{
			f=1;
		}
	}
}
