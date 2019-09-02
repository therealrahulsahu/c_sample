#include <stdio.h>
int (*fptr)(int a, int b);
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    fptr=add;
    printf("%d ", fptr(1,2));

    fptr=sub;
    printf("%d ", fptr(1,2));
}
// pointer to function