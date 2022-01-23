#include <iostream>
using namespace std;

int main()
{
    double age;
    cin >> age;

    char gender;
    cin >> gender;

    //1. проверка за пола
    if (gender == 'm') {
        //проверка за възрастта
        if (age >= 16)
        {
            cout << "Mr.";
        }
        else //age < 16
        {
            cout << "Master";
        }
    }
    else if (gender == 'f')
    {
        //проверка за възрастта
        if (age >= 16)
        {
            cout << "Ms.";
        }
        else  //age < 16
        {
            cout << "Miss";
        }

    }
    return 0;
}