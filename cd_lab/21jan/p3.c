#include<stdio.h>
int main()
{
	FILE *file = fopen("/home/lab/Documents/157/21jan/my1.txt","r");
	int n=5;
	char *data=NULL;
	size_t len;
	int pass=1;
	while(pass){
		int i=n;
		while(i--){
			int pres = getline(&data, &len, file);
			if(pres!=-1)
				printf("%d : %s", n-i ,data);
			else
				break;
		}
		if(i!=-1)
			break;
		printf("Enter '0' to End : ");
		scanf("%d", &pass);
		if(!pass)
			break;
	}
	fclose(file);
}
