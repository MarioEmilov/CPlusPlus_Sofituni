#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    //getline -> ����� ���������
    getline(cin, text);
    //����� ������ �� ������
    //����� ������� � ������ -> ������� (0) �� ���������� (������� - 1)
    //���������: ������ ����� ������ + �������
    //������: 0
    //����: ������� - 1
    //�������: +1

    for (int position = 0; position <= text.length() - 1; position++)
    {
        char currentSymbol = text[position];
        cout << currentSymbol << endl;
    }



    return 0;
}