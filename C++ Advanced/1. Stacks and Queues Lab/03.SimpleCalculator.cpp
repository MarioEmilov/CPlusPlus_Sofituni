#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    string expression;
    getline(cin, expression);
    istringstream stream(expression);

    stack<int> stack;

    while (!stream.eof()) {
        char currChar;
        stream >> currChar;

        if (isdigit(currChar)) {
            int currNumber = currChar - '0';
            stack.push(currNumber);
        }

        if (currChar == '+') {
            int numToAdd = 0;
            stream >> numToAdd;
            int topOfStack = stack.top();
            stack.pop();
            stack.push(topOfStack + numToAdd);
        } else if (currChar == '-') {
            int numToSubtract = 0;
            stream >> numToSubtract;
            int topOfStack = stack.top();
            stack.pop();
            stack.push(topOfStack - numToSubtract);
        }
    }

    cout << stack.top() << endl;
}