#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    int stars, spaces;
    cout<<"Enter rows to print : ";
    cin>>rows;   
    stars = 1;
    spaces = rows - 1;
    /* Iterate through rows */
    for(i=1; i<rows*2; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
        {
            cout<<" ";
		}
        /* Print stars */
        for(j=1; j<stars*2; j++)
        {
            cout<<"*";
		}
        /* Move to next line */
        cout<<"\n";    
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    return 0;
}
