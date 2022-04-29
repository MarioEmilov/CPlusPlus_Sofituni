#include <iostream>
#include <vector>
#include <list>
#include <sstream>

using namespace std;

const unsigned long system_base = 10;

unsigned long convertToNumber(const string& system, const string& numStr) {
	unsigned long result = 0;
	size_t idx = 0;
	while (idx < numStr.length())
	{
		result *= system_base;
		size_t curIdx = system.find(numStr[idx]);
		result += curIdx;

		idx++;
	}

	return result;
}

string decimalToSystem(unsigned long number, const string& system) {
	if (number == 0)
		return string(1, system[0]);

	string result;
	while (number)
	{
		size_t curDigitIdx = number % system_base;
		result = string(1, system[curDigitIdx]) + result;

		number = number / system_base;
	}

	return result;
}


int main()
{
	string system;
	string first;
	string second;

	cin >> system >> first >> second;

	unsigned long firstNumber, secondNumber;

	firstNumber = convertToNumber(system, first);
	secondNumber = convertToNumber(system, second);

	unsigned long result = firstNumber + secondNumber;

	cout << decimalToSystem(result, system) << endl;

	return 0;
}