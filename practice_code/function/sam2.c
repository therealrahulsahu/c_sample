#include <stdio.h>
int main()
{
    int x = 5;
    {
        int x = 6;
        printf("%d",x);
    }
    printf("%d",x);
}