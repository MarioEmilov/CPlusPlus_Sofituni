#include <iostream>
using namespace std;

int main()
{
    int chickenMenus, fishMenus, vegiMenues;
    cin >> chickenMenus >> fishMenus >> vegiMenues;

    double chickenMenusPrice = chickenMenus * 10.35;
    double fishMenusPrice = fishMenus * 12.40;
    double vegiMenusPrice = vegiMenues * 8.15;

    double menusPrice = chickenMenusPrice + fishMenusPrice + vegiMenusPrice;
    double desert = menusPrice * 0.2;
    double bill = menusPrice + desert + 2.50;
    cout << bill << endl;
}