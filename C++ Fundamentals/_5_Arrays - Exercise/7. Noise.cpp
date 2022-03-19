#include <iostream>
#include <cmath>

using namespace std;

main() {

    int number = 0;

	while (true)
	{
		char c;
		cin >> c;

		if (c == '.')
			break;
		if (c >= '0' && c <= '9') {
			int value = (c - '0');

			number *= 10;
			number += value;
		}
	}

	cout << sqrt(number) << endl;

    return 0;
}