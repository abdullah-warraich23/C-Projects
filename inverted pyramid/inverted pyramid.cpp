#include<iostream>
using namespace std;

int main()
{
	int i, space, row, j;
	cout<<"enter the number of rows:  ";
	cin>>row;
	
	for(i=row;i>=1;--i)
	{
		for(space=0;space<(row-i);++space)
		
			cout<<"  ";
		
		for(j=i; j<=(2*i-1);++j)
		
			cout<<"* ";
		
		for(j=0;j<i-1;++j)
		
			cout<<"* ";
		
		cout<<endl;
	} 
	
	return 0;
}
