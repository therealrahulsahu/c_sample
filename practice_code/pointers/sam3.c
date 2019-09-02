#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=2, j=3, k=4;
    int ***data = (int ***)malloc(i* sizeof(int **));
    /*for (int l = 0; l < i; ++l) {
        data[l] = (int **)malloc(j* sizeof(int *));
    }*/
    for (int m = 0; m < i; ++m) {
        data[m] = (int **)malloc(j* sizeof(int *));
        for (int l = 0; l < j; ++l) {
            data[m][l]= (int *)malloc(k* sizeof(int));
        }
    }
    int count=0;
    for (int n = 0; n < i; ++n) {
        for (int l = 0; l < j; ++l) {
            for (int m = 0; m < k; ++m) {
                data[n][l][m]=count;
                count++;
            }
        }
    }
    for (int n = 0; n < i; ++n) {
        for (int l = 0; l < j; ++l) {
            for (int m = 0; m < k; ++m) {
                printf("%3d ",data[n][l][m]);
            }
            printf("\n");
        }
        printf("\n");
    }

}
// 3d Array dynamic allocation