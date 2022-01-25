#include <iostream>
#include <string>
using namespace std;

int main()
{
    int days;
    string roomType, mark;
    double price;
    cin >> days;
    cin.ignore();                  // МНОГО ВАЖНО, НЕ ДАВА ДА СЕ ПРИЕМАТ ПОВЕЧЕ СТОЙНОСТ СЛЕД ПЪРВИЯ getline(), ако не се напише това предварително.
    getline(cin, roomType);
    getline(cin, mark);
    cout.setf(ios::fixed);
    cout.precision(2);
    if (roomType == "room for one person")
    {
        price = (days - 1) * 18.00;
    }
    else if (roomType == "apartment")
    {
        price = (days - 1) * 25.00;
        if (days < 10) { price *= 0.7; }
        else if (days >= 10 && days <= 15) { price *= 0.65; }
        else if (days > 15) { price *= 0.5; }
    }
    else if (roomType == "president apartment")
    {
        price = (days - 1) * 35.00;
        if (days < 10) { price *= 0.9; }
        else if (days >= 10 && days <= 15) { price *= 0.85; }
        else if (days > 15) { price *= 0.8; }
    }

    if (mark == "positive")
    {
        price *= 1.25;
        cout << price << endl;
    }
    else if (mark == "negative")
    {
        price *= 0.9;
        cout << price << endl;
    }
    return 0;
}