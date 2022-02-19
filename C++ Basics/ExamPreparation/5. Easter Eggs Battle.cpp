#include <iostream>
#include <string>
using namespace std;

int main()
{
	int countFirst, countSecond;
	cin >> countFirst; //бр. на яйцата на първия
	cin >> countSecond; //бр. на яйцата на втория

	//повтаряме: битка -> резултат -> проверка -> проверка дали някой печели
	//стоп: входни данни == "End of battle"
	//продължаваме: входни данни != "End of battle"
	//входни данни: "End of battle" или "one" / "two"
	cin.ignore();
	string input;
	getline(cin, input);

	while (input != "End of battle")
	{
		//input = "one" / "two" -> резултат от битка
		if (input == "one")
		{
			countSecond--;
		}
		else if (input == "two")
		{
			countFirst--;
		}

		//проверка дали някой е останал без яйца
		if (countFirst == 0)
		{
			cout << "Player one is out of eggs. Player two has " << countSecond << " eggs left.";
			break;
		}
		else if (countSecond == 0)
		{
			cout << "Player two is out of eggs. Player one has " << countFirst << " eggs left.";
			break;
		}

		getline(cin, input);
	}

	if (input == "End of battle")
	{
		cout << "Player one has " << countFirst << " eggs left." << endl;
		cout << "Player two has " << countSecond << " eggs left.";
	}
	return 0;
}
