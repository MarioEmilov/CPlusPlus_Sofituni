//����� 1
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //������� -> [100;200] ��� � 0 -> �� �������� ����
    // 1. [100; 200] -> ����� >= 100 � ����� <= 200
    // 2. ����� == 0
    //��������� -> invalid
    if ((number >= 100 && number <= 200) || number == 0)
    {
        cout << "";
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}

//����� 2
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //������� -> [100;200] ��� � 0 -> �� �������� ����
    // 1. [100; 200] -> ����� >= 100 � ����� <= 200
    // 2. ����� == 0
    //��������� -> invalid
    bool isValid = (number >= 100 && number <= 200) || number == 0;
    //isValid == true -> ������� � �������
    //isValid == false -> ������� � ���������

    //��� ������� � ��������� -> invalid
    if (isValid == false)
    {
        cout << "invalid";
    }
    return 0;
}

//����� 3
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //������� -> [100;200] ��� � 0 -> �� �������� ����
    // 1. [100; 200] -> ����� >= 100 � ����� <= 200
    // 2. ����� == 0
    //��������� -> invalid
    bool isValid = (number >= 100 && number <= 200) || number == 0;
    //isValid == true -> ������� � �������
    //isValid == false -> ������� � ���������

    //��� ������� � ��������� -> invalid
    //isValid = true -> !true = false
    //isValid = false -> !false = true
    if (!isValid)
    {
        cout << "invalid";
    }
    return 0;
}

