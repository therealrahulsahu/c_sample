#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = fopen("D:\\Rahul Code\\C Git\\c_sample\\cd_lab\\14jan\\dfa_check.c", "r");
    if (fp == NULL)
        exit(1);
    int i=1;
    char ch[100];
    while (fscanf(fp, "%s", ch) != -1) {
        i++;
    }
    printf("No. of words : %d\n", i);
    fclose(fp);
}