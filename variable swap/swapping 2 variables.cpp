#include<iostream>
using namespace std;
int main()
{
	int a,b,swap;
	cout<<"enter variable 'a':  ";
	cin>>a;
	cout<<"enter variable 'b':  ";
	cin>>b;
	cout<<"before swap a= "<<a<<"  and b= "<<b<<endl;
	swap=a;
	a=b;
	b=swap;
	cout<<"after swap a= "<<a<<" and b= "<<b<<endl;
	
}
