#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    //���������: ��������� ������ �����  -> ���������� ���� � ��������
    //����: ������ ����� == "Stop"
    //������������: ������ ����� != "Stop"
    //������ �����: "Stop" ��� ���� ����� ��� ������� �� �����
    string input;
    cin >> input;

    int max = INT_MIN; //������������ �����

    while (input != "Stop")
    {
        //input e ���� ����� ��� ������� �� ����� = "100"
        //input = "100" -> ������������ � ���� ����� -> 100
        int number = stoi(input);
        //�������� ���� � ��������
        if (number > max)
        {
            max = number;

        }

        cin >> input;

    }

    cout << max << endl;


    return 0;
}