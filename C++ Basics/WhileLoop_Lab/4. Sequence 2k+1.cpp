#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //������ ����� �� 1 �� n

    //FOR
    //������: 1
    //����: n
    //�������: * 2 + 1
    //���������: ��������
    for (int number = 1; number <= n; number = number * 2 + 1)
    {
        cout << number << endl;
    }

    //WHILE
    //���������: �������� + ��������
    //������: ����� > n
    //�����������: ����� <= n

    /*int number = 1;
    while (number <= n)
    {
        cout << number << endl;
        number = number * 2 + 1;
    }*/

    return 0;
}