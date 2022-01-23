#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //валидно: числото е в [-100; 100] и е различно от 0 -> "Yes"
    // 1. [-100; 100] -> число >= -100 и число <= 100
    // 2. число != 0
    //противен случай -> "No"

    if (number >= -100 && number <= 100 && number != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

