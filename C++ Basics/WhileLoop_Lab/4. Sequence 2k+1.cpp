#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //всички числа от 1 до n

    //FOR
    //начало: 1
    //край: n
    //промяна: * 2 + 1
    //повтаряме: печатане
    for (int number = 1; number <= n; number = number * 2 + 1)
    {
        cout << number << endl;
    }

    //WHILE
    //повтаряме: печатане + променям
    //спирам: число > n
    //продължавам: число <= n

    /*int number = 1;
    while (number <= n)
    {
        cout << number << endl;
        number = number * 2 + 1;
    }*/

    return 0;
}