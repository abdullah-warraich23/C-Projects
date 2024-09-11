void managermenu()
			{
				int back = 0;
				while (back != 1)
				{
				
				system ("cls");
				int x;
				cout << "Logged in as Manager!\n\n";
				cout << "Main Menu:" << endl;
				cout << "1. Inventory Management\n2. Room Management\n3. Customer Management\n4. Log out";
				cin >> x;
				
				switch (x)
				{
					case 1:
					{
						
						int x1 = 0;
						system("cls");
						cout << "1. Add Inventory\n2. Delete Inventory\n3. View the Inventory";
						cin >> x1;
						
						switch (x1)
						{
							case 1:
								
							system("cls");
							int x2;
							
							cout << "Enter the quantity of Inventory you want to enter: ";
							cin >> x2;
							
							int flag1;
							
							flag1 = flaginv;
							
							
							for (int i1 = flaginv; i1 < x2 + flag1 ; i1++)
							{
								
								i[i1].addinventory();
								flaginv++;
							}
							break;
							
							case 2: 
							
							int check;
							system("cls");
							cout << endl << "Enter the ID of the Inventory you want to delete";
							cin >> check;
							
							for (int j1 = 0; j1 < 20 ; j1++)
							{
								
								i[j1].delinventory(check);
															
							}
							
							break;
							
							case 3:
								
							system("cls");	
								
							for (int i2 = 0; i2 < 20 ; i2++ )
							{
								i[i2].displayinv();
							}	
							getch();
							
							break;
						}
						
					}
					break;
					
					case 2:
						{
							int x;
							
							system("cls");
							
						cout << "Room Menu: \n\n";
						
						cout << "1. View All Rooms\n2. View Avalible Rooms\n3. View Booked Rooms";
						cin >> x;
						
						switch (x)
						      {
							    
							case 1:
						    for (int i =0; i < 9; i++ )
						       {
							      r[i].displayroom(i);
						       }
						
						        cout << endl << endl;
						        system("pause");
					    
						    break;
						    
						    case 2:
						    	
						    	for (int i =0; i < 9; i++ )
						       {
						       	if(r[i].statuscheck() == 1 && r[i].statecheck() == 1)
						       	{
								   
							      r[i].displayroom(i);
							      
							    }
						       }
						
						        cout << endl << endl;
						        system("pause");
						    
						    break;
						    
						    case 3:
						    	
						    	for (int i =0; i < 9; i++ )
						       {
						       	if(r[i].statuscheck() == 0)
						       	{
								   
							      r[i].displayroom(i);
							      
							    }
						       }
						    
						    break;
						   }
						
						}
						
						break;
					
					
					
					
						
					
					
					
					
					case 3:
						{
						
						system("cls");
						int x;
						cout << "Customer Menu";
						
						cout << endl << "1. Add Customer\n2. Delete Customer\n3. View Customers";					
						cin >> x;
						
						switch (x)
						{
							case 1: 
							system("cls");
						
						    int x1;
						
						    cout << endl << "Enter the number of customers you want to enter: ";
						
						    cin >> x1;
						
						    cout << endl;
						    
						    int temp;
						    
						    temp = flagcus;
						
						    for (int i = temp; i < x1 + temp ; i++)
						    {
							
							c[i].addcustomer(i);
							
							flagcus++;
							
							numberofcustomers++;
							
						    }
						    
						    break;
						    
						    case 2:
						    	
						    	system("cls");
						    	
						    	int x2;
						    	
						    	cout << endl << "Enter the ID of the Customer you want to delete: ";
						    	cin >> x2;
						    	
						    	for (int i = 0; i < 20 ; i++)
						    	{
						    		c[i].delcustomer(x2);
								}
						    	
						    break;	
							
							case 3:
								
								system("cls");
								
								for (int i1 = 0; i1 < 20 ; i1++)
						    	{
						    		c[i1].displaycus();
								}
								
								cout << endl << endl;
								
								system("pause");
								
								
							break;	
							
					    }
						
						
				      }
					break;
					
					
					case 4:
						back = 1;
					break;
					
				}
				
			    }    
			}
