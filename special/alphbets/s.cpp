#include<iostream>
void s()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4-2*i;j++)
        cout<<" ";
        for(int j=0;j<20+4*i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2*i;j++)
        cout<<" ";
        for(int j=0;j<25;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<24;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2*i;j++)
        cout<<" ";
        for(int j=0;j<29-4*i;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}