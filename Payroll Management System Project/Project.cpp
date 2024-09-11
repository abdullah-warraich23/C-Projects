//2016186
//2016257

#include <iostream>
#include <string.h>
#include <cstdlib>
#include<conio.h>
using namespace std;



string deps[20];



class room
{
	public:
		
	int roomnum;
	string DOCI; // date of check in
	string DOCO; // date of check out 
	
	protected:
		
        
		string type;
		int rate;
		int status;
		int state;
		
		
	public:
		
		room ()
		{
			roomnum = 0;
			type = " ";
			rate = 0;
			status = 0;
			state = 0;
			DOCI = " ";
			DOCO = " ";
			
		}
		
//		void addrooms()
//		{
//			
//			cout << endl << endl << "Enter the type of room: ";
//			cin >> type;
//			cout << endl <<"Enter the Price of room: ";
//			cin >> rate;
//			cout <<  endl << "Enter the Status of the room: ";
//			cin >> status;
//			cout << endl << "Enter the State of room: ";
//			cin >> state;
//			
//		}
       void singleroom()
	   {
	   	type = "Single";
		rate = 2000;
		status = 1;
		state = 1;
	   } 
	   
	   void doubleroom()
	   {
	   	type = "double";
		rate = 4000;
		status = 1;
		state = 1;
	   } 
	   
	   void familyroom()
	   {
	   	type = "Family Suite";
		rate = 6000;
		status = 1;
		state = 1;
	   } 
	   
	   void displayroom (int n)
	   {
	   	cout << endl << endl << "Room# " << roomnum;
	   	cout << endl << "Room Type: " << type;
	   	cout << endl << "Rate: " << rate;
	   	cout << endl << "Status: ";
	   	
	   	if (status == 1)
	   	cout << "Avalible";	   	
	   	else
	   	cout << "Unavalible";
	   	
	   	cout << endl << "State: ";
	   	
	   	if (state == 1)
	   	cout << "clean";	   	
	   	else
	   	cout << "Dirty";
	   	
	   }
	   
	   	int statuscheck ()
	   	{
	   		return status;
		}
		
		int statecheck ()
		{
			return state;
		}
		
		int bookroom ()
		{
			status = 0;
			cout << endl << "Enter the date of Check in: ";
			cin >> DOCI;
			
			cout << endl << "Enter the Date when the customer will check out: ";
			cin >> DOCO;
			
			cout<< endl << "Room Booked!"<<endl << endl;
			
			system ("pause");
		}
		
		void checkout ()
		{
			status = 1;
			cout << endl << endl << "Room Checked Out!" << endl << endl;
			system("pause");
		}
		
		void displaydate(int n)
		{
			if (DOCI != " ")
			{
			cout << endl << "Room# " << n + 1 << "      " << DOCI << endl;
		    }
		    
		    else 
		    {
		    	cout << endl << "Room# " << n + 1 << "      " << "Room Not Booked " << endl;
			}
		}
		
	   	
	
	
};

class staff
{
	protected:
		
		
		
		
		
	public:
		
		int age;
		string department;
		string designation;
		string name;
	    int id;
		
	    staff ()
	    {
        id = 0;
		name = " ";
	    age = 0;
		department = " ";
		designation = " ";
		}
		
	void addstaff()
	{
		    cout << endl << endl << "Enter the ID of the Staff: ";
			cin >> id;
			cout << endl <<"Enter the Name of the Staff: ";
			cin >> name;
			cout << endl << "Enter the Age of the Staff: ";
			cin >> age;
			cout << endl << "Enter the Department of the Staff (" ;
			
			for (int i = 0; i < 20; i++)
			{
				if( deps[i] != " " )
				{
					cout << " " << deps[i] << " | ";
				}
			}
			
			cout << ")";
			cin >> department;
			cout << endl << "Enter the designation of the staff";
			cin >> designation;
			
	}	
	
	void deletestaff()
	{
		id = 0;
		name = " ";
	    age = 0;
		department = " ";
		designation = " ";
	}
	
	void displaystaff()
	{	if(id != 0)
	    {
		
		cout << endl << endl << "ID: "<<id;
		cout<<endl <<"Name: "<<name;
		cout<<endl<<"Age: "<<age;
		cout<<endl<<"Department: "<<department;
		cout<<endl<<"designation: "<<designation;
     	} 
	}
	
	void staffreport()
	{
        cout << id << "\t\t\t" << name << "\t\t\t" << designation << endl;
	}
	
	
	
};

class customer
{
	
		
		
		
	protected:
		
		string name;
		int age;
		string city;
		int method;
		string email;
		
				
	public:
		
		int id;
		
		int roomassigned;
		
		customer()
		{
		roomassigned = 0;
		id = 0;
		name = " ";
		age = 0;
		city = " ";
		method = 0;
		email = " ";
		
		}
		
		void addcustomer(int n)
		{
			cout << endl << endl << "For customer#" << n+1;
			cout << endl << endl <<  "ID of the customer: ";
			cin >> id;
			cout << endl << "Name of the customer: ";
			cin >> name;
			cout << endl << "Age of the customer: ";
			cin >> age;
			cout << endl << "City of the customer: ";
			cin >> city;
			cout << endl << "Method of Payement: ";
			cin >> method;
			cout << endl << "Email ID of the customer: ";
			cin >> email;
		}
		
		void delcustomer(int i1)
		{
			if (id == i1)
			{
		     id = 0;
		     name = " ";
		     age = 0;
		     city = " ";
		     method = 0;
		     email = " ";
			}
		}
		
		void displaycus ()
		{
			if(id != 0)
			{
			
			cout << endl << endl <<  "ID: " << id;
			cout << endl << "Name: " << name;
			cout << endl << "Age: " << age;
			cout << endl << "City: " << city;
			cout << endl << "Email ID: " << email;
	 	    }
		
		}
		
		void customerreport()
		{
			if(id != 0)
			cout << "\t\t" << id << "\t\t" <<  name;
		}
	
	
};

class inventory
{
	
	private:
		
		int id;
		string name;
		int quantity;
		int rate;
		
	public:
		
		
		inventory()
		{
			id = 0;
			name = " ";
			quantity = 0;
			rate = 0;
		}
		
		void addinventory()
		{
			
			cout << endl << endl << "Enter the ID of the inventory: ";
			cin >> id;
			cout << endl <<"Enter the Name of the inventory: ";
			cin >> name;
			cout <<  endl << "Enter the Quantity of the inventory: ";
			cin >> quantity;
			cout << endl << "Enter the Price of the inventory: ";
			cin >> rate;
			
		}
		
		void delinventory(int x)
		{
			if (x == id)
			{
				id =0;
				name = " ";
				quantity = 0;
				rate = 0;
			}
		}
		
		void displayinv()
		{
			if(id != 0)
			{
				cout << endl << endl << "ID: " << id;
				cout << endl << "Name: " << name;
				cout << endl << "Quantity: " << quantity;
				cout << endl << "Price: " << rate;
			}
		}
	
};

class department
{
	
	private:
		
	
		
		
	public:
		

		
		int id;
		string name;
		
		
		department()
		{
			id = 0;
			name = " ";
		}
		
		void adddepartment()
		{
			
			cout << endl << endl << "Enter the ID of the department: ";
			cin >> id;
			cout << endl <<"Enter the Name of the departmnet: ";
			cin >> name;
		
		} 
		
	    void deldepartment(int x)
		{
			if (x == id)
			{
				id =0;
				name = " ";
				
			}
		}
		
		void displaydep()
		{
			if(id != 0)
			{
				cout << endl << endl << "ID: " << id;
				cout << endl << "Name: " << name;
			
			}
		}	
	     
	   
};




#include "password.h"


room r[9];
staff s[20];
customer c[20];
inventory i[20];
department d[20];


int flaginv = 0;
int flagcus = 0;
int flagdep = 0;
int flagstaff = 0;

int totalsales = 0;

int numberofcustomers = 0;


void setrooms ()
{
 	for (int i = 0; i < 3 ; i++)
 	{
 		r[i].singleroom();
 		r[i].roomnum = i+1;
	}
	
	for (int i = 3; i < 6 ; i++)
 	{
 		r[i].doubleroom();
 		r[i].roomnum = i+1;
	}
	
	for (int i = 6; i < 9 ; i++)
 	{
 		r[i].familyroom();
 		r[i].roomnum = i+1;
	}
}



void setdepartments()
{
	
	for (int x = 0; x < 20 ; x++)
	{
		deps[x] = d[x].name;
	}
}

#include "ownermenu.h"
#include "managermenu.h"
#include "receptionistmenu.h"

int main ()
{
	
    setrooms();
    
	while(1)
	
	{
	
	int pass;
	string x,y,z;	
		
	system("cls");
	cout << "-----WELCOME TO THE GIK HOTEL MANAGEMENT SYSYTEM-----";
	cout << endl << endl <<  "Enter your username: ";
	cin >> x;
	cout << "Enter your Password: ";
	cin >> y;
	
	pass = password(x,y);
	
	switch(pass)
	{
		case 1:
			
		system("cls");	
			
		
		ownermenu();
		
			
		break;
		
		case 2:
		system("cls");
		
		managermenu();
			
		break;
		
		case 3:
			
		system("cls");
	    
	    receptionistmenu();
	    
		break;	
		
		case 0:
		cout << "Invalid Password!" << endl;
		system("pause");
		break;	
	}
	
	
	
	
    }
	system("pause");
	return 0;
	
}
