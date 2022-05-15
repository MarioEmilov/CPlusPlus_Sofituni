#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <bits/stdc++.h>

using namespace std;

string getInputLine() {
    string line;
    getline(cin, line);

    return line;
}

int main() {
    string inputLine = getInputLine();

    istringstream stream(inputLine);

    stack<string> stack;

    string currWord;
    while (stream >> currWord) {
        stack.push(currWord);
    }

    while (!stack.empty()) {
        string currWordToReverse = stack.top();
        reverse(currWordToReverse.begin(), currWordToReverse.end());
        cout << currWordToReverse << ' ';
        stack.pop();
    }

    return 0;
}