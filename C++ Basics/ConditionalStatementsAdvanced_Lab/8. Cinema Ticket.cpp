#include <iostream>
using namespace std;

int main()
{
    string dayOfWeek;
    cin >> dayOfWeek;

    //Monday or Tuesday or Friday -> 12
    //Wednesday or Thursday -> 14
    //Saturday or Sunday -> 16
    if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Friday")
    {
        cout << 12 << endl;
    }
    else if (dayOfWeek == "Wednesday" || dayOfWeek == "Thursday")
    {
        cout << 14 << endl;
    }
    else if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday")
    {
        cout << 16 << endl;
    }

    return 0;
}
