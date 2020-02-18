#include<stdio.h>
#include<string.h>
char data[100]={'\0'};
int i=0,f=0;
void S();
void L();
void T();
void M();
void U();
void V();
void main(){
	printf("Enter String : ");
	scanf("%s",data);
	S();
	if(strlen(data)==i && f==0){
		printf("Matched\n");
	}else{
		printf("Failed\n");
	}
}
void S(){
	T();
	L();
}
void T(){
	U();
	M();
}
void L(){
	if(data[i]=='+'){
		i++;
		S();
	}else{
		return;
	}
}
void M(){
	if(data[i]=='*'){
		i++;
		T();
	}else{
		return;
	}
}
void U(){
	if(data[i]=='('){
		i++;
		S();
		if(data[i]==')')
			i++;
		else
			f=1;
	}else{
		V();
	}
}
void V(){
	if(data[i]>47 && data[i]<=57){
		i++;
	}else{
		f=1;
	}
}
