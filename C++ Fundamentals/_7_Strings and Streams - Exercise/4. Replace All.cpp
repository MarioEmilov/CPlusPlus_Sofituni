#include <string>
#include <iostream>

using namespace std;

int main(void) {

    string str;
    getline(cin, str);

    string find;
    getline(cin, find);

    string replace;
    getline(cin, replace);

    /*
    I am the night. Dark Night! No, not the knight
    night
    day


    I am the day. Dark Night! No, not the knight
    */

    int foundIndex = str.find(find);

    while (foundIndex != string::npos) 
    {

        str.replace(foundIndex, find.length(), replace);

        foundIndex += replace.length();

        foundIndex = str.find(find, foundIndex);

    }

    cout << str << endl;

    return 0;
}