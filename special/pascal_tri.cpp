#include <iostream>
using namespace std;

double combination_n(int n, int r)
{
    int large = r;
    int small = n-r;
    if(small>large)
        large = (large + small)-(small=large);
    double numo =1;
    for (int i = n; i > large; --i)
        numo*=(double)i;
    double deno = 1;
    for (int i = small; i > 1 ; --i)
        deno*=(double)i;
    double result = numo/deno;
    return result;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <=i; ++j) {
            cout<<combination_n(i, j)<<"  ";
        }
        cout<<endl;
    }
    //cout<<combination_n(20, 10)<<endl;
}