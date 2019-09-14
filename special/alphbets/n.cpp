int n()
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
