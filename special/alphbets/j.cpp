int j()
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
