#include <iostream>
using namespace std;

int main()
{
    int penBags, markerBags, detergentIntLiters, discountPercentage;

    cin >> penBags >> markerBags >> detergentIntLiters >> discountPercentage;
    double penBagsPrice = penBags * 5.80;
    double markerBagsPrice = markerBags * 7.20;
    double detergentInLitersPrice = detergentIntLiters * 1.20;

    double materialsPrice = penBagsPrice + markerBagsPrice + detergentInLitersPrice;
    double bill = materialsPrice - (materialsPrice * (discountPercentage / 100.0));
    cout << bill << endl;
}