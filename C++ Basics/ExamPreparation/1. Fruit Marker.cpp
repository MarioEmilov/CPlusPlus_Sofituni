#include <iostream>
using namespace std;

int main()
{
    //ягоди (цена ,кг), банани (кг), портокали (кг) и малини (кг)

    //входни данни
    double strawberriesPrice;
    cin >> strawberriesPrice;

    double bananasQuantity;
    cin >> bananasQuantity;

    double orangesQuantity;
    cin >> orangesQuantity;

    double raspberriesQuantity;
    cin >> raspberriesQuantity;

    double strawberriesQuantity;
    cin >> strawberriesQuantity;

    //обща сума = (strawberriesQuantity * strawberriesPrice) 
    //          + (bananasQuantity * bananasPrice) 
       //       + (raspberriesQuantity * raspberriesPrice) 
       //       + (orangesQuantity * orangesPrice)

    double raspberriesPrice = strawberriesPrice / 2;
    double bananasPrice = raspberriesPrice - 0.8 * raspberriesPrice; //0.2 * raspberriesPrice
    double orangesPrice = raspberriesPrice - 0.4 * raspberriesPrice; //0.6 * raspberriesPrice

    double totalSum = (strawberriesQuantity * strawberriesPrice)
        + (bananasQuantity * bananasPrice)
        + (raspberriesQuantity * raspberriesPrice)
        + (orangesQuantity * orangesPrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalSum << endl;
    return 0;
}
