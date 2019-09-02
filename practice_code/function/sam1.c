#include <stdio.h>
void f1()
{
    printf("f1\n");
    f2();
}
void f2()
{
    printf("f2\n");
}
int main()
{
    f1();
}
// Only gives warning