#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *time = calloc(n, sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",time+i);
    int result = 0;
    int max = -1;
    for(int i=0;i<n;i++)
    {
        int st = 0;
        int complete=0;
        int var = i;
        int trave = n;
        while(trave--)
        {
            if(var==n)
                var = 0;
            if(time[var]<=st)
                complete++;
            var++;
            st++;
        }

        if(result < complete)
        {
            result = complete;
            max = i+1;
        }
    }
    printf("%d",max);
}