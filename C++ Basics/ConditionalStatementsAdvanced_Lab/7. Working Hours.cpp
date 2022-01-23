#include <iostream>
using namespace std;

int main()
{
    int hour;
    cin >> hour;
    string dayOfWeek;
    cin >> dayOfWeek;

    //open -> час е [10-18] и деня от седмицата е от пон до събота
    //close -> час < 10 или час > 18 или деня от седмицата е неделя
    if (hour >= 10 && hour <= 18 && dayOfWeek != "Sunday")
    {
        cout << "open";
    }
    else
    {
        cout << "closed";
    }
    return 0;
}