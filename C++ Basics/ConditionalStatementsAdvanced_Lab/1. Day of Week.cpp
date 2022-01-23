#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	//1 -> Monday
	//2 -> Tuesday
	//3 -> Wednesday
	//4 -> Thursday
	//5 -> Friday
	//6 -> Saturday
	//7 -> Sunday
	//other -> Error

	//серия от проверки за цяло число за точни стойности -> switch
	switch (number)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Error";
		break;
	}


	return 0;
}