#include <iostream>
#include <queue>

using namespace std;

queue<int> getInputStack(int number) {

    queue<int> queue;
    for (int i = 0; i < number; i++) {
        int currNumber = 0;
        cin >> currNumber;
        queue.push(currNumber);
    }

    return queue;
}

queue<int> popNElementsFromStack(queue<int>& queue, int N) {

    for (int i = 0; i < N; i++) {
        queue.pop();
    }

    return queue;
}

void findTarget(queue<int>& queue, int target) {

    int minElem = INT16_MAX;
    bool flag = false;
    while (!queue.empty()) {
        int currNum = queue.front();
        queue.pop();

        if (currNum == target) {
            flag = true;
            break;
        }
        else {
            if (currNum < minElem) {
                minElem = currNum;
            }
        }
    }

    if (flag == true) {
        cout << "true" << endl;
    }
    else {
        cout << minElem << endl;
    }

}

int main() {
    int numOfElemToPush = 0, numOfElemToPop = 0, target = 0;
    cin >> numOfElemToPush >> numOfElemToPop >> target;

    queue<int> queue = getInputStack(numOfElemToPush);

    popNElementsFromStack(queue, numOfElemToPop);

    if (queue.empty()) {
        cout << 0 << endl;
    }
    else {
        findTarget(queue, target);
    }

    return 0;
}