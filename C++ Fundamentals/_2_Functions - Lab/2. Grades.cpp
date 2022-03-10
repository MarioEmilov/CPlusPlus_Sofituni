#include <iostream>
using namespace std;

void grade(double number)
{
    if (number >= 2.00 & number <= 2.99)
    {
        cout << "Fail" << endl;
    }
    else if (number >= 3.00 & number <= 3.49)
    {
        cout << "Poor" << endl;
    }
    else if (number >= 3.50 & number <= 4.49)
    {
        cout << "Good" << endl;
    }
    else if (number >= 4.50 & number <= 5.49)
    {
        cout << "Very good" << endl;
    }
    else if (number >= 5.50 & number <= 6.00)
    {
        cout << "Excellent" << endl;
    }
}

int main()
{
    double number;
    cin >> number;
    grade(number);
    return 0;
}
