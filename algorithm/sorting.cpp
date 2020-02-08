#include <iostream>
using namespace std;
void swap(int *a, int *b){
    *a = (*a + *b)-(*b=*a);
}
void selection_sort(int *data, int n){
    for(int i=0;i<n;i++){
        int small = i;
        for(int j=i+1;j<n;j++){
            if(data[j]<data[small]){
                small = j;
            }
            swap(data + i, data + small);
        }
    }
}
void rec_selection_sort(int *data, int n, int i=0){
    if(i==n-1){
        return;
    }else{
        int small = i;
        for (int j = i+1; j < n; ++j) {
            if(data[j]<data[small]){
                small = j;
            }
            swap(data + i, data + small);
        }
        rec_selection_sort(data, n, i+1);
    }
}
void bubble_sort(int *data, int n){
    for (int i = 0; i < n-1; ++i) {
        for(int j=0;j<n-i-1;j++){
            if(data[j+1]<data[j]){
                swap(data+j+1, data+j);
            }
        }
    }
}
void rec_bubble_sort(int *data, int n){
    if(n==1)
        return;
    else{
        for(int i=0;i<n-1;i++){
            if(data[i]>data[i+1])
                swap(data+i, data+i+1);
        }
        return rec_bubble_sort(data, n-1);
    }
}
void insertion_sort(int *data, int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}
void rec_insertion_sort(int *data, int n){
    if (n <= 1){
        return;
    }else{
        rec_insertion_sort( data, n-1 );
        int key = data[n-1];
        int j = n-2;
        while (j >= 0 && data[j] > key)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;
    }
}
void merge(int *data, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = data[l + i];
    for (j = 0; j < n2; j++)
        R[j] = data[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            data[k] = L[i];
            i++;
        }
        else
        {
            data[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        data[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        data[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int *data, int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        merge_sort(data, l, m);
        merge_sort(data, m+1, r);
        merge(data, l, m, r);
    }
}
int partition (int *data, int low, int high)
{
    int pivot = data[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (data[j] < pivot)
        {
            i++;
            swap(data+i, data+j);
        }
    }
    swap(data+i+1, data+high);
    return (i + 1);
}
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}
int main(){
    int data[] = {3,4 ,21,5,21,1,5, 5, 6,6,6,0,2,2,2,-1};
    int len = sizeof(data)/ sizeof(data[0]);
    quick_sort(data, 0, len-1);
    for (int k = 0; k < len; ++k) {
        cout<<data[k]<<" ";
    }
}
