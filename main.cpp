#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    char *st=(char *)calloc(10, sizeof(char));
    cin>>st;
    for (int i = 0; i < st[i] != '\0'; ++i)
        st[i]^=32;
    cout<<st;
}