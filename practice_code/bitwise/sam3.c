#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int count = 0;
    int i = 1024;
    for (;i;i>>=1) {
        printf("%d ",i);
        count+=1;
    }
    printf("\n%d",count);
}