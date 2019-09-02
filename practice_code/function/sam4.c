#include <stdio.h>
int fib(int n)
{
    if(n<=2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    printf("%d ",fib(4));
}
// fibbonaci series