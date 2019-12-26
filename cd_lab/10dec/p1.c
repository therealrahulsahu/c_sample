//Program to find numbers greater than avg
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    float arr[n];
    float avg=0;
    for (int i = 0; i < n; ++i) {
        printf("Enter %d : ", i);
        scanf("%f", &arr[i]);
        avg+=arr[i];
    }
    avg/=n;
    for (int j = 0; j < n; ++j)
        if(arr[j]>avg)
            printf("%.2f ", arr[j]);
}