#include<iostream>
void m()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        if(i>2)
        for(int j=0;j<i-2;j++)
        cout<<" ";
        if(i<3)
        for(int j=0;j<i+3;j++)
        cout<<"*";
        if(i>2)
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<17-2*i;j++)
        cout<<" ";
        if(i<3)
        for(int j=0;j<i+3;j++)
        cout<<"*";
        if(i>2)
        for(int j=0;j<5;j++)
        cout<<"*";
        if(i>2)
        for(int j=0;j<i-2;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<7+i;j++)
        cout<<" ";
        for(int j=0;j<9-2*i;j++)
        cout<<"*";
        for(int j=0;j<6+i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<23;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}