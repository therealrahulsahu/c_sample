#include <stdio.h>
int main()
{
    int n=5;
    //scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for (int j = n; j > n-i-1; --j) {
            printf("%d ",j);
        }
        for (int j = n; j > i+1; --j) {
            printf("%d ",n-i);
        }
        for (int j = n; j > i+1; --j) {
            printf("%d ",n-i);
        }
        for (int j = n-i+1; j <= n; ++j) {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=1;i<n;i++)
    {
        for (int j = n; j > i; --j) {
            printf("%d ",j);
        }
        for (int j = 0; j < i; ++j) {
            printf("%d ",i+1);
        }
        for (int j = 0; j < i; ++j) {
            printf("%d ",i+1);
        }
        for (int j = i+2; j <= n; ++j) {
            printf("%d ",j);
        }
        printf("\n");
    }

}