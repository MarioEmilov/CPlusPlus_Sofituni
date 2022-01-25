#include <iostream>
#include <string>

using namespace std;

int main()
{
    string typeOfProjection;
    int row, col;

    double money;

    cin >> typeOfProjection;
    cin >> row >> col;

    int allSeats = row * col;

    if (typeOfProjection == "Premiere")
    {
        money = allSeats * 12.00;
    }
    else if (typeOfProjection == "Normal")
    {
        money = allSeats * 7.50;
    }
    else if (typeOfProjection == "Discount")
    {
        money = allSeats * 5.00;
    }


    cout.setf(ios::fixed);
    cout.precision(2);

    cout << money << " leva" << endl;
}