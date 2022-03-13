#include <iostream>
using namespace std;

double factoriel(double x) {
	double result = 1;

	for (; x >= 2; x--)
		result *= x;
	return result;
}

int main()
{
	double x, y;
	cin >> x >> y;
	x = factoriel(x);
	y = factoriel(y);

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << x / y << endl;
}
