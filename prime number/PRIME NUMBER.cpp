#include<iostream>
using namespace std;

int main()
{
	int num, count=0;
	cout<<"enter the number you want to check for prime:   \n";
	cin>>num;
	for(int i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			count+=1;
		}
	}
	if(count==2)
	{
		cout<<"PRIME NUMBER \n";
	}
	else
	{
		cout<<"NOT A PRIME NUMBER \n";
	}
	return 0;
}
