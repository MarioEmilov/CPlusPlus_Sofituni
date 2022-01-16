#include <iostream>
using namespace std;

int main()
{
    double puzzlePrice = 2.60;
    double dollPrice = 3.00;
    double bearPrice = 4.10;
    double minionPrice = 8.20;
    double truckPrice = 2.00;

    double excursionPrice; cin >> excursionPrice;
    int puzzleQuantity; cin >> puzzleQuantity;
    int dollQuantity; cin >> dollQuantity;
    int bearQuantity; cin >> bearQuantity;
    int minionQuanitty; cin >> minionQuanitty;
    int truckQuantity; cin >> truckQuantity;

    int totalToys = puzzleQuantity + dollQuantity + bearQuantity + minionQuanitty + truckQuantity;
    double totalPrice = (puzzlePrice * puzzleQuantity) + (dollPrice * dollQuantity) + (bearPrice * bearQuantity) + (minionPrice * minionQuanitty) + (truckPrice * truckQuantity);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalToys >= 50) 
    {
        totalPrice = totalPrice - (totalPrice * 0.25);
    }
    double rentPrice = totalPrice - (totalPrice * 0.9);
    double finalPrice = totalPrice - rentPrice;

    if (excursionPrice <= finalPrice) 
    {
        double leftMoney = finalPrice - excursionPrice;
        cout << "Yes! " << leftMoney << " lv left." << endl;
    }
    else if (excursionPrice > finalPrice) 
    {
        double neededMoney = excursionPrice - finalPrice;
        cout << "Not enough money! " << neededMoney << " lv needed." << endl;
    }

    return 0;

}