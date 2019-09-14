#include<iostream>
void b()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<20+2*i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<15;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        if(i==0 || i==2)
        cout<<"****";
        if(i==1)
        cout<<"**";
        for(int j=0;j<20;j++)
        {
            cout<<"*";
        }    
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        cout<<"*";
        for(int j=0;j<15;j++)
        cout<<" ";
        for(int j=0;j<5;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<24-2*i;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    
    
}