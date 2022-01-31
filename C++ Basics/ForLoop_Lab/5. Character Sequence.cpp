#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    //getline -> имаме интервали
    getline(cin, text);
    //всеки символ от текста
    //всяка позиция в текста -> първата (0) до последната (дължина - 1)
    //повтаряме: взимам всеки символ + печатам
    //начало: 0
    //край: дължина - 1
    //промяна: +1

    for (int position = 0; position <= text.length() - 1; position++)
    {
        char currentSymbol = text[position];
        cout << currentSymbol << endl;
    }



    return 0;
}