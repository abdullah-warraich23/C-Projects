#include <iostream>
using namespace std;

int main()
{
	int palindrome , reverse=0;
	cout<<"enter number:  ";
	cin>>palindrome;
	int num=0;
	int key=palindrome;
	
	for(int i=1 ; palindrome!=0 ; i++)
	{
		num=palindrome%10;
		palindrome=palindrome/10;
		reverse=num+(reverse*10);
	}
	
	if (reverse==key)
	{
		cout<<key<<" is a palindrome number.\n";
	}
	else
	{
		cout<<key<<" is not a palindrome number.\n";
	}
	return 0;
}
