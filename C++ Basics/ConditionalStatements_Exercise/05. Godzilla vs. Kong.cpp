#include <iostream>
using namespace std;

int main()
{
    double movieBudget; cin >> movieBudget;
    int statistsNumber; cin >> statistsNumber;
    double dressPrice; cin >> dressPrice;

    double decorPrice = movieBudget - (movieBudget * 0.9);

    if (statistsNumber > 150) 
    {
        dressPrice *= 0.9;
    }

    double totalPrice = movieBudget - ((statistsNumber * dressPrice) + decorPrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalPrice < 0) 
    {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << -totalPrice << " leva more." << endl;
    }
    else 
    {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << totalPrice << " leva left." << endl;

        return 0;
    }

}