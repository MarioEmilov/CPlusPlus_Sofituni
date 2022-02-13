#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    //повтаряме: въвеждаме входни данни  -> проверявам дали е максимум
    //стоп: входни данни == "Stop"
    //продължаваме: входни данни != "Stop"
    //входни данни: "Stop" или цяло число под формата на текст
    string input;
    cin >> input;

    int max = INT_MIN; //максималното число

    while (input != "Stop")
    {
        //input e цяло число под формата на текст = "100"
        //input = "100" -> преобразувам в цяло число -> 100
        int number = stoi(input);
        //проверка дали е максимум
        if (number > max)
        {
            max = number;

        }

        cin >> input;

    }

    cout << max << endl;


    return 0;
}