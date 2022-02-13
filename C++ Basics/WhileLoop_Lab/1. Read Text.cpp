#include <iostream>
using namespace std;

int main()
{
    //не знаем колко точно пъти искаме да повтаряме нещо - while
    //какво повтаряме: четем текст -> отпечатваме текст
    //стоп: текст == "Stop"
    //продължаваме: текст != "Stop"
    string text;
    cin >> text;

    while (text != "Stop")
    {
        cout << text << endl;
        cin >> text;
    }
    return 0;
}