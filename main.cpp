#include<iostream>
using namespace std;
int main()
{
    char str[10][10] ={'\0'};
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout<<str[i][j]<<' ';
        }
        cout<<endl;
    }
}