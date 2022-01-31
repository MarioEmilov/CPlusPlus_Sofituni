#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //отпечатваме числата от n до 1
    //повтаряме: печатане на число
    //начало: n
    //край: 1
    //промяна: -1

    for (int number = n; number >= 1; number--)
    {
        cout << number << endl;
    }


    return 0;
}