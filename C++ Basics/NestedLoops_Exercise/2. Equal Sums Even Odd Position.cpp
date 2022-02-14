#include <iostream>
using namespace std;

int main()
{

    int startNumber, endNumber;
    cin >> startNumber;
    cin >> endNumber;

    //всички числа от startNumber до endNumber
    //повтарям: проверка за валидност на всяко число
    //начало: startNumber
    //край: endNumber
    //промяна: +1

    for (int number = startNumber; number <= endNumber; number++)
    {
        //проверка
        //562341
        //цифри от четни позиции (562341) -> 6 ; 3 ; 1 -> единици + стотици + десетохилядни
        //цифри от нечетни позиции (562341) -> 5 ; 2 ; 4 -> десетици + хилядни + стохилядни
        int units = number % 10; //единици
        int tens = number / 10 % 10; //десетици
        int hundreds = number / 100 % 10; //стотици
        int thousands = number / 1000 % 10; //хилядни
        int tenThousands = number / 10000 % 10; //десетохилядни
        int hundredThousands = number / 100000;//стохилядните


        int sumEven = units + hundreds + tenThousands;
        int sumOdd = tens + thousands + hundredThousands;

        if (sumEven == sumOdd)
        {
            cout << number << " ";
        }
    }
    return 0;
}