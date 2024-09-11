void receptionistmenu()
			{
				int back = 0;
				
				while (back != 1)
				{
				
				system ("cls");
				int x;
				cout << "Logged in as Receptionist!\n\n";
				cout << "Main Menu:" << endl;
				cout << "1. Reservation Menu\n2. Log out";
				cin >> x;
				
				switch (x)
				{
					case 1:
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
				
				case 2: 
				back = 1;
				break;
				
			    }    
			}
			
	}
