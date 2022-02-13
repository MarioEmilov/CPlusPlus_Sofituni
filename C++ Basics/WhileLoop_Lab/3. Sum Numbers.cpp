#include <iostream>
using namespace std;

int main()
{
    int startNumber;
    cin >> startNumber;

    //повтарям: въвеждам число + добавям го към сумата
    //спираме: sum >= startNumber
    //продължаваме: sum < startNumber
    int sum = 0; //сума от числата

    while (sum < startNumber)
    {
        int number;
        cin >> number;

        sum += number;
    }

    cout << sum;



    return 0;

}