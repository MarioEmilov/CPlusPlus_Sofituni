#include <iostream>
#include <vector>
#include <list>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    ostringstream output;

    string::iterator itS;
    size_t repetitions = 0;
    for (itS = input.begin(); itS != input.end(); itS++) 
    {
        char curSym = *itS;

        if (curSym >= '0' && curSym <= '9') 
        {
            size_t number = curSym - '0';

            repetitions *= 10;
            repetitions += number;
        }
        else
        {
            if (repetitions != 0) 
            {
                string decompress(repetitions, curSym);
                output << decompress;
                repetitions = 0;
            }
            else
            {
                output << curSym;
            }
        }
    }

    cout << output.str() << endl;

    return 0;
}