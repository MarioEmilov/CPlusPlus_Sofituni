#include <iostream>
using namespace std;

int main()
{
    int hour;
    cin >> hour;
    string dayOfWeek;
    cin >> dayOfWeek;

    //open -> ��� � [10-18] � ���� �� ��������� � �� ��� �� ������
    //close -> ��� < 10 ��� ��� > 18 ��� ���� �� ��������� � ������
    if (hour >= 10 && hour <= 18 && dayOfWeek != "Sunday")
    {
        cout << "open";
    }
    else
    {
        cout << "closed";
    }
    return 0;
}