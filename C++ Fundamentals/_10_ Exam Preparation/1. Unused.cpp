#include <iostream>
#include <vector>
#include <list>
#include <sstream>

using namespace std;

const size_t maxInput = 100;

int main()
{
    char input[maxInput + 1];
    cin >> input;

    string output("abcdefghijklmnopqrstuvwxyz");

    for (int curIdx = 0; input[curIdx] != 0; curIdx++) {
        char curSym = input[curIdx];

        string::size_type symbolPosition = output.find(curSym);

        if (symbolPosition != string::npos) {
            output.erase(symbolPosition, 1);
        }
    }

    cout << output << endl;

    return 0;
}