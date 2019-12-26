#include <stdlib.h>
#include <stdio.h>
struct student_data
{
    char *name;
    int roll;
};
struct stud_list
{
    struct student_data *data;
    struct stud_list *next;
};
struct student_data *new_student(char *name2, int roll2)
{
    struct student_data *temp = calloc(1, sizeof(struct student_data));
    temp->name = name2;
    temp->roll = roll2;
    return temp;
}
struct stud_list *new_stud_node(struct student_data *data)
{
    struct stud_list *temp = calloc(1, sizeof(struct stud_list));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void push(struct stud_list **LL, struct student_data *var)
{
    if(*LL==NULL)
    {
        *LL = new_stud_node(var);
    }
    else
    {
        struct stud_list *i=NULL;
        for ( i= *LL; i->next != NULL ; i = i->next);
        i->next = new_stud_node(var);
    }
}
struct student_data *pop(struct stud_list **LL)
{
    if(*LL==NULL)
    {
        return new_student("NULL", -1);
    }
    else if((*LL)->next == NULL)
    {
        struct student_data *ret = (*LL)->data;
        free(*LL);
        *LL = NULL;
        return ret;
    }
    else
    {
        struct stud_list *i=NULL;
        for ( i = *LL; i->next->next != NULL ; i = i->next);
        struct student_data *ret = i->next->data;
        free(i->next);
        i->next = NULL;
        return ret;
    }
}
int main()
{
    struct stud_list *LL = NULL;
    while(1)
    {
        printf("1 to push\n2 to pop\nelse to exit : ");
        int ch;
        scanf("%d", &ch);
        if(ch==1)
        {
            char *name = calloc(20, sizeof(char));
            int roll;
            printf("Enter Name : ");
            scanf("%s", name);
            while (1)
            {
                printf("Enter Roll : ");
                printf("%d",scanf("%d", &roll));
                if(roll>0)
                {
                    break;
                }
            }
            push(&LL, new_student(name, roll));
        }
        else if(ch==2)
        {
            struct student_data *data = pop(&LL);
            if(data->roll==-1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Popped : \n Name : %s\nRoll : %d\n", data->name, data->roll);
                free(data->name);
            }

        }
        else
        {
            break;
        }
        if(LL==NULL)
            printf("List is empty\n");
        else
        {
            struct stud_list *i = LL;
            for (; i->next != NULL ; i = i->next)
            {
                printf("-> %s", i->data->name);
            }
            printf("-> %s", i->data->name);
        }

        printf("\n");
    }
}