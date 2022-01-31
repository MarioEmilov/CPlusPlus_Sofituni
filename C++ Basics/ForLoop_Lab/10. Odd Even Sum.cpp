#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;
    for (int number = 1; number <= n; number++)
    {
        int value;
        cin >> value;
        if (number % 2 == 0)
        {
            evenSum += value;
        }
        else
        {
            oddSum += value;
        }
    }

    int result = abs(evenSum - oddSum);
    if (evenSum == oddSum) {
        cout << "Yes" << endl << "Sum = " << evenSum;
    }
    else {
        cout << "No" << endl << "Diff = " << result;
    }

    return 0;
}