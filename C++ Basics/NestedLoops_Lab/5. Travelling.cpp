#include <iostream>
#include <string>
using namespace std;

int main()
{
    string destination; getline(cin >> ws, destination);
    while (destination != "End")
    {
        double neededMoney; cin >> neededMoney;
        double totalSum = 0;
        while (totalSum < neededMoney)
        {
            double sum; cin >> sum;
            totalSum += sum;
        }
        cout << "Going to " << destination << "!" << endl;
        cin >> destination;
    }
    return 0;
}