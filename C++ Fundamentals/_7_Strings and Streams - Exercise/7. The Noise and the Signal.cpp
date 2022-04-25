#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// 1.][.3 5-aA3:)5 2asd=@14

int main(void) {

    string line;
    getline(cin, line);

    istringstream input(line);
    string current;

    string minNoise = "";

    while (input >> current) 
    {
        string curNoise;

        for (int index = 0; index < current.length(); index++) 
        {
            char c = current[index];

            if (!(c >= '0' && c <= '9'))
                curNoise += c;
        }

        if (curNoise.length() > minNoise.length())
            minNoise = curNoise;
        else if (
            curNoise.length() == minNoise.length() &&
            curNoise < minNoise)
            minNoise = curNoise;
    }

    if (minNoise.length())
        cout << minNoise << endl;
    else
        cout << "no noise" << endl;

    // cout << ( minNouse.length() == 0 ? "no noise" : minNouse ) << endl;

    return 0;
}