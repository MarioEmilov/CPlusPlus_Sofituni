#include <iostream>
using namespace std;

int main()
{

    //1. ц€ло число
    //2. проверка на числото -> остатъка да е 0 или 1
        //ако числото е четно -> "even"
        //ако числото е нечетно -> "odd"

    int number;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}