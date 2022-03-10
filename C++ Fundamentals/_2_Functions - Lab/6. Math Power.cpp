#include <iostream>
#include <cmath>

using namespace std;

int raisedPower(double number, int power)
{
    int sum = pow(number, power);
    return sum;
}
int main()
{
    int number;
    int power;
    cin >> number >> power;
    int powerNumber = raisedPower(number, power);
    cout << powerNumber;
    return 0;
}