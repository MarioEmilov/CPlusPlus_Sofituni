#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//всички числа от 1 до n
	//повтаряме за всяко число от 1 до n: прочитаме стойност + сумираме
	//начало: първото (1)
	//край: последното (n)
	//промяна: +1

	int sum = 0; //сума от числата
	for (int number = 1; number <= n; number++)  //първото до n-тото
	{
		int value;
		cin >> value;

		sum += value;
		//sum = sum + value;
	}

	cout << sum << endl;


	return 0;
}