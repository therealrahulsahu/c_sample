#include <stdio.h>
#include <stdlib.h>
#define PID 0
#define AT 1
#define BT 2
#define TAT 3
#define WT 4
struct gt_node
{
    int pid, st, et;
    struct gt_node *next;
};

void output_chart(struct gt_node *);
struct gt_node *push(struct gt_node *, int, int, int);
int **input_data(int);
void output_data(int, int **);
void output_seq(int, struct gt_node *);
int **copy(int, int **);
void sp2(int *, int *);
void swap(int *, int *);
int **sort(int, int **, int);
int **FCFS(int, int **);
int **SJF(int, int **);
int **SRTN(int, int **);


int main()
{
    int n;
    printf("Enter No. of processes : ");
    scanf("%d",&n);
    int **data = input_data(n);
    printf("\nEntered Seq :\n");
    output_data(n, data);
    printf("\nFCFS :\n");
    output_data(n, FCFS(n, data));
    printf("\nSJF :\n");
    output_data(n, SJF(n,data));
    printf("\nSRTN :\n");
    output_data(n, SRTN(n,data));
    free(data);
}


void output_chart(struct gt_node *head)
{
    for (struct gt_node *i = head; i!=NULL ; i=i->next) {
        printf("Id : %3d   st : %3d   et : %3d\n",i->pid, i->st, i->et);
    }
}
struct gt_node *push(struct gt_node *head, int pid, int st, int et)
{
    if(head==NULL)
    {
        struct gt_node *temp = calloc(1, sizeof(struct gt_node));
        temp->pid = pid;
        temp->st = st;
        temp->et = et;
        return temp;
    }
    else
        head->next = push(head->next, pid, st, et);
}
int **input_data(int n)
{
    int **data = calloc(n, sizeof(int*));
    for (int i = 0; i < n; ++i)
        data[i]=calloc(5, sizeof(int));

    for(int i=0;i<n;i++)
    {
        data[i][0] = i+1;
        printf("Enter\nAT   for PId %d : ",i+1);
        scanf("%d",&data[i][1]);
        printf("BT   for PId %d : ",i+1);
        scanf("%d",&data[i][2]);
        data[i][3]=0;
        data[i][4]=0;
    }

    return data;
}
void output_data(int n, int **data)
{
    for (int i = 0; i < n; ++i)
    {
        printf("PId : %3d  AT : %3d  BT  : %3d  TAT : %3d  WT : %d\n",data[i][0], data[i][1], data[i][2], data[i][3], data[i][4]);
    }
}
void output_seq(int n, struct gt_node *head)
{
    int *bits = calloc(n, sizeof(int));
    for (struct gt_node *i = head; i!=NULL ; i=i->next) {
        if(!bits[i->pid-1])
        {
            printf("->%d ",i->pid);
            bits[i->pid-1]++;
        }
    }
    printf("\n");
}
int **copy(int n, int **data)
{
    int **temp = calloc(n, sizeof(int*));
    for (int i = 0; i < n; ++i)
        temp[i]=calloc(5, sizeof(int));

    for(int i=0;i<n;i++)
    {
        temp[i][0] = data[i][0];
        temp[i][1] = data[i][1];
        temp[i][2] = data[i][2];
        temp[i][3] = data[i][3];
        temp[i][4] = data[i][4];
    }

    return temp;
}
void sp2(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void swap(int *p, int *q)
{
    for (int i = 0; i < 5; ++i) {
        sp2(p+i,q+i);
    }
}
int **sort(int n, int **data, int type)
{
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if(data[i][type]>data[j][type])
                swap(data[i],data[j]);
        }
    }
    return data;
}
int **FCFS(int n, int **original)
{
    int **data = copy(n, original);
    int gt=0;
    struct gt_node *chart = NULL;
    data = sort(n, data, AT);
    int i=0;
    while(1)
    {
        if(gt<data[i][1])
        {
            chart = push(chart, 0, gt, data[i][1]);
            gt = data[i][1];
        }
        chart = push(chart, data[i][0], gt, gt+data[i][2]);
        gt+=data[i][2];
        i++;
        if(i==n)
            break;
    }

    //output_chart(chart);
    output_seq(n, chart);
    free(data);
    data=copy(n, original);
    for(struct gt_node *i=chart;i!=NULL;i=i->next)
    {
        if(i->pid==0)
            continue;
        int end = i->et;
        int id = i->pid-1;
        int at = data[id][1];
        data[id][3] = end - at;
        data[id][4] = data[id][3] - data[id][2];
    }
    free(chart);
    return data;
}
int **SJF(int n, int **original)
{
    int **data = copy(n, original);
    struct gt_node *chart = NULL;
    data = sort(n, data, BT);
    int gt=0;
    int j=0;
    int check=0;
    int zeros=0;
    for(int k=0;k<n;k++)
    {
        if(data[k][BT]==0)
            zeros++;
    }
    while(1)
    {
        if(gt<data[j][AT] || data[j][BT]==0)
        {
            j++;
            check++;
        }
        else
        {
            chart = push(chart, data[j][PID], gt, gt+data[j][BT]);
            gt+=data[j][BT];
            data[j][BT]=0;
            zeros++;
            check=0;
            j=0;
        }
        if(zeros==n)
            break;
        if(check==n)
        {
            j=0;
            chart = push(chart, 0, gt, gt+1);
            gt++;
            check=0;
        }
    }
    //output_chart(chart);
    output_seq(n, chart);
    free(data);
    data=copy(n, original);
    for(struct gt_node *i=chart;i!=NULL;i=i->next)
    {
        if(i->pid==0)
            continue;
        int end = i->et;
        int id = i->pid-1;
        int at = data[id][AT];
        data[id][TAT] = end - at;
        data[id][WT] = data[id][TAT] - data[id][BT];
    }
    free(chart);
    return data;
}
int **SRTN(int n, int **original)
{
    int **data = copy(n, original);
    struct gt_node *chart = NULL;
    data = sort(n, data, BT);
    int gt=0;
    int j=0;
    int check=0;
    int zeros=0;
    for(int k=0;k<n;k++)
    {
        if(data[k][BT]==0)
            zeros++;
    }
    while(1)
    {
        if(gt<data[j][AT] || data[j][BT]==0)
        {
            j++;
            check++;
        }
        else
        {
            chart = push(chart, data[j][PID], gt, gt+1);
            gt++;
            data[j][BT]--;
            if(data[j][BT]==0)
                zeros++;
            check=0;
            j=0;
            data = sort(n, data, BT);
        }
        if(zeros==n)
            break;
        if(check==n)
        {
            j=0;
            chart = push(chart, 0, gt, gt+1);
            gt++;
            check=0;
        }
    }
    //output_chart(chart);
    output_seq(n, chart);
    free(data);
    data=copy(n, original);
    for(struct gt_node *i=chart;i!=NULL;i=i->next)
    {
        if(i->pid==0)
            continue;
        int end = i->et;
        int id = i->pid-1;
        int at = data[id][AT];
        data[id][TAT] = end - at;
        data[id][WT] = data[id][TAT] - data[id][BT];
    }
    free(chart);
    return data;
}
