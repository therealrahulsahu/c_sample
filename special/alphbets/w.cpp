#include<iostream>
void w()
{
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<20;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<8-i;j++)
        cout<<" ";
        for(int j=0;j<4+2*i;j++)
        cout<<"*";
        for(int j=0;j<8-i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<5-i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<2*i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<5-i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<4-i;j++)
        cout<<"*";
        for(int j=0;j<12+2*i;j++)
        cout<<" ";
        for(int j=0;j<5-i;j++)
        cout<<"*";
        for(int j=0;j<4;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}