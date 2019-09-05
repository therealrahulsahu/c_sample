#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *dec_to_bin(int x)
{
    char res[50];
    int ind = 0;
    while(x)
    {
        res[ind++] = (char)((x&1) + 48);
        x >>= 1;
    }
    res[ind]='\0';
    strrev(res);

    unsigned int len = strlen(res);
    char *final = (char *)malloc((len+1)* sizeof(char));
    strcpy(final, res);
    return final;
}
int dec_to_bin_integer(int x)
{
    int result = 0, multi = 1;
    while(x)
    {
        result+= (x&1) * multi;
        multi*=10;
        x >>= 1;
    }
    return result;
}
int main()
{
    //printf("add : %d sub : %d\n", bit_add(3,4), bit_sub(5, 14));
    /*if(bit_odd(12))
        printf("Odd No.\n");
    else
        printf("Even No.\n");*/
    /*int a=5, b=7;
    bit_swap(&a, &b);
    printf("x : %d , y : %d \n", a, b);*/
    /*int n = 321556;
    printf("%d to bin : %s\n", n, dec_to_bin(n));*/
    /*for (int i = 0; i < 100; ++i) {
        printf("%3d :: %7d\n", i, dec_to_bin_integer(i));
    }*/
    printf("%3d :: %7d\n", 11, dec_to_bin_integer(11));

    return 0;
}