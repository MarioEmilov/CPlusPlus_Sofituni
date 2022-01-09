#include <iostream>
using namespace std;

int main()
{
    double area;
    cin >> area;

    double totalPrice = area * 7.61;
    double discount = totalPrice * 0.18;
    double finalPrice = totalPrice * 0.82;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv.";

    return 0;
}