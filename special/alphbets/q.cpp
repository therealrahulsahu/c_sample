#include<iostream>
void q()
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
        for(int j=0;j<18;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<10+i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<3-i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<13+i;j++)
        cout<<" ";
        for(int j=0;j<5-i;j++)
        cout<<"*";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2*i;j++)
        cout<<" ";
        for(int j=0;j<28-2*i;j++)
        cout<<"*";
        if(i==2)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<25+i;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}