#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = fopen("D:\\Rahul Code\\C Git\\c_sample\\cd_lab\\14jan\\dfa_check.c", "r");
    char *line = NULL;
    size_t len = 0;

    if (fp == NULL)
        exit(1);
    int i=1;
    while (getline(&line, &len, fp) != -1) {
        printf("%d %s", i, line);
        i++;
    }

    fclose(fp);
}