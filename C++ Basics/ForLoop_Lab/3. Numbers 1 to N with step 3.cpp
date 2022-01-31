// 03. Numbers 1 to n over 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //отпечатвам всички числа от 1 до n през 3
    int n;
    cin >> n;
    //повтарям: печатането на число
    //начало: 1
    //край: n
    //промяна: +3

    //цикъл със стъпка - цикъл, в който имаме промяна различна от ++

    for (int number = 1; number <= n; number = number + 3)
    {
        cout << number << endl;
    }
    return 0;
}