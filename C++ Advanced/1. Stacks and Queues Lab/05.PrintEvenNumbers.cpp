#include <iostream>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

queue<int> getInputQueue() {
    queue<int> queue;

    string line;
    getline(cin, line);
    
    istringstream stream(line);

    int currNumber = 0;
    while (stream >> currNumber) {
        queue.push(currNumber);
    }

    return queue;
}

int main() {
    queue<int> inputQueue = getInputQueue();

    queue<int> outputQueue;
    while (!inputQueue.empty()) {
        int currNumber = inputQueue.front();
        if (currNumber % 2 == 0) {
            outputQueue.push(currNumber);
        }
        inputQueue.pop();
    }

    while (!outputQueue.empty()) {
        int currEvenNumber = outputQueue.front();
        outputQueue.pop();
        if (outputQueue.empty()) {
            cout << currEvenNumber << endl;
            break;
        }
        cout << currEvenNumber << ", ";
    }

    return 0;
}