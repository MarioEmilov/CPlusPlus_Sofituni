#include <iostream>
using namespace std;

int main()
{
    int firstTime, secondTime, thirdTime; 
    cin >> firstTime >> secondTime >> thirdTime; 

    int sumSeconds = firstTime + secondTime + thirdTime;

    int minutes = sumSeconds / 60;
    int seconds = sumSeconds % 60;

    if (seconds < 10)
    {
        cout << minutes << ":0" << seconds;
    }
    else
    {
        cout << minutes << ":" << seconds;
    }

    return 0;
}