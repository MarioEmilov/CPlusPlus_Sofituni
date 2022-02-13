#include <iostream>
using namespace std;

int main()

{
    int firstNumber;
    cin >> firstNumber;
    int secondNumber;
    cin >> secondNumber;
    int magicNumber;
    cin >> magicNumber;
    int result = 0;
    int counter = 0;

    for (int i = firstNumber; i <= secondNumber; i++)
    {
        for (int j = firstNumber; j <= secondNumber; j++)
        {
            counter++;
            if (i + j == magicNumber)
            {

                cout << "Combination N:" << counter << " (" << i << " + " << j << " = " << i + j << ")" << endl;
                return 0;
            }
        }
    }
    cout << counter << " combinations - neither equals " << magicNumber << endl;
    return 0;
}