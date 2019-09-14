int v()
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
