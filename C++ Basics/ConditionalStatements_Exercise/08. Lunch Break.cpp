#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string seriesName; getline(std::cin, seriesName);
    int seriesDuration; cin >> seriesDuration;
    int breakDuration; cin >> breakDuration;

    double lunchDuration = breakDuration / 8.0;
    double chillDuration = breakDuration / 4.0;

    double totalTime = breakDuration - lunchDuration - chillDuration;

    double result = (totalTime - seriesDuration);

    if (totalTime >= seriesDuration) 
    {
        cout << "You have enough time to watch " << seriesName << " and left with " << ceil(result) << " minutes free time." << endl;
    }
    else 
    {
        cout << "You don't have enough time to watch " << seriesName << ", you need " << ceil(-result) << " more minutes." << endl;
    }

    return 0;
}