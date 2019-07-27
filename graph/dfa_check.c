#include <stdio.h>
#include <stdlib.h>
struct pos
{
    int number, state;
    struct pos *a,*b;
};
struct pos *new_node(int num, int st, struct pos *p, struct pos *q)
{
    struct pos *temp = (struct pos *)malloc(sizeof(struct pos));
    temp->number = num;
    temp->state = st;
    temp->a = p;
    temp->b = q;
    return temp;
}
struct pos *create_dfa(int **data, int n)
{
    struct pos *temp[n];
    for (int i = 0; i < n; ++i)
    {
        temp[i] = new_node(i, 0, NULL, NULL);
    }

    for (int j = 0; j < n; ++j)
    {
        temp[j]->state = data[j][0];
        temp[j]->a = temp[data[j][1]];
        temp[j]->b = temp[data[j][2]];
    }
    return temp[0];
}
int evaluate(struct pos *start, char *var)
{
    struct pos *trav = start;
    for (int i = 0; var[i] != '\0'; ++i)
    {
        if(var[i]=='a')
            trav = trav->a;
        else if(var[i]=='b')
            trav = trav->b;
    }
    return trav->state;
}
int main()
{
    printf("Enter No. of nodes : ");
    int n;
    scanf("%d",&n);
    //int data[n][3];
    int **data = (int **)malloc(n * sizeof(int *));
    for (int j = 0; j < n; ++j)
        data[j] = (int *)malloc(3 * sizeof(int));

    for (int i=0;i<n;i++)
    {
        printf("Enter %d state's output after \"a\" : ", i);
        scanf("%d",&data[i][1]);
        printf("Enter %d state's output after \"b\" : ", i);
        scanf("%d",&data[i][2]);
        printf("Enter %d's final or not in 1/0 : ", i);
        scanf("%d",&data[i][0]);
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("state: %d, node: %d, a: %d, b: %d\n", data[i][0], i, data[i][1], data[i][2]);
    }
    struct pos *start = create_dfa(data, n);
    while(1)
    {
        char *input;
        printf("\nEnter Test Case : ");
        scanf("%s",input);
        if(evaluate(start, input))
            printf("True");
        else
            printf("False");

    }
}
