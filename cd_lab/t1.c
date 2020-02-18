#include<stdio.h>
#include<string.h>
char data[100]={'\0'};
int i=0,f=0;
void E();
void T();
void main(){
	printf("Enter String : ");
	scanf("%s",data);
	E();
	if(strlen(data)==i && f==0){
		printf("Matched\n");
	}else{
		printf("Failed\n");
	}
}
void T(){
	if(data[i]=='('){
		i++;
		E();
		if(data[i]==')'){
			i++;
		}else{
			f=1;
		}
	}else if(data[i]=='a' && data[i+1]=='*'){
		i+=2;
		T();
	}else if(data[i]=='a'){
		i++;
	}else{
		f=1;
	}
}
void E(){
	T();
	if(data[i]=='+'){
		i++;
		E();
	}else{
		return;
	}
}
