#include <iostream>
using namespace std;
int main()
{
	string productName, town;
	double quantity;
	double price = 0;
	cin >> productName >> town >> quantity;

	if (town == "Sofia")
	{
		if (productName == "coffee")
		{
			price = 0.5;
			cout << quantity * price << endl;
		}
		else if (productName == "peanuts")
		{
			price = 1.6;
			cout << quantity * price << endl;
		}
		else if (productName == "water")
		{
			price = 0.8;
			cout << quantity * price << endl;
		}
		else if (productName == "beer")
		{
			price = 1.2;
			cout << quantity * price << endl;
		}
		else if (productName == "sweets")
		{
			price = 1.45;
			cout << quantity * price << endl;
		}
	}
	else if (town == "Plovdiv")
	{
		if (productName == "coffee")
		{
			price = 0.4;
			cout << quantity * price << endl;
		}
		else if (productName == "peanuts")
		{
			price = 1.5;
			cout << quantity * price << endl;
		}
		else if (productName == "water")
		{
			price = 0.7;
			cout << quantity * price << endl;
		}
		else if (productName == "beer")
		{
			price = 1.15;
			cout << quantity * price << endl;
		}
		else if (productName == "sweets")
		{
			price = 1.30;
			cout << quantity * price << endl;
		}
	}
	else if (town == "Varna")
	{
		if (productName == "coffee")
		{
			price = 0.45;
			cout << quantity * price << endl;
		}
		else if (productName == "peanuts")
		{
			price = 1.55;
			cout << quantity * price << endl;
		}
		else if (productName == "water")
		{
			price = 0.7;
			cout << quantity * price << endl;
		}
		else if (productName == "beer")
		{
			price = 1.1;
			cout << quantity * price << endl;
		}
		else if (productName == "sweets")
		{
			price = 1.35;
			cout << quantity * price << endl;
		}
	}
	return 0;
}