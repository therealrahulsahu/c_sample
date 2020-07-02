#include<iostream>
#include <regex>
using namespace std;
int main()
{
    int n;
    cin>>n;
    regex Reg(R"((\d+)\[(\w+)\])");
    while(n--){
        string data;
        cin>>data;
        while (regex_search(data, Reg)){
            
        }
        cout<<data<<endl;
    }
}