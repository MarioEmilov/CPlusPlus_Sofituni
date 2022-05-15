#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <vector>
#include <limits>

using namespace std;

const int ADD = 1;
const int REMOVE = 2;
const int PRINT_MAX = 3;
const int PRINT_MIN = 4;

queue<vector<int>> getInputQueries(int numQueries) {

    queue<vector<int>> queue;

    for (int i = 0; i < numQueries; i++) {
        string iline;
        getline(cin, iline);
        istringstream istream(iline);

        vector<int> vec;
        int currNum = 0;
        while (istream >> currNum) {
            vec.push_back(currNum);
        }

        queue.push(vec);
    }

    return queue;
}

void findMaxElementInStack(stack<int> stack) {
    if (stack.empty()) {
        return;
    }

    int maxEl = numeric_limits<int>::min();
    while (!stack.empty()) {
        int currEl = stack.top();
        stack.pop();
        if (currEl > maxEl) {
            maxEl = currEl;
        }
    }

    cout << maxEl << endl;
}

void findMinElementInStack(stack<int> stack) {
    if (stack.empty()) {
        return;
    }

    int minEl = numeric_limits<int>::max();
    while (!stack.empty()) {
        int currEl = stack.top();
        stack.pop();
        if (currEl < minEl) {
            minEl = currEl;
        }
    }

    cout << minEl << endl;
}

void printStack(stack<int>& stack) {
    if (stack.empty()) {
        return;
    }

    string answer;
    while (!stack.empty()) {
        answer.append(to_string(stack.top())).append(", ");
        stack.pop();
    }
    answer.pop_back();
    answer.pop_back();

    cout << answer << endl;
}

void parseQueries(queue<std::vector<int>>& queue) {
    stack<int> queriesStack;

    while (!queue.empty()) {
        vector<int> currQuery = queue.front();
        queue.pop();
        switch (currQuery[0]) {
        case ADD: queriesStack.push(currQuery[1]);
            break;
        case REMOVE: if (queriesStack.empty()) {
            continue;
        }
                   queriesStack.pop();
                   break;
        case PRINT_MAX: findMaxElementInStack(queriesStack);
            break;
        case PRINT_MIN: findMinElementInStack(queriesStack);
            break;
        default:
            cerr << "Error, received unsuported command " << currQuery[0] << endl;
            break;
        }
    }

    printStack(queriesStack);

}

int main() {
    int numQueries = 0;
    cin >> numQueries;
    cin.ignore();

    queue<vector<int>> queue = getInputQueries(numQueries);

    parseQueries(queue);

    return 0;
}