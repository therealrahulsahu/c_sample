#include<iostream>
using namespace std;
int fn()
{
    return 1;
}
int get_fixed(int const *data, int st, int en)
{
    int mid = (st+en)/2;
    if(data[mid] == mid)
        return mid;
    if(st<=en){
        if(data[mid]<mid)
            return get_fixed(data, mid+1, en);
        else
            return get_fixed(data, st, mid-1);
    }
    return -1;
}
int main()
{
    int data[6] = {-10, -5, 3, 4, 7, 9};
    cout<<get_fixed(data, 0, 5);
}