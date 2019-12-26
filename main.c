#include <stdio.h>
#include<stdlib.h>
int **initi(int n)
{
    int **temp = calloc(n, sizeof(int*));
    for (int i = 0; i < n; ++i)
        temp[i] = calloc(n, sizeof(int));
    return temp;
}
void show(int arr[][2], int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    int **mat = initi(2);
    int arr[2][2] = {0};
    show(arr, 2);
}