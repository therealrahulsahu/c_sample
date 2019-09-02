#include <stdlib.h>
#include <stdio.h>
int main()
{
    int (*data)[3];
    data = (int *)malloc(2* sizeof(int *));

    int count = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            data[i][j]=count++;
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }

}
// pointer to array