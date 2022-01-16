#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double worldRecord; cin >> worldRecord;
    double distanceMetters; cin >> distanceMetters;
    double timeSwimming; cin >> timeSwimming;

    double mustSwim = distanceMetters * timeSwimming;
    double addedTime = (floor(distanceMetters / 15)) * 12.5;
    double totalTime = abs(mustSwim + addedTime);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (worldRecord <= totalTime) 
    {
        cout << "No, he failed! He was " << totalTime - worldRecord << " seconds slower." << endl;
    }
    else 
    {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    }

    return 0;

}