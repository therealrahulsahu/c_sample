#include<iostream>
void o()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4-2*i;j++)
        cout<<" ";
        for(int j=0;j<20+4*i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<18;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2*i;j++)
        cout<<" ";
        for(int j=0;j<28-4*i;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}