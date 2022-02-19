#include <iostream>
using namespace std;

int main()
{
    //входни данни
    double budget;
    cin >> budget;

    string destination;
    cin >> destination; //"Dubai", "Sofia" и "London"

    string season;
    cin >> season; //"Summer" и "Winter"

    int days;
    cin >> days;

    //цена за 1 ден -> сезон и дестинация
    double pricePerDay = 0;
    if (season == "Winter")
    {
        //проверка за дестинацията
        if (destination == "Dubai")
        {
            pricePerDay = 45000;
        }
        else if (destination == "Sofia")
        {
            pricePerDay = 17000;
        }
        else if (destination == "London")
        {
            pricePerDay = 24000;
        }
    }
    else if (season == "Summer")
    {
        //проверка за дестинацията
        if (destination == "Dubai")
        {
            pricePerDay = 40000;
        }
        else if (destination == "Sofia")
        {
            pricePerDay = 12500;
        }
        else if (destination == "London")
        {
            pricePerDay = 20250;
        }
    }

    //сума за филма = бр. дни * цена за 1 ден
    double totalSum = days * pricePerDay;

    //проверка за облекчение или облагане
    if (destination == "Dubai")
    {
        totalSum = totalSum - 0.30 * totalSum; //0.7 * totalSum;
    }
    else if (destination == "Sofia")
    {
        totalSum = totalSum + 0.25 * totalSum; //1.25 * totalSum
    }

    // проверка дали бюджетът е достатъчен
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= totalSum)
    {
        //достатъчен
        cout << "The budget for the movie is enough! We have " << budget - totalSum << " leva left!";
    }
    else
    {
        //не е достатъчен
        //budget < totalSum
        cout << "The director needs " << totalSum - budget << " leva more!";
    }


    return 0;
}
