#include <iostream>
using namespace std;

int main()

{
    double change; cin >> change;

    int changeTwo = change * 100.0;
    int counter = 0;


    while (changeTwo > 0)
    {

        if (changeTwo >= 200)
        {
            changeTwo -= 200;
            counter++;
        }
        else if (changeTwo >= 100)
        {
            changeTwo -= 100;
            counter++;

        }
        else if (changeTwo >= 50)
        {
            changeTwo -= 50;
            counter++;
        }
        else if (changeTwo >= 20)
        {
            changeTwo -= 20;
            counter++;

        }
        else if (changeTwo >= 10)
        {
            changeTwo -= 10;
            counter++;
        }
        else if (changeTwo >= 5)
        {
            changeTwo -= 5;
            counter++;
        }
        else if (changeTwo >= 2)
        {
            changeTwo -= 2;
            counter++;

        }
        else if (changeTwo >= 1)
        {
            changeTwo -= 1;
            counter++;
        }
    }
    cout << fixed << counter << endl;
    return 0;

}