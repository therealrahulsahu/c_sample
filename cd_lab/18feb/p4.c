#include<stdio.h>
#include<string.h>
char data[100]={'\0'};
int i=0,f=0;
void S();
void A();
void B();
void C();
void D();
void E();
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
	A();
	B();
	C();
	D();
	E();
}
void A(){
	if(data[i]=='a'){
		i++;
	}else{
		return;
	}
}
void B(){
	if(data[i]=='b'){
		i++;
	}else{
		return;
	}
}
void C(){
	if(data[i]=='c'){
		i++;
	}else{
		f=1;
	}
}
void D(){
	if(data[i]=='d'){
		i++;
	}else{
		return;
	}
}
void E(){
	if(data[i]=='e'){
		i++;
	}else{
		return;
	}
}
