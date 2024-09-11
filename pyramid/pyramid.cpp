#include<iostream>
using namespace std;

int main()
{
	int i, space, row, k=0;
	cout<<"enter the number of rows";
	cin>>row;
	
	for(i=1;i<=row;++i)
	{
		for(space=1;space<=(row-i);++space)
		{
			cout<<"  ";
		}
		while(k!=(i-1))
		{
			cout<<"*"<<" ";
			++k;
		}
		k=0;
		cout<<"\n";
	} 
	
	return 0;
}
