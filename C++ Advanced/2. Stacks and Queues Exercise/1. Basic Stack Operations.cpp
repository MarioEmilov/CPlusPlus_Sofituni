#include <iostream>
#include <stack>
#include <limits>

using namespace std;

stack<int> getInputStack(int number) {

    stack<int> stack;
    for (int i = 0; i < number; i++) {
        int currNumber = 0;
        cin >> currNumber;
        stack.push(currNumber);
    }

    return stack;
}

stack<int> popNElementsFromStack(stack<int>& stack, int N) {

    for (int i = 0; i < N; i++) {
        stack.pop();
    }

    return stack;
}

void findTarget(stack<int>& stack, int target) {
    if (stack.empty()) {
        cout << 0 << endl;
        return;
    }

    int minElem = numeric_limits<int>::max();
    bool isTarget = false;
    while (!stack.empty()) {
        int currNum = stack.top();
        stack.pop();

        if (currNum == target) {
            isTarget = true;
            break;
        }
        else {
            if (currNum < minElem) {
                minElem = currNum;
            }
        }
    }

    if (isTarget) {
        cout << "true" << endl;
    }
    else {
        cout << minElem << endl;
    }

}

int main() {
    int numOfElemToPush = 0, numOfElemToPop = 0, target = 0;
    cin >> numOfElemToPush >> numOfElemToPop >> target;

    stack<int> stack = getInputStack(numOfElemToPush);

    popNElementsFromStack(stack, numOfElemToPop);

    findTarget(stack, target);

    return 0;
}