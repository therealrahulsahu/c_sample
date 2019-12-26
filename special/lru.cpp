#include<iostream>
using namespace std;
int search(const int *cache, int size, int data)
{
    int index = -1;
    for (int i = 0; i < size; ++i)
    {
        if(cache[i] == data)
        {
            index = i;
            break;
        }
    }
    return index;
}
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void found_swap(int *cache, int size, int index)
{
    int to_sp = cache[index];
    for (int i = index; i < size-1; ++i)
        swap(cache + i, cache + i+1);
    cache[size-1] = to_sp;
}
void not_found_add(int *cache, int *size, int cs, int data)
{
    if(*size < cs)
    {
        cache[*size] = data;
        (*size)++;
    }
    else
    {
        for (int i = 0; i < cs-1; ++i)
            swap(cache + i, cache + i+1);
        cache[cs-1] = data;
    }
}
int cache_hit_LRU(int *entered, int n, int cs)
{
    int *cache = new int[cs], size = 0, count = 0;
    for (int i = 0; i < n; ++i)
    {
        if(int index = search(cache, size, entered[i]) == -1)
            not_found_add(cache, &size, cs, entered[i]);
        else
            (count++ , found_swap(cache, size, index));
    }
    return count;
}
int main()
{
    int n=21, cs;
    int entered[] = {1, 2, 3, 1, 2, 5, 6, 5, 6, 3, 4, 5, 6, 6, 7, 5, 3, 7, 1, 4, 9};
    cout<<"Enter Cache size :";
    cin>>cs;

    cout<<"Cache Used : "<<cache_hit_LRU(entered, n, cs)<<endl;
}