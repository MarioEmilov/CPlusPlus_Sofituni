#include <iostream>
using namespace std;

int main()
{
    //�� ����� ����� ����� ���� ������ �� ��������� ���� - while
    //����� ���������: ����� ����� -> ����������� �����
    //����: ����� == "Stop"
    //������������: ����� != "Stop"
    string text;
    cin >> text;

    while (text != "Stop")
    {
        cout << text << endl;
        cin >> text;
    }
    return 0;
}