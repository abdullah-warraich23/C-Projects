#include<iostream>
using namespace std;

class student {
	char name[10];
	int classes;
public:
	student(char,int);
	void show();
	
};

/*------------------------

student::student(char a[10],int c){
	name = a;
	classes = c;
}

student::show(){
	cout << name << " " << classes;
	
}
/*------------------------*/
int main()
{
	
	/* making a 2-D array for the 8x8 board */
	
	char x[8][8];
	
	/* '+' character representing white boxes and '*' representing black boxes */
	/* using the for loop for making alternating boxes */
	
	for(int i = 0 ; i < 8;i++)
	{
		for(int j = 0 ; j < 8;j++)
		{
			if(i%2 == 0)
			{
				if(j%2 == 0)
				{
					x[i][j] = '*';
				}
				else
				{
					x[i][j] = '+';
				}	
			}
			else
			{	
				if(j%2 == 0)
				{
					x[i][j] = '+';
				}
				else
				{
					x[i][j] = '*';
				}
			}
		}
	}
	
	/* placing the pieces on the board */
	/* using characters 'b' and  'w' for black and white respectively*/
	
	char g = 'b';
	
	for(int i = 0 ; i < 8;i++)
	{
		for(int j = 0 ; j < 8;j++)
		{		
			if(i%2 == 0 && j%2 != 0)
			{
				x[i][j] = g;
			}
			else if(i%2 != 0 && j%2 == 0)
			{
				x[i][j] = g;
			}
		}
		if(i == 2)
		{
			i = 4;
			g = 'w';
		}
	}
	
	for(int i = 0 ; i < 8;i++)
	{
		for(int j = 0 ; j < 8;j++)
		{
			if(j%2 == 0)
			{
				cout << " " << x[i][j] ;
			}
			else
			{
				cout << " " << x[i][j];
			}
		}
		cout << endl;
	}

	return 0;	
}
