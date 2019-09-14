#include<iostream>
using namespace std;
void space()
{
    for(int i=0;i<10;i++)
    cout<<endl;
}
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
void e()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<20;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
void f()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<20;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
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
void h()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<20;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<20;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
void i()
{
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<20;i++)
	{	
		for(int j=0;j<13;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
void j()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<13;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<8-2*i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<8-2*i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}	
	cout<<endl;
}
void k()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<9-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
void l()
{
	for(int i=0;i<23;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
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
void n()
{
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<19-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
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
void p()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<7-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<10-i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
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
void r()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<7-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
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
void t()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<17;i++)
	{
		for(int j=0;j<13;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
void u()
{
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<20;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2*i;j++)
		cout<<" ";
		for(int j=0;j<30-4*i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
}
void v()
{

	for(int i=0;i<20;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<38-2*i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<20+i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<8-2*i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}
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
void x()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<20-2*i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-i;j++)
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
		cout<<"\n";
	}
	cout<<endl;
	
}
void y()
{
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<20-2*i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<13;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
	
}
void z()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<24-3*i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<5;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<30;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<endl;
}

