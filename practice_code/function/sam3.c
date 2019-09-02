#include <stdio.h>
void fun()
{
    static int k=0;
    printf("%d",k);
    k++;
}
int main()
{
    for (int i = 0; i < 10; ++i)
    {
        fun();
    }
}
// Use of static variable