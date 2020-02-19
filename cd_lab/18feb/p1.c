#include<stdio.h>
#include<string.h>
char data[100]={'\0'};
int i=0,f=0;
void S();
void B();
void C();
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
	if(data[i]=='x' && data[i+1]=='y' && data[i+2]=='z'){
		i+=3;
	}else if(data[i]=='a'){
		i++;
		B();
		C();
	}else{
		f=1;
	}
}
void B(){
	if(data[i]=='c' && data[i+1]=='d'){
		i+=2;
	}else if(data[i]=='c'){
		i++;
	}else{
		f=1;
	}
}
void C(){
	if(data[i]=='e' && data[i+1]=='g'){
		i+=2;
	}else if(data[i]=='d' && data[i+1]=='f'){
		i+=2;
	}else{
		f=1;
	}
}
