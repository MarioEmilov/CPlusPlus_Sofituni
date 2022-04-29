#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <climits>

using namespace std;

unsigned stringToTime(const string& curTimeStr) {
    unsigned h = (curTimeStr[0] - '0') * 10 + (curTimeStr[1] - '0');
    unsigned m = (curTimeStr[2] - '0') * 10 + (curTimeStr[3] - '0');

    return h * 60 + m; //returns the number of minutes past midnight
}

unsigned calcWaitTime(unsigned busArrival, unsigned trainDeparture) {
    unsigned waitTime;
    if (busArrival > trainDeparture)
        waitTime = (24 * 60 - busArrival) + trainDeparture;
    else
        waitTime = trainDeparture - busArrival;

    return waitTime;
}

int main()
{
    size_t busses;
    cin >> busses;

    vector<unsigned> times(busses); // each time represents the number of minutes past 00:00
    for (size_t cur = 0; cur < busses; cur++) {
        string curTimeStr;
        cin >> curTimeStr;

        times[cur] = stringToTime(curTimeStr);
    }

    string trainLeaveStr;
    cin >> trainLeaveStr;

    unsigned trainLeaveTime = stringToTime(trainLeaveStr);

    size_t busIndex;
    unsigned minWaitTime = UINT_MAX;

    for (size_t cur = 0; cur < busses; cur++) {
        unsigned waitTime = calcWaitTime(times[cur], trainLeaveTime);

        if (waitTime < minWaitTime) {
            minWaitTime = waitTime;
            busIndex = cur;
        }
    }

    cout << busIndex + 1 << endl;

    return 0;
}
