#include<stdio.h>
#include<string.h>
int main(){
	FILE *file1 = fopen("/home/lab/Documents/157/21jan/my1.txt","r");
	FILE *file2 = fopen("/home/lab/Documents/157/21jan/my3.txt","r");
	int isequal = 1;
	if(!file1 || !file2)
		printf("File Not Found\n");
	else{
		char *s1=NULL,  *s2=NULL;
		size_t l1, l2;
		while(1){
			int ch1  = getline(&s1, &l1, file1);
			int ch2  = getline(&s2, &l2, file2);
			if((ch1==0 && ch2==-1) || (ch1==-1 && ch2==0)){
				isequal=0;
				break;
			}
			if(ch1==-1 && ch2==-1)
				break;
			if(strcmp(s1, s2)){
				isequal=0;
				break;
			}
		}
		if(isequal)
			printf("Files Are Equal\n");
		else
			printf("Files Are Not Equal\n");
		close(file1);
		close(file2);
	}
}
