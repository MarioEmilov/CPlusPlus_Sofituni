#include <iostream>
#include <string>

using namespace std;

int main()
{
    int budget, fishers;
    string season;

    double priceBoat = 0;

    cin >> budget >> season >> fishers;

    if (season == "Spring")
    {
        priceBoat = 3000;
    }
    else if (season == "Summer" || season == "Autumn")
    {
        priceBoat = 4200;
    }
    else if (season == "Winter")
    {
        priceBoat = 2600;
    }

    if (fishers <= 6)
    {
        priceBoat -= priceBoat * 0.1;
    }
    else if (fishers >= 7 && fishers <= 11)
    {
        priceBoat -= priceBoat * 0.15;
    }
    else if (fishers >= 12)
    {
        priceBoat -= priceBoat * 0.25;
    }

    if (fishers % 2 == 0 && season != "Autumn")
    {
        priceBoat -= priceBoat * 0.05;
    }

    double difference = budget - priceBoat;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference >= 0)
    {
        cout << "Yes! You have " << difference << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << abs(difference) << " leva." << endl;
    }
}