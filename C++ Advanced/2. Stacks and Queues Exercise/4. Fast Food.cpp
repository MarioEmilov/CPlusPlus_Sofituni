#include <iostream>
#include <string>
#include <sstream>
#include <queue>
#include <limits>

using namespace std;

queue<int> getInputOrders() {
    queue<int> orders;

    string line;
    getline(cin, line);
    istringstream stream(line);

    int currNumber = 0;
    while (stream >> currNumber) {
        orders.push(currNumber);
    }

    return orders;
}

void findTheClientWithBiggestOrder(queue<int>& ordersQueue) {
    int biggestNumber = numeric_limits<int>::min();

    queue<int> ordersQueueCopy = ordersQueue;
    while (!ordersQueueCopy.empty()) {
        int currOrder = ordersQueueCopy.front();
        ordersQueueCopy.pop();
        if (currOrder > biggestNumber) {
            biggestNumber = currOrder;
        }
    }

    cout << biggestNumber << endl;
}

int main() {
    int totalAmountOfFood = 0;
    cin >> totalAmountOfFood;
    cin.ignore();

    queue<int> ordersQueue = getInputOrders();

    findTheClientWithBiggestOrder(ordersQueue);

    bool isFoodEnough = true;
    while (!ordersQueue.empty()) {
        int currOrder = ordersQueue.front();
        if (currOrder <= totalAmountOfFood) {
            totalAmountOfFood -= currOrder;
            ordersQueue.pop();
        }
        else {
            cout << "Orders left: ";
            while (!ordersQueue.empty()) {
                cout << ordersQueue.front();
                ordersQueue.pop();
                if (ordersQueue.size() > 0) {
                    cout << " ";
                }
            }
            cout << endl;
            isFoodEnough = false;
        }
    }

    if (isFoodEnough) {
        cout << "Orders complete" << endl;
    }

    return 0;
}