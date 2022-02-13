#include <iostream>
#include <string>
using namespace std;


int main()
{
	string student;
	cin >> student;

	int grades = 1;
	int fail = 0;
	double totalgrade = 0;

	while (grades <= 12)
	{
		double grade;
		cin >> grade;
		if (grade >= 4.00)
		{
			totalgrade += grade;
			grades++;
		}
		else
		{
			fail++;
		}

		if (fail >= 2)
		{
			cout << student << " has been excluded at " << grades << " grade" << endl;
			break;
		}
	}
	double averagegrade = totalgrade / 12;


	if (grades >= 12)
	{
		cout.precision(2);
		cout << fixed << student << " graduated. Average grade: " << averagegrade << endl;
	}
}