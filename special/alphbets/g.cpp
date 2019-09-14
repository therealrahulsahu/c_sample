#include<iostream>
void g()
{
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6-i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        if(i<3)
        for(int j=0;j<15+2*i;j++)
        cout<<"*";
        else
        for(int j=0;j<15+2*i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<25-i;j++)
        cout<<" ";
        if(i>5)
        for(int j=0;j<2*i-2;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<i+1;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        if(i>2)
        for(int j=0;j<25-2*i;j++)
        cout<<"*";
        else
        for(int j=0;j<25-2*i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}