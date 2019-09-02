#include <stdio.h>
int bit_add(int x, int y)
{
    if(y)
        bit_add(x^y, (x&y)<<1);
    else
        return x;
}
int bit_sub(int x, int y)
{
    if(y)
        bit_sub(x^y, ((~x)&y)<<1);
    else
        return x;
}
int bit_odd(int x)
{
    return x&1;
}
int bit_swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
int main()
{
    //printf("add : %d sub : %d\n", bit_add(3,4), bit_sub(5, 14));
    /*if(bit_odd(12))
        printf("Odd No.\n");
    else
        printf("Even No.\n");*/
    int a=5, b=7;
    bit_swap(&a, &b);
    printf("x : %d , y : %d \n", a, b);
    return 0;
}