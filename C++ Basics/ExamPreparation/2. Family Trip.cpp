#include <iostream>
using namespace std;

int main()
{
    //входни данни
    double budget;
    cin >> budget;

    int countNights;
    cin >> countNights;

    double pricePerNight;
    cin >> pricePerNight;

    int percent;
    cin >> percent;

    //проверка за бр. нощувки -> промяна в цена за 1 нощувка
    if (countNights > 7)
    {
        pricePerNight = pricePerNight - 0.05 * pricePerNight;
        //0.95 * pricePerNight
    }

    //сума за нощувки = бр. нощувки * цена за 1 нощувка
    double sumNights = countNights * pricePerNight;

    //сума за доп. разходи = процент от бюджет
    double sumAddExpenses = (percent / 100.0) * budget;

    //сума за почивка = сума за нощувки + сума за доп. разходи
    double totalSum = sumNights + sumAddExpenses;

    cout.setf(ios::fixed);
    cout.precision(2);
    //проверка дали определения бюджет стига
    //достатъчен
    if (budget >= totalSum)
    {
        cout << "Ivanovi will be left with " << budget - totalSum << " leva after vacation.";
    }
    else  //не е достатъчен
    {
        //budget < totalSum
        cout << totalSum - budget << " leva needed.";
    }


    return 0;
}