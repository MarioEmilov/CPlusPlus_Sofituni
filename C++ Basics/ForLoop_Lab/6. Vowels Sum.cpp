#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    //сумата от стойностите на гласните букви
    //всяка буква -> проверка дали е гласна (a, e, i, o, u) -> добавям към сумата нейната стойност
    int sum = 0; //сумата от стойностите на гласните букви
    for (int position = 0; position <= text.length() - 1; position++)
    {
        char currentSymbol = text[position];
        //проверка
        if (currentSymbol == 'a')
        {
            //стойността на а = 1
            sum = sum + 1;
            //sum += 1;

        }
        else if (currentSymbol == 'e')
        {
            sum = sum + 2;
            //sum += 2;

        }
        else if (currentSymbol == 'i')
        {
            sum = sum + 3;
            //sum += 3;
        }
        else if (currentSymbol == 'o')
        {
            sum = sum + 4;
            //sum += 4;
        }
        else if (currentSymbol == 'u')
        {
            sum = sum + 5;
            //sum += 5;
        }
    }

    cout << sum << endl;
    return 0;
}