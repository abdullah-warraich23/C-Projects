#include<iostream>
using namespace std;
class room{
	
	public:
		
		void room_menu()
        {
			int choice;
	        cout<<"\n\t\t\t\t Select one of the following options: ";
	        cout<<"\n\n\n\t\t\t1.rate";
	        cout<<"\n\t\t\t2.status";
	        cout<<"\n\t\t\t3.state";
			cout<<"\n\n\t\t\tEnter Your Choice: ";
	        cin>>choice;
	        
        switch(choice)
        {
            case 1: ;
                    break;
            case 2: ;
                    break;
            case 3: ;
                    break;
            default:
            	break;
    	}
		}
};

class staff{
	
	public:
		void staff_menu()
        {
			int choice;
	        cout<<"\n\t\t\t\t Select one of the following options: ";
	        cout<<"\n\n\n\t\t\t1.ID";
	        cout<<"\n\t\t\t2.Age";
	        cout<<"\n\t\t\t3.name";
			cout<<"\n\t\t\t4.department";
			cout<<"\n\t\t\t5.designation";
			cout<<"\n\n\t\t\tEnter Your Choice: ";
	        cin>>choice;
	        
        switch(choice)
        {
            case 1: ;
                    break;
            case 2: ;
                    break;
            case 3: ;
                    break;
            case 4: ;
                    break;
            case 5: ;
                    break;
			default:
            	cout<<"please enter correct choice";
            	staff_menu();
            	break;
    	}
		}	
};

class customer{
	
	public:
		void customer_menu()
        {
			int choice;
	        cout<<"\n\t\t\t\t Select one of the following options: ";
	        cout<<"\n\n\n\t\t\t1.ID";
	        cout<<"\n\t\t\t2.name";
	        cout<<"\n\t\t\t3.age";
			cout<<"\n\t\t\t4.city";
			cout<<"\n\t\t\t5.method of payment";
			cout<<"\n\t\t\t5.email id";
			cout<<"\n\n\t\t\tEnter Your Choice: ";
	        cin>>choice;
	        
        switch(choice)
        {
            case 1: ;
                    break;
            case 2: ;
                    break;
            case 3: ;
                    break;
            case 4: ;
                    break;
            case 5: ;
                    break;
			case 6: ;
                    break;
			default:
            	cout<<"please enter correct choice";
            	customer_menu();
            	break;
    	}
		}	
};

class inventory{
	
	public:
		void inventory_menu()
        {
			int choice;
	        cout<<"\n\t\t\t\t Select one of the following options: ";
	        cout<<"\n\n\n\t\t\t1.id";
	        cout<<"\n\t\t\t2.name";
	        cout<<"\n\t\t\t3.quantity";
			cout<<"\n\t\t\t4.rate";
			cout<<"\n\n\t\t\tEnter Your Choice: ";
	        cin>>choice;
	        
        switch(choice)
        {
            case 1: ;
                    break;
            case 2: ;
                    break;
            case 3: ;
                    break;
            case 4: ;
                    break;
            default:
            	cout<<"please enter correct choice";
            	inventory_menu();
            	break;
    	}
		}
};

class department{
	
	public:
		void department_menu()
        {
			int choice;
	        cout<<"\n\t\t\t\t Select one of the following options: ";
	        cout<<"\n\n\n\t\t\t1.id";
	        cout<<"\n\t\t\t2.name";
			cout<<"\n\n\t\t\tEnter Your Choice: ";
	        cin>>choice;
	        
        switch(choice)
        {
            case 1: ;
                    break;
            case 2: ;
                    break;
            default:
            	cout<<"please enter correct choice";
            	department_menu();
            	break;
    	}
		}
};

class receptionist{
	
	public:
		
	private:
};

class manager{
	
	public:
		
	private:
};

class owner{

	
	public:
		
    void hello()
        {
			int choice;
	        cout<<"\n\t\t\t\t Select one of the following options: ";
	        cout<<"\n\n\n\t\t\t1.inventory management";
	        cout<<"\n\t\t\t2.room management";
	        cout<<"\n\t\t\t3.department management";
	        cout<<"\n\t\t\t4.reservation management";
	        cout<<"\n\t\t\t5.staff management";
	        cout<<"\n\t\t\t6.generate report";
			cout<<"\n\n\t\t\tEnter Your Choice: ";
	        cin>>choice;
	        
        switch(choice)
        {
            case 1: ;
                    break;
            case 2: ;
                    break;
            case 3: ;
                    break;
            case 4: ;
                    break;
            case 5: ;
					break;
			case 6: ;
					break;
            default:
            	break;
   		}
	}
};
int main()
{
	owner omenu;
	omenu.hello();
	
	room rmenu;
	rmenu.room_menu();
	
	customer cmenu;
	cmenu.customer_menu();
	
	staff smenu;
	smenu.staff_menu();
	
	inventory imenu;
	imenu.inventory_menu();
	
	department dmenu;
	dmenu.department_menu();
	return 0;
}
