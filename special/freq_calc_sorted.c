#include<iostream>
using namespace std;
int binary_search(int const *data,int n,int target)
{
    int start=0, end=n-1;
    int index = -1;
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(target == data[mid]){
            index = mid;
            break;
        }
        else if(target < data[mid])
            end = mid-1;
        else if(target > data[mid])
            start = mid+1;
    }
    return index;
}
int ch_freq(int *data, int n, int index)
{
    int count = 1;
    int target = data[index];
    //to left
    int i = index-1;
    while(data[i]==target)
    {
        count++;
        i--;
        if(i==-1)
            break;
    }
    //to right
    i = index+1;
    while(data[i]==target)
    {
        count++;
        i++;
        if(i==n)
            break;
    }
    return count;
}
int main()
{
    //int a[]={2,3,4,5,6,7,7,7,8,9};
    int a[]={1,3,5,8,12,12,12,12,45,45,45,67,78,78,78,101};
    int index = binary_search(a,16,78);
    int times = ch_freq(a, 16, index);
    printf("Times %d\n", times);
}