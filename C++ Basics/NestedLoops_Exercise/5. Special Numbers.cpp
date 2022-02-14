//начин 1
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    //всички числа от 1111 до 9999
    //начало: 1111
    //край: 9999
    //промяна: +1
    //повтаряме: проверка дали е специално
    for (int number = 1111; number <= 9999; number++)
    {
        //проверка дали е специално
        //2418
        int units = number % 10;//единици
        int tens = number / 10 % 10; //десетици
        int hundreds = number / 100 % 10; //стотици
        int thousands = number / 1000; //хилядни

        //1. n да се дели на units без остатък (n % units == 0)
        //2. n да се дели на tens без остатък (n % tens == 0)
        //3. n да се дели на hundreds без остатък (n % hundreds == 0)
        //4. n да се дели на хилядните без остатък (n % thousands == 0)
        if (units != 0 && tens != 0 && hundreds != 0) {
            if (n % units == 0 && n % tens == 0 && n % hundreds == 0 && n % thousands == 0) {
                cout << number << " ";
            }
        }

    }

    return 0;
}

//начин 2
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    //1111 до 9999
    for (int thousands = 1; thousands <= 9; thousands++) //хилядни
    {
        for (int hundreds = 1; hundreds <= 9; hundreds++) //стотици
        {
            for (int tens = 1; tens <= 9; tens++) //десетици
            {
                for (int units = 1; units <= 9; units++) //единици
                {
                    if (n % units == 0 && n % tens == 0 && n % hundreds == 0 && n % thousands == 0) {
                        cout << thousands << hundreds << tens << units << " ";
                    }
                }
            }
        }
    }

    return 0;
}