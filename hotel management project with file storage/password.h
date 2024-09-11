int password(string a, string b)
{
	string x = "owner";
	string x1 = "owner";
	string y = "manager";
	string y1 = "manager";
	string z = "receptionist"; 
	string z1 = "receptionist";
	
	if (a == x && b == x1)
	{
		return 1;
	}
	else if (a == y && b == y1)
	{
		return 2;
	}
	else if (a == z && b == z1)
	{
		return 3;
	}
	else 
	{
		return 0;
	}
}

