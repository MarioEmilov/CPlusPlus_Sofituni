//начин 1
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //валидно -> [100;200] или е 0 -> не печатаме нищо
    // 1. [100; 200] -> число >= 100 и число <= 200
    // 2. число == 0
    //невалидно -> invalid
    if ((number >= 100 && number <= 200) || number == 0)
    {
        cout << "";
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}

//начин 2
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //валидно -> [100;200] или е 0 -> не печатаме нищо
    // 1. [100; 200] -> число >= 100 и число <= 200
    // 2. число == 0
    //невалидно -> invalid
    bool isValid = (number >= 100 && number <= 200) || number == 0;
    //isValid == true -> числото е валидно
    //isValid == false -> числото е невалидно

    //ако числото е невалидно -> invalid
    if (isValid == false)
    {
        cout << "invalid";
    }
    return 0;
}

//начин 3
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //валидно -> [100;200] или е 0 -> не печатаме нищо
    // 1. [100; 200] -> число >= 100 и число <= 200
    // 2. число == 0
    //невалидно -> invalid
    bool isValid = (number >= 100 && number <= 200) || number == 0;
    //isValid == true -> числото е валидно
    //isValid == false -> числото е невалидно

    //ако числото е невалидно -> invalid
    //isValid = true -> !true = false
    //isValid = false -> !false = true
    if (!isValid)
    {
        cout << "invalid";
    }
    return 0;
}

