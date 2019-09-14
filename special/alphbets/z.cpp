int z()
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
