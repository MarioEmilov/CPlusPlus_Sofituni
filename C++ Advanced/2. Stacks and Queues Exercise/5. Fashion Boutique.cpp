#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

stack<int> getInputClothesStack() {
    stack<int> stack;

    string iline;
    getline(cin, iline);
    istringstream istream(iline);

    int currNum = 0;
    while (istream >> currNum) {
        stack.push(currNum);
    }

    return stack;
}

void workOutNeededRacks(stack<int>& clothesStack, int rackCapacity) {
    int clothesWeight = 0;

    int numOfRacks = 1;
    while (!clothesStack.empty()) {
        int currClothing = clothesStack.top();
        if (rackCapacity >= (clothesWeight + currClothing)) {
            clothesWeight += currClothing;
            clothesStack.pop();
        }
        else {
            numOfRacks++;
            clothesWeight = 0;
            clothesWeight += currClothing;
            clothesStack.pop();
        }
    }

    cout << numOfRacks << endl;
}

int main() {
    stack<int> clothesStack = getInputClothesStack();

    int rackCapacity = 0;
    cin >> rackCapacity;

    workOutNeededRacks(clothesStack, rackCapacity);

    return 0;
}