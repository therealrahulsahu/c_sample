#include <stdio.h>
int main()
{
    int x[]={1,2,3,4,5,0};

    int *p=x;
    while(*p)
        printf("%d ",*p++);
}