#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //�������: ������� � � [-100; 100] � � �������� �� 0 -> "Yes"
    // 1. [-100; 100] -> ����� >= -100 � ����� <= 100
    // 2. ����� != 0
    //�������� ������ -> "No"

    if (number >= -100 && number <= 100 && number != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

