#include <iostream>
using namespace std;
int **magic(int n){
    if(!n%2){
        cout<<"n is even\n";
        exit(1);
    }
    int **sqr = (int **)calloc(n, sizeof(int*));
    for (int i = 0; i < n; ++i)
        sqr[i] = (int *)calloc(n, sizeof(int));
    int i=0, j=(n-1)/2;
    sqr[i][j] = 1;
    for (int key = 2; key <= n*n; ++key) {
        int k=(n+i-1)%n;
        int l=(n+j-1)%n;
        if(sqr[k][l])
            i=(i+1)%n;
        else{
            i=k;
            j=l;
        }
        sqr[i][j]=key;
    }
    return sqr;
}
int main(){
    int n=5;
    int **result = magic(n);
    cout.width(3);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}