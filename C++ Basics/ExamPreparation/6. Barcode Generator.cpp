#include <iostream>
using namespace std;

int main()
{
    int startNumber;
    cin >> startNumber;
    //четирицифрено (5324)
    int startUnits = startNumber % 10;//единици
    int startTens = startNumber / 10 % 10;//десетици
    int startHundreds = startNumber / 100 % 10;//стотици
    int startThousands = startNumber / 1000; //хилядни

    int endNumber;
    cin >> endNumber;
    //четирицифрено (5324)
    int endUnits = endNumber % 10;//единици
    int endTens = endNumber / 10 % 10;//десетици
    int endHundreds = endNumber / 100 % 10;//стотици
    int endThousands = endNumber / 1000; //хилядни


    //генерирам всички 4-цифрени числа
    for (int thousands = startThousands; thousands <= endThousands; thousands++) //хилядни
    {
        for (int hundreds = startHundreds; hundreds <= endHundreds; hundreds++) //стотици
        {
            for (int tens = startTens; tens <= endTens; tens++) //десетици
            {
                for (int units = startUnits; units <= endUnits; units++) //единици
                {
                    if (units % 2 != 0 && tens % 2 != 0 && hundreds % 2 != 0 && thousands % 2 != 0)
                    {
                        cout << thousands << hundreds << tens << units << " ";
                    }
                }
            }
        }
    }


    return 0;
}

