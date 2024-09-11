// HARIS QAYYUM KHAN    2011123
#include <iostream>
#include<fstream>
using namespace std;
struct student{
char name[20];
int RegNo;
float GPA;
};
int main()
{student s1[10];
for(int i=0;i<10;i++)
{cout<<"Name of Student "<<i+1<<": ";cin>>s1[i].name;
cout<<"enter the student's Reg No. : ";cin>>s1[i].RegNo;
cout<<"enter the student's GPA upto two decimal places : ";cin>>s1[i].GPA;
}
ofstream lolfile;
lolfile.open ("abc.txt", ios::out | ios::trunc );
lolfile.close();
for(int i=0;i<10;i++){
lolfile.open ("abc.txt", ios::out | ios::app );
lolfile <<"Name"<<i+1<<": "<<s1[i].name<<endl;
lolfile <<"Reg No. : "<<s1[i].RegNo<<endl;
lolfile <<"gpa "<<s1[i].GPA;
lolfile <<"\n====\n";
lolfile.close();}
cout<<endl;
string data;
ifstream lolfile2 ("abc.txt");
while (!lolfile2.eof() )
{
getline (lolfile2,data);
cout << data << endl;
}
lolfile2.close();
system ("pause");
return 0;
}
