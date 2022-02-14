#include <iostream>
#include <string>
using namespace std;

int main()
{
    //повтарям: въвеждам входни данни
    //входни данни: "stop" или число под формата на текст ("5")
    //спирам: входни данни == "stop"
    //продължавам: входни данни != "stop"
    string input;
    cin >> input;

    int sumPrime = 0; //сума на прости числа
    int sumNonPrime = 0; //сума на съставни числа

    while (input != "stop")
    {
        //input -> число под формата на текст "5"
        //преобразуване на текст ("5") в цяло число (5)
        int number = stoi(input); //число, което трябва да проверя


        if (number < 0)  //отрицателно
        {
            cout << "Number is negative." << endl;
        }
        else  //положително (>= 0)
        {
            //просто (2 делителя) или съставно (> 2 делителя)
            //брой на делителите
            int count = 0;
            for (int diff = 1; diff <= number; diff++) //всички възможни делители: 1 до число
            {
                if (number % diff == 0) {
                    count++;
                }
            }

            //знам бр. делителите
            if (count == 2)
            {
                //числото е просто
                sumPrime += number;
            }
            else
            {
                //числото е съставно
                sumNonPrime += number;

            }

        }

        cin >> input;
    }

    cout << "Sum of all prime numbers is: " << sumPrime << endl;
    cout << "Sum of all non prime numbers is: " << sumNonPrime << endl;
    return 0;
}