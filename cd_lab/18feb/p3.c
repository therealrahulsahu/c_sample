#include<stdio.h>
#include<string.h>
char data[100]={'\0'};
int i=0,f=0;
void S();
void A();
void B();
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
	if(data[i]=='d'){
		i++;
	}else if(data[i]=='a'){
		i++;
		S();
		B();
	}else{
		f=1;
	}
}
void A(){
	if(data[i]=='a'){
		i++;
	}else{
		f=1;
	}
}
void B(){
	if(data[i]=='b'){
		i++;
	}else if(data[i]=='a'){
		i++;
		B();
	}else{
		return;
	}
	
}
