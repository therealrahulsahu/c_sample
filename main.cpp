#include <iostream>
using namespace std;
struct data
{
    int *arr;
};
typedef struct data data;
void print(data dt)
{
    cout<<dt.arr[0]<<" "<<dt.arr[1]<<" "<<dt.arr[2]<<" ";
}
int main()
{

    data dt;
    dt.arr=new int[3];
    dt.arr[0]=1;
    dt.arr[1]=2;
    dt.arr[2]=3;
    print(dt);

}