#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int sum = 0;
	int biggestNumber = INT_MIN;

	for (size_t i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		sum += num;
		if (num > biggestNumber)
		{
			biggestNumber = num;
		}
	}

	sum -= biggestNumber;

	int diff = abs(sum - biggestNumber);

	if (sum == biggestNumber)
	{
		cout << "Yes" << endl;

		cout << "Sum = " << sum << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << diff << endl;
	}
}