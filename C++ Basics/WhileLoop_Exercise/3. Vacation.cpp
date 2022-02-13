#include <iostream>
using namespace std;

int main()
{
    double excursionPrice; cin >> excursionPrice;
    double availableMoney; cin >> availableMoney;
    int spendDaysCount = 0;
    int totalDaysCount = 0;

    while (true)
    {
        string input; cin >> input;
        if (input == "spend")
        {
            spendDaysCount++;

        }
        else
        {
            spendDaysCount = 0;
        }


        double amount; cin >> amount;
        if (input == "save")
        {
            availableMoney += amount;
            totalDaysCount++;
        }
        if (input == "spend")
        {
            if (amount > availableMoney)
            {
                availableMoney = 0;
            }
            else
            {
                availableMoney -= amount;
            }

            totalDaysCount++;
        }

        if (spendDaysCount == 5)
        {
            cout << "You can't save the money." << endl;
            cout << totalDaysCount << endl;
            return 0;
        }
        if (availableMoney >= excursionPrice)
        {
            cout << "You saved the money for " << totalDaysCount << " days." << endl;
            return 0;
        }

    }

}