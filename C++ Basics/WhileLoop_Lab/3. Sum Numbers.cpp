#include <iostream>
using namespace std;

int main()
{
    int startNumber;
    cin >> startNumber;

    //��������: �������� ����� + ������� �� ��� ������
    //�������: sum >= startNumber
    //������������: sum < startNumber
    int sum = 0; //���� �� �������

    while (sum < startNumber)
    {
        int number;
        cin >> number;

        sum += number;
    }

    cout << sum;



    return 0;

}