#include <iostream>
#include <string>
using namespace std;

int main()
{
    double totalSum;
    bool is_running = true;
    cout.setf(ios::fixed);
    cout.precision(2);


    while (is_running)
    {
        string command; cin >> command;
        if (command == "NoMoreMoney")
        {
            is_running = false;
            cout << "Total: " << totalSum << endl;
            return 0;
        }
        double money = stod(command);
        if (money < 0)
        {
            cout << "Invalid operation!" << endl;
            cout << "Total: " << totalSum << endl;
            return 0;
        }

        totalSum += money;
        cout << "Increase: " << money << endl;
    }


    cout << "Total: " << totalSum << endl;
    return 0;
}