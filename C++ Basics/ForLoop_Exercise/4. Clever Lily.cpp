#include <iostream>

using namespace std;

int main()
{
    int lilysAge, toyPrice;
    double washingMachinePrice;

    cin >> lilysAge;
    cin >> washingMachinePrice;
    cin >> toyPrice;

    double money = 0;
    double moneyForBirthDay = 10;

    for (int i = 1; i <= lilysAge; i++)
    {
        if (i % 2 == 0)
        {
            money += moneyForBirthDay;
            moneyForBirthDay += 10;
            money -= 1;
        }
        else
        {
            money += toyPrice;
        }
    }

    double diff = money - washingMachinePrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (diff >= 0)
    {
        cout << "Yes! " << diff << endl;
    }
    else
    {
        cout << "No! " << abs(diff) << endl;
    }
}