#include<stdio.h>
#include<string.h>
int isValidIdf( char *str)
{
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_'))
        return 0;


    for (int i = 1; i < strlen(str); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return 0;
    }


    return 1;
}
int isvalidKeyword(char* str)
{
    if (!strcmp(str, "auto") || !strcmp(str, "default")
        || !strcmp(str, "signed") || !strcmp(str, "enum")
        ||!strcmp(str, "extern") || !strcmp(str, "for")
        || !strcmp(str, "register") || !strcmp(str, "if")
        || !strcmp(str, "else")  || !strcmp(str, "int")
        || !strcmp(str, "while") || !strcmp(str, "do")
        || !strcmp(str, "break") || !strcmp(str, "continue")
        || !strcmp(str, "double") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "char")
        || !strcmp(str, "case") || !strcmp(str, "const")
        || !strcmp(str, "sizeof") || !strcmp(str, "long")
        || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned")
        || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto")
        || !strcmp(str, "union") || !strcmp(str, "volatile"))
        return (1);
    return (0);
}


int main()
{
    FILE *fp = fopen("D:\\Rahul Code\\C Git\\c_sample\\cd_lab\\14jan\\dfa_check.c", "r");

    char str[35];
    while(fscanf(fp, "%s", str)!=EOF){
        if(isvalidKeyword(str))
            printf("Keyword : %s\n", str);
        else if(isValidIdf(str))
            printf("Idf : %s\n", str);
    }
    fclose(fp);
}
