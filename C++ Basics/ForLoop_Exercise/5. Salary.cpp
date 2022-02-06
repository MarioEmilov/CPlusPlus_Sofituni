#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tabCount;

    int salary;

    cin >> tabCount >> salary;

    string tabName;

    for (int i = 1; i <= tabCount; i++)
    {
        cin >> tabName;

        if (tabName == "Facebook")
        {
            salary -= 150;
        }
        else if (tabName == "Instagram")
        {
            salary -= 100;
        }
        else if (tabName == "Reddit")
        {
            salary -= 50;
        }

        if (salary <= 0)
        {
            cout << "You have lost your salary." << endl;

            return 0;
        }
    }

    cout << salary << endl;
}