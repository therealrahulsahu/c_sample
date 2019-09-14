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
