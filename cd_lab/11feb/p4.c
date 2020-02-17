#include<stdio.h>
#include<string.h>
char data[100]={'\0'};
int i=0,f=0;
void A();
void B();
void C();

int main(){
	printf("Enter String: ");
	scanf("%s", data);
	A();
	if(strlen(data)==i && f==0){
		printf("String Matched\n");
	}else{
		printf("Not Matched\n");
	}
}
void A(){
	B();
	C();
	B();
}
void B(){
	C();
	if(data[i]=='d'){
		i++;
	}else if(data[i]=='c'){
		i++;
		B();
	}else{
		return;
	}
}
void C(){
	if(data[i]=='e'){
		i++;
		B();
	}else
		return;
}
