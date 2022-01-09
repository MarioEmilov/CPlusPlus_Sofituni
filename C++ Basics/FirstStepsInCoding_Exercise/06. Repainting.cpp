#include <iostream>
using namespace std;

int main()
{
    int nylon, paint, thinner, workingHours;

    cin >> nylon >> paint >> thinner >> workingHours;
    double nylonPrice = (nylon + 2) * 1.50;
    double paintPrice = (paint + (paint * 0.1)) * 14.50;
    double thinnerPrice = thinner * 5.00;

    double materialsPrice = nylonPrice + paintPrice + thinnerPrice + 0.40;
    double workersPriceForHour = materialsPrice * 0.30;
    double workerPrice = workersPriceForHour * workingHours;

    double allMoneyNeeded = materialsPrice + workerPrice;
    cout << allMoneyNeeded << endl;
}