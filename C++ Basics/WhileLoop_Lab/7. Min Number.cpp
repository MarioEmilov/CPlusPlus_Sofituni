#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    //���������: ��������� ������ �����  -> ���������� ���� � �������
    //����: ������ ����� == "Stop"
    //������������: ������ ����� != "Stop"
    //������ �����: "Stop" ��� ���� ����� ��� ������� �� �����
    string input;
    cin >> input;

    int min = INT_MAX; //����������� �����

    while (input != "Stop")
    {
        //input e ���� ����� ��� ������� �� ����� = "100"
        //input = "100" -> ������������ � ���� ����� -> 100
        int number = stoi(input);
        //�������� ���� � �������
        if (number < min)
        {
            min = number;

        }

        cin >> input;

    }

    cout << min << endl;


    return 0;
}

