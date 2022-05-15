#include <iostream>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

int main() {    
    queue<string> queue;

    while (true) {
        string person;
        cin >> person;

        if (person == "Paid") {
            while (!queue.empty()) {
                cout << queue.front() << endl;
                queue.pop();
            }
        } else if (person == "End") {
            break;
        } else {
            queue.push(person);
        }
    }

    size_t queueLength = queue.size();

    cout << queueLength << " people remaining." << endl;

    return 0;
}