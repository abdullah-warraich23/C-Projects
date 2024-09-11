void ownermenu()
			{
				
				int back = 0;
				
				while (back != 1)
				{
				
			
				
				system ("cls");
				int x;
				cout << "Logged in as Owner!\n\n";
				cout << "Main Menu:" << endl;
				cout << "1. Inventory Management\n2. Room Management\n3. Department Manegement\n4. Reservation Management\n5. Staff Management\n6. Customer Management\n7. Generate Reports\n8. Log out";
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
						    int x1;
						    system("cls");
							cout << "Department Menu:\n\n";
							cout << "1. Add Department\n2. Delete Department\n3. View the department\n4. Update Department";
						    cin >> x1;
						    
						    
						
					       	switch (x1)
						   {
							case 1:
					  	   {
							 		
							   system("cls");
							
						       int x2;
							
							    cout << "Enter the number of department you want to enter: ";
							    cin >> x2;
							
						     	int flag1;
							
							    flag1 = flagdep;
							
							
						       for (int i1 = flagdep; i1 < x2 + flag1 ; i1++)
							  {
								
							     	d[i1].adddepartment();
								    flagdep++;
							  }
							     break;
							}
						    
						     case 2:
						     	{   
						     	
						     	int check;
							    system("cls");
							    cout << endl << "Enter the ID of the department you want to delete";
							    cin >> check;
							
							    for (int j1 = 0; j1 < 20 ; j1++)
							    {
								
								d[j1].deldepartment(check);
								
							    }	
								break;
						     		
								}
							    case 3:
							    {
										
								system("cls");	
								
						     	for (int i2 = 0; i2 < 20 ; i2++ )
							    {
							    	
								d[i2].displaydep();
								
							    }
									
						     	getch();
							
							    break;	
						         
								}
								
								case 4:
									{
									
									int x3;
						            cout<<"Enter the ID of the deprtment you want to update: "<<endl;
						            cin>>x3;
						            
						            for (int i2=0;i2<20;i2++)
						            {
						            	if (d[i2].id==x3)
						            	{
						            		d[i2].adddepartment();
						            			break;
										}
									
									}
						            
						            }
						            
					     	}
					      	
					      }
					break;
					
					case 4:						
						{
						system("cls");
						int x;
						cout<<endl<<"1. Room Booking \n2. Availability status of rooms\n3. Date of Check In\n4. Date of Check out\n "<<endl;
						cin>>x;

						system("cls");
						
						switch(x)
						{
							case 1:
								{
									int a,b,c;
									
									system("cls");
									
									cout << endl << "Enter the ID of the Customer: ";
								    cin >> a;
								
									
									cout << endl << "Enter the type of room customer wants to book ( 1 = single | 2 = Double | 3 = family ): ";
									
									cin >> b;
									
									if ( b == 1 )
									{
										for (int  i = 0; i < 3; i++)
										{
											if (r[i].statuscheck() == 1)
											{
												r[i].bookroom();
												
												totalsales = totalsales + 2000;
												
												
												break;
											}
											
										}
									}
									else if (b ==2)
									{
										for (int  i = 3; i < 6; i++)
										{
											if (r[i].statuscheck() == 1)
											{
												r[i].bookroom();
												
												totalsales = totalsales + 4000;
													break;
											}
											
										}
									}
									else if ( b == 3)
									{
										for (int  i = 6; i < 9; i++)
										{
											if (r[i].statuscheck() == 1)
											{
												r[i].bookroom();
												
												totalsales = totalsales + 6000;
												

													break;
											}
											
										}
									}
									
							    }
							break; 
							
							case 2:
								{   int a;
									cout<<"Enter the type of room you want to check ( 1 = single | 2 = Double | 3 = family ): " <<endl<<endl;
									cin>>a;
									
										if ( a == 1 )
									{
										for (int  i = 0; i < 3; i++)
										{
											if (r[i].statuscheck() == 1 && r[i].statecheck()==1)
											{
											cout<< endl <<"Room "<<i+1<<" is available"<<endl;
											}
											else
											cout<< endl <<"Room "<<i+1<<" is unavailable"<<endl;
										}
										getch();
									}
									else if (a ==2)
									{
										for (int  i = 3; i < 6; i++)
										{
											if (r[i].statuscheck() == 1 && r[i].statecheck()==1)
											{
												cout<< endl <<"Room "<<i+1<<" is available"<<endl;
											}
											else
											cout<< endl <<"Room "<<i+1<<" is unavailable"<<endl;
											
										}
										getch();
									}
									else if ( a == 3)
									{
										for (int  i = 6; i < 9; i++)
										{
											if (r[i].statuscheck() == 1 && r[i].statecheck()==1)
											{
											cout<< endl <<"Room "<<i+1<<" is available"<<endl;
											}
											else
											cout<< endl <<"Room "<<i+1<<" is unavailable"<<endl;
											
										}
										getch();
									} 
									
								}
							break; 
							
							case 3: // DATE OF CHECK IN
								{
									cout << endl << endl << "             Date of check in" << endl;
									for (int i = 0; i < 9; i++)
									{
										r[i].displaydate(i);
										
									}		
									cout << endl;
									system("pause");					

								}
							break; 
							
							case 4:
								{
									int x;
									cout << endl << "Enter the roomnumber you want to checkout: ";
									cin >> x;
									
									for (int i = 0; i < 9 ; i++)
									{
										if (r[i].roomnum == x)
										{
											r[i].checkout();
										}
									}
									
									
								}
							break; 
							
							 
							
						}
						
							
					    }
					break;
					
					\
					
					
					case 5:
						
						
						{   
						    int x1;
						    system("cls");
							cout << "Staff Menu:\n\n";
							cout << "1. Add Staff\n2. Delete Staff\n3. View all Staff\n4. Update Staff info";
						    cin >> x1;
						    
						    
						
					       	switch (x1)
						   {
							case 1:
					  	   {
							 		
							   system("cls");
							   setdepartments();
						       int x2;
							
							    cout << "Enter the number of staff you want to enter: ";
							    cin >> x2;
							
						     	int flag1;
							
							    flag1 = flagstaff;
							
							
						       for (int i1 = flagstaff; i1 < x2 + flag1 ; i1++)
							  {
								
							     	s[i1].addstaff();
								    flagstaff++;
							  }
							     break;
							}
						    
						     case 2:
						     	{   
						     	
						     	int check;
							    system("cls");
							    cout << endl << "Enter the ID of the staff you want to delete";
							    cin >> check;
							
							    for (int j1 = 0; j1 < 20 ; j1++)
							    {
								
								if(s[j1].id == check)
								{
									s[j1].deletestaff();
								}
								
							    }	
								break;
						     		
								}
							    case 3:
							    {
										
								system("cls");	
								
						     	for (int i2 = 0; i2 < 20 ; i2++ )
							    {
							    
								s[i2].displaystaff();
								
							    }
									
						     	getch();
							
							    break;	
						         
								}
								
								case 4:
									{
									
									int x3;
						            cout<<"Enter the ID of the deprtment you want to update: "<<endl;
						            cin>>x3;
						            
						            for (int i2=0;i2<20;i2++)
						            {
						            	if (s[i2].id==x3)
						            	{
						            		s[i2].addstaff();
						            		break;
										}
									
									}
						            
						            }
						            
					     	}
					      	
					      }
					break;
						
					
					
					
					
					case 6:
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
					
					case 7:
						
						int a;
						
						cout << endl << "Report Menu:\n\n";
						cout << "1. Customer Report\n2. Staff Report\n3. Sales report";
						cin >> a;
						switch (a)
						{
							case 1:
								
								{
									
									cout << "Customer#\t\tID\t\tName\t\tRoom Number\t\tCheck In Date\t\tCheckoutdate\t\t" << endl << endl;
									
									for (int i = 0; i < 20; i++)
									{
										if(c[i].id != 0)
										{
										
										cout << i+1;
										c[i].customerreport();
										
									    }
									
									}
									
									system("pause");
									
								}
								
							 
							break;
							
							case 2:
								int x;
								
								cout << endl << "Enter the Id of the Department: ";
								
								cin >>x;
								
								cout << endl << "staff#\t\tID\t\tName\t\tDesignation" << endl;
								for (int i=0; i<20; i++)
								{
									if(d[i].id == x)
									{
										for (int j = 0; j < 20; j++)
										{
											if (s[j].department == d[i].name )
											{
												cout << i+1 << "  ";
											    s[i].staffreport();
											}
										}
									}
								}
								cout << endl << endl;
								system("pause");
								 
							break;
							
							case 3:
							system("cls");
							cout << endl << endl << "Total Sales: "	<< totalsales;
						}
						
					
						
					break;
					
					case 8:
						back = 1;
					break;
					
				}
				
			    }    
			}
