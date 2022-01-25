#include <iostream>
#include <string>

using namespace std;

int main()
{
    string flower;
    int flowerCount, budget;

    double flowerPrice;
    double allMoneyForPay;

    cin >> flower;
    cin >> flowerCount >> budget;

    double discount = 0.0;
    double morePrice = 0.0;

    if (flower == "Roses")
    {
        flowerPrice = 5.0;
    }
    else if (flower == "Dahlias")
    {
        flowerPrice = 3.80;
    }
    else if (flower == "Tulips")
    {
        flowerPrice = 2.80;
    }
    else if (flower == "Narcissus")
    {
        flowerPrice = 3.0;
    }
    else if (flower == "Gladiolus")
    {
        flowerPrice = 2.50;
    }

    allMoneyForPay = flowerCount * flowerPrice;

    if (flower == "Roses" && flowerCount > 80)
    {
        discount = 0.1;
    }
    else if ((flower == "Dahlias" && flowerCount > 90) || (flower == "Tulips" && flowerCount > 80))
    {
        discount = 0.15;
    }
    else if (flower == "Narcissus" && flowerCount < 120)
    {
        morePrice = 0.15;
    }
    else if (flower == "Gladiolus" && flowerCount < 80)
    {
        morePrice = 0.2;
    }

    if (discount != 0)
    {
        allMoneyForPay = allMoneyForPay - (allMoneyForPay * discount);
    }
    else if (morePrice != 0)
    {
        allMoneyForPay = allMoneyForPay + (allMoneyForPay * morePrice);
    }

    double difference = budget - allMoneyForPay;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference >= 0)
    {
        cout << "Hey, you have a great garden with " << flowerCount << " " << flower << " and " << difference << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money, you need " << abs(difference) << " leva more." << endl;
    }
}