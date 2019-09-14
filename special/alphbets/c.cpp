#include<iostream>
void c()
{
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5-i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        if(i<3)
        for(int j=0;j<20;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        if(i>2)
        for(int j=0;j<20;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}