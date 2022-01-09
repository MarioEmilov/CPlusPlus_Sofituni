#include <iostream>
using namespace std;

int main()
{
    double usdValue;
    cin >> usdValue;
    double bgnValue = usdValue * 1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bgnValue;
}