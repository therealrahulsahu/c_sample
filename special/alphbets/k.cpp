int k()
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
