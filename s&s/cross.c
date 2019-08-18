#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// To initialise array
int *ini_arr(int n)
{
    int *temp = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        temp[i] = -1;
    }
    return temp;
}

// To calculate cost of sequence
int cal_cost(int n, int *seq, int **dist)
{
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        sum+=dist[seq[i]][seq[i+1]];
    }
    return sum;
}

// To print distance matrix
void print_mat(int n, int **dist)
{
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%3d ", dist[i][j]);
        }
        printf("\n");
    }
}

// To print sequence
void print_seq(int n, int *seq)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%3d ", seq[i]);
    }
    printf("\n");
}

// To input a matrix(Default)
int **input_mat(int n)
{
    // minimum cost 13
    int data[10][10] =
            {
                    {0, 2, 8, 6, 3, 11, 17, 4, 9, 2},
                    {2, 0, 1, 2, 9, 10, 14, 5, 8, 6},
                    {8, 1, 0, 15, 12, 4, 7, 1, 2, 8},
                    {6, 2, 15, 0, 20, 5, 2, 1, 9, 6},
                    {3, 9, 12, 20, 0, 2, 1, 7, 8, 4},
                    {11, 10, 4, 5, 2, 0, 14, 11, 6, 9},
                    {17, 14, 7, 2, 1, 14, 0, 2, 3, 6},
                    {4, 5, 1, 1, 7, 11, 2, 0, 9, 6},
                    {9, 8, 2, 9, 8, 6, 3, 9, 0, 1},
                    {2, 6, 8, 6, 4, 9, 6, 6, 1, 0},
            };
    int **temp = (int **)malloc(n * sizeof(int *));
    for (int k = 0; k < n; ++k)
    {
        temp[k] = (int *)malloc(n * sizeof(int));
    }
    for (int i=0; i<n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            temp[i][j] = data[i][j];
        }
    }
    return temp;
}

// To input sequence(Default)
int *input_seq(int n)
{
    int *temp = ini_arr(n);
    for (int i = 0; i < n; ++i)
    {
        temp[i] = i;
    }
    return temp;
}

// To calculate super random
int super_rand(int n)
{
    int temp1 = rand();
    int temp2 = rand();
    return (temp1*temp2)%n;
}

// To input array with random and distinct elements
int *random_array(int n)
{
    int *temp = ini_arr(n);
    for (int i = 0; i < n; ++i)
    {
        while (1)
        {
            int break_cond = 1;
            temp[i]=rand()%n;
            for (int j = 0; j < i; ++j)
            {
                if(temp[j] == temp[i])
                {
                    break_cond = 0;
                    break;
                }
            }
            if(break_cond)
                break;
        }
    }
    return temp;
}

// To swap any three No. of seq
int *mutate_3(int n, int *seq)
{
    int ind_1, ind_2, ind_3;
    while(1)
    {
        ind_1 = super_rand(n);
        ind_2 = super_rand(n);
        ind_3 = super_rand(n);
        if(ind_1 != ind_2 && ind_1!=ind_3 && ind_2!=ind_3)
            break;
    }

    int val_1 = seq[ind_1];
    int val_2 = seq[ind_2];
    int val_3 = seq[ind_3];

    seq[ind_1] = val_2;
    seq[ind_2] = val_3;
    seq[ind_3] = val_1;

    return seq;
}

// To swap any two No. of seq
int *mutate_2(int n, int *seq)
{
    int ind_1, ind_2;
    while(1)
    {
        ind_1 = super_rand(n);
        ind_2 = super_rand(n);
        if(ind_1 != ind_2)
            break;
    }

    int val_1 = seq[ind_1];
    int val_2 = seq[ind_2];

    seq[ind_1] = val_2;
    seq[ind_2] = val_1;

    return seq;
}

// To calculate minimum cost over thousand iteration by mutation of 3
int min_cost_1000_m3(int n, int min, int *seq, int **data)
{
    for (int i = 0; i < 1000; ++i)
    {
        int val = cal_cost(n, seq, data);
        if(val<min)
            min = val;
        seq = mutate_3(n, seq);
    }
    return min;
}

// To calculate minimum cost over thousand iteration by mutation of 2
int min_cost_1000_m2(int n, int min, int *seq, int **data)
{
    for (int i = 0; i < 1000; ++i)
    {
        int val = cal_cost(n, seq, data);
        if(val<min)
            min = val;
        seq = mutate_2(n, seq);
    }
    return min;
}

// find minimum cost by mutation of 3
void find_cost_m3(int n, int *seq, int **data)
{
    int min=cal_cost(n, seq, data);
    while(1)
    {
        min = min_cost_1000_m3(n, min, seq, data);
        printf("%d\n", min);
        char ch;
        printf("Enter y to continue : ");
        scanf(" %c", &ch);
        if(ch=='y')
            continue;
        break;
    }
}

// find minimum cost by mutation of 2
void find_cost_m2(int n, int *seq, int **data)
{
    int min=cal_cost(n, seq, data);
    while(1)
    {
        min = min_cost_1000_m2(n, min, seq, data);
        printf("%d\n", min);
        char ch;
        printf("Enter y to continue : ");
        scanf(" %c", &ch);
        if(ch=='y')
            continue;
        break;
    }

}

// To crossover seq by 3 parts
void crossover_3(int n, int *p1, int *p2)
{
    int part = n/3;
    int *c1 = ini_arr(n), *c2 = ini_arr(n);
    // for c1 entry
    for (int i = part; i < n-part; ++i)
    {
        c2[i] = p2[i];
        int continue_cond=0;
        for (int j = part; j < n-part; ++j)
        {
            if(p1[i]==p2[j])
            {
                continue_cond=1;
                break;
            }
        }
        if(continue_cond)
            continue;
        int ind = i;
        while (1)
        {
            int break_cond=0;
            for (int j = 0; j < n; ++j)
            {
                if(p2[ind]==p1[j] && (j<part || j>=n-part))
                {
                    c2[j]=p1[i];
                    break_cond=1;
                    break;
                }
                else if(p2[ind]==p1[j] && j>=part && j<n-part)
                {
                    ind = j;
                    break;
                }
            }
            if(break_cond)
                break;
        }
    }
    for (int i = 0; i  < n; ++i)
    {
        if(c2[i]==-1)
            c2[i]=p1[i];
    }

    for (int i = part; i < n-part; ++i)
    {
        c1[i] = p1[i];
        int continue_cond=0;
        for (int j = part; j < n-part; ++j)
        {
            if(p2[i]==p1[j])
            {
                continue_cond=1;
                break;
            }
        }
        if(continue_cond)
            continue;
        int ind = i;
        while (1)
        {
            int break_cond=0;
            for (int j = 0; j < n; ++j)
            {
                if(p1[ind]==p2[j] && (j<part || j>=n-part))
                {
                    c1[j]=p2[i];
                    break_cond=1;
                    break;
                }
                else if(p1[ind]==p2[j] && j>=part && j<n-part)
                {
                    ind = j;
                    break;
                }
            }
            if(break_cond)
                break;
        }
    }
    for (int i = 0; i  < n; ++i)
    {
        if(c1[i]==-1)
            c1[i]=p2[i];
    }


    for (int i = 0; i < n; ++i)
    {
        p1[i] = c1[i];
        p2[i] = c2[i];
    }
    free(c1);
    free(c2);
}

// To calculate minimum cost over 1000 crossover by m3
int min_cost_1000_crossover_m3(int n, int min, int *seq1, int *seq2, int **data)
{
    for (int i = 0; i < 1000; ++i)
    {
        crossover_3(n, seq1, seq2);
        int cost1 = cal_cost(n, seq1, data);
        int cost2 = cal_cost(n, seq2, data);
        if(cost1<min)
            min = cost1;
        if(cost2<min)
            min = cost2;
        seq1 = mutate_3(n, seq1);
        seq2 = mutate_3(n, seq2);
    }
    return min;
}

// find minimum cost by crossover of parts 3 by m3
void find_cost_crossover_3_m3(int n, int *seq1, int *seq2, int **data)
{
    int cost1 = cal_cost(n, seq1, data);
    int cost2 = cal_cost(n, seq2, data);
    int min = cost1;
    if(cost2<min)
        min = cost2;
    printf("%d\n", min);
    while(1)
    {
        min = min_cost_1000_crossover_m3(n, min, seq1, seq2, data);
        printf("%d\n", min);
        char ch;
        printf("Enter y to continue : ");
        scanf(" %c", &ch);
        if(ch=='y')
            continue;
        break;
    }
}

// To calculate minimum cost over 1000 crossover by m2
int min_cost_1000_crossover_m2(int n, int min, int *seq1, int *seq2, int **data)
{
    for (int i = 0; i < 1000; ++i)
    {
        crossover_3(n, seq1, seq2);
        int cost1 = cal_cost(n, seq1, data);
        int cost2 = cal_cost(n, seq2, data);
        if(cost1<min)
            min = cost1;
        if(cost2<min)
            min = cost2;
        seq1 = mutate_2(n, seq1);
        seq2 = mutate_2(n, seq2);
    }
    return min;
}

// find minimum cost by crossover of parts 3 by m2
void find_cost_crossover_3_m2(int n, int *seq1, int *seq2, int **data)
{
    int cost1 = cal_cost(n, seq1, data);
    int cost2 = cal_cost(n, seq2, data);
    int min = cost1;
    if(cost2<min)
        min = cost2;
    printf("%d\n", min);
    while(1)
    {
        min = min_cost_1000_crossover_m2(n, min, seq1, seq2, data);
        printf("%d\n", min);
        char ch;
        printf("Enter y to continue : ");
        scanf(" %c", &ch);
        if(ch=='y')
            continue;
        break;
    }
}

// To calculate minimum cost over 1000 crossover by m3 and m2
int min_cost_1000_crossover_m2_m3(int n, int min, int *seq1, int *seq2, int **data)
{
    for (int i = 0; i < 1000; ++i)
    {
        crossover_3(n, seq1, seq2);
        int cost1 = cal_cost(n, seq1, data);
        int cost2 = cal_cost(n, seq2, data);
        if(cost1<min)
            min = cost1;
        if(cost2<min)
            min = cost2;
        seq1 = mutate_2(n, seq1);
        seq2 = mutate_2(n, seq2);
        seq1 = mutate_3(n, seq1);
        seq2 = mutate_3(n, seq2);
    }
    return min;
}

// find minimum cost by crossover of parts 3 by m3 and m2
void find_cost_crossover_3_m2_m3(int n, int *seq1, int *seq2, int **data)
{
    int cost1 = cal_cost(n, seq1, data);
    int cost2 = cal_cost(n, seq2, data);
    int min = cost1;
    if(cost2<min)
        min = cost2;
    printf("%d\n", min);
    while(1)
    {
        min = min_cost_1000_crossover_m2_m3(n, min, seq1, seq2, data);
        printf("%d\n", min);
        char ch;
        printf("Enter y to continue : ");
        scanf(" %c", &ch);
        if(ch=='y')
            continue;
        break;
    }
}

// crossover_3 with random array
int crossover_with_random(int n, int *seq, int **data)
{
    int *temp = random_array(n);
    crossover_3(n, seq, temp);
    int min = cal_cost(n, seq, data);
    int temp_cost = cal_cost(n, temp, data);
    if(temp_cost<min)
        min = temp_cost;
    return min;
}

// crossover_3 with random array 1000 iteration
int min_cost_1000_crossover_with_random(int n, int min, int *seq, int **data)
{
    for (int i = 0; i < 1000; ++i)
    {
        int temp = crossover_with_random(n, seq, data);
        if(temp<min)
            min = temp;
    }
    return min;
}

// min cost by crossover with random array
void find_cost_crossover_with_randarray(int n, int *seq, int **data)
{
    int min = cal_cost(n, seq, data);
    printf("%d\n", min);
    while(1)
    {
        min = min_cost_1000_crossover_with_random(n, min, seq, data);
        printf("%d\n", min);
        char ch;
        printf("Enter y to continue : ");
        scanf(" %c", &ch);
        if(ch=='y')
            continue;
        break;
    }
}
int main()
{
    srand(time(0));
    int n = 10;
    // printf("Enter length of sequence (<10) : ");
    // scanf("%d", &n);

    int **data = input_mat(n);

    //int temp1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //int temp2[] = {1, 3, 4, 2, 0, 6, 8, 5, 7, 9};
    //int temp2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int *seq1 = random_array(n);
    // int *seq2 = random_array(n);

    //find_cost_m2(n, seq1, data);

    //find_cost_m3(n, seq1, data);

    //find_cost_crossover_3_m3(n, seq1, seq2, data);

    //find_cost_crossover_3_m2(n, seq1, seq2, data);

    //find_cost_crossover_3_m2_m3(n, seq1, seq2, data);

    find_cost_crossover_with_randarray(n, seq1, data);

    return 0;
}
