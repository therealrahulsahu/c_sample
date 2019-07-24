#include <iostream>
using namespace std;
int add(int a=0, int b=0)
{
    return a + b;
}
int main()
{
    cout<<"Sum : "<<add(5,6);
}