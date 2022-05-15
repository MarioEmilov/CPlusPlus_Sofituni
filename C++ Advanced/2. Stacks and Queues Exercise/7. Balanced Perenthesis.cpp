#include <iostream>
#include <string>
#include <stack>

using namespace std;

string getInputExpression() {
    string parenthesisSeq;
    getline(cin, parenthesisSeq);

    return parenthesisSeq;
}

int main() {
    string parenthesis = getInputExpression();

    stack<char> parenthesisStack;

    bool correctParenthesis = true;

    for (char ch : parenthesis) {
        if (parenthesisStack.empty() && (ch == ')' || ch == ']' || ch == '}')) {
            correctParenthesis = false;
            break;
        }

        if (ch == '(' || ch == '[' || ch == '{') {
            parenthesisStack.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            char topOfStack = parenthesisStack.top();
            parenthesisStack.pop();
            if (topOfStack == '(' && ch == ')') {
                continue;
            }
            else if (topOfStack == '[' && ch == ']') {
                continue;
            }
            else if (topOfStack == '{' && ch == '}') {
                continue;
            }
            else {
                correctParenthesis = false;
                break;
            }
        }
    }

    if (parenthesisStack.empty() && correctParenthesis) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}