#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[50];
    printf("Enter String : ");
    scanf("%[^\n]",str);
    printf("%s",str);
}
