#include<iostream>
void d()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<22+2*i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<17;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<26-2*i;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}