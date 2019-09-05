#include <stdio.h>
int main()
{
    int q=1;
    //scanf("%d",&q);
    for (int i = 0; i < q; ++i)
    {
        int n;
        scanf("%d",&n);
        int d1,d2;
        scanf("%d %d",&d1,&d2);
        if(d2<d1)
            d1=(d1+d2)-(d2=d1);
        for (int k = 0; k < n; ++k)
            printf("%d ",d1*(n-1-k)+d2*k);
        printf("\n");
    }
    return 0;
}