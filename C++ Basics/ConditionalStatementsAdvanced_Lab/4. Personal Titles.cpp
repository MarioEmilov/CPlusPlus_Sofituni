#include <iostream>
using namespace std;

int main()
{
    double age;
    cin >> age;

    char gender;
    cin >> gender;

    //1. �������� �� ����
    if (gender == 'm') {
        //�������� �� ���������
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
        //�������� �� ���������
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