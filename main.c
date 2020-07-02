#include<stdio.h>

enum alpha{
    a=1,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
};

int main()
{
    for (int i1 = a; i1 <= z; ++i1) {
        printf("%d ", i1);
    }
}
