#include<stdio.h>
#include<string.h>
int main()
{
	printf("Enter String : ");
	char data[50];
	scanf("%[^\n]", data);
	printf("Length %lu\n", strlen(data));
}
