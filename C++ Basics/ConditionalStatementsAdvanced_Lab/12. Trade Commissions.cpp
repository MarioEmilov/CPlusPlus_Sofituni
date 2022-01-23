#include <iostream>
#include <string>
using namespace std;
int main()
{
	string town;
	double sales = 0;
	double parcentage = 0;
	cin >> town >> sales;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (sales < 0)
		cout << "error" << endl;
	else
	{
		if (town == "Sofia")

		{
			if (sales <= 500)
			{
				parcentage = 0.05;
				cout << parcentage * sales << endl;
			}
			else if (sales <= 1000)
			{
				parcentage = 0.07;
				cout << parcentage * sales << endl;
			}
			else if (sales <= 10000)
			{
				parcentage = 0.08;
				cout << parcentage * sales << endl;
			}
			else if (sales > 10000)
			{
				parcentage = 0.12;
				cout << parcentage * sales << endl;
			}
		}
		else if (town == "Varna")

		{
			if (sales <= 500)
			{
				parcentage = 0.045;
				cout << parcentage * sales << endl;
			}
			else if (sales <= 1000)
			{
				parcentage = 0.075;
				cout << parcentage * sales << endl;
			}
			else if (sales <= 10000)
			{
				parcentage = 0.1;
				cout << parcentage * sales << endl;
			}
			else if (sales > 10000)
			{
				parcentage = 0.13;
				cout << parcentage * sales << endl;
			}
		}
		else if (town == "Plovdiv")

		{
			if (sales <= 500)
			{
				parcentage = 0.055;
				cout << parcentage * sales << endl;
			}
			else if (sales <= 1000)
			{
				parcentage = 0.08;
				cout << parcentage * sales << endl;
			}
			else if (sales <= 10000)
			{
				parcentage = 0.12;
				cout << parcentage * sales << endl;
			}
			else if (sales > 10000)
			{
				parcentage = 0.145;
				cout << parcentage * sales << endl;
			}
		}
		else
			cout << "error" << endl;
	}
	return 0;
}