#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

string getInputExpression() {
    string expression;
    getline(cin, expression);

    return expression;
}

int main() {
    string expression = getInputExpression();

    stack<int> stack;
    for (size_t i = 0; i < expression.size(); i++) {
        if (expression[i] == '(') {
            stack.push(i);
        } else if (expression[i] == ')') {
            size_t startIdx = stack.top();
            string subExpression = expression.substr(startIdx, i - startIdx + 1);
            stack.pop();
            cout << subExpression << endl;
        }
    }
    return 0;
}