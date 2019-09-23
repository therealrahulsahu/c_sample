#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *st=calloc(10, sizeof(char));
    scanf("%s",st);
    printf("%s",st);
}