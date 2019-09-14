#include<iostream>
void a()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<20-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<" ";
        }    
        for(int j=0;j<5-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<5;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<22+2*i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<5;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<18+2*i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}