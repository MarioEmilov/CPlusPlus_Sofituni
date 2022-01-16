#include <iostream>
using namespace std;
int main()

{
    int hours; cin >> hours;
    int minutes; cin >> minutes;

    int newTime = minutes + 15;

    if (newTime > 59) 
    {
        hours += 1;
        newTime -= 60;
    }

    if (hours > 23) 
    {
        hours = 0;
    }

    if (newTime < 10) 
    {
        cout << hours << ":0" << newTime << endl;
    }
    else 
    {
        cout << hours << ":" << newTime << endl;
    }

    return 0;
}