// 03. Numbers 1 to n over 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //���������� ������ ����� �� 1 �� n ���� 3
    int n;
    cin >> n;
    //��������: ���������� �� �����
    //������: 1
    //����: n
    //�������: +3

    //����� ��� ������ - �����, � ����� ����� ������� �������� �� ++

    for (int number = 1; number <= n; number = number + 3)
    {
        cout << number << endl;
    }
    return 0;
}