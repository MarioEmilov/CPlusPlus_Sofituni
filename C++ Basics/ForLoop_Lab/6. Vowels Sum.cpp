#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    //������ �� ����������� �� �������� �����
    //����� ����� -> �������� ���� � ������ (a, e, i, o, u) -> ������� ��� ������ ������� ��������
    int sum = 0; //������ �� ����������� �� �������� �����
    for (int position = 0; position <= text.length() - 1; position++)
    {
        char currentSymbol = text[position];
        //��������
        if (currentSymbol == 'a')
        {
            //���������� �� � = 1
            sum = sum + 1;
            //sum += 1;

        }
        else if (currentSymbol == 'e')
        {
            sum = sum + 2;
            //sum += 2;

        }
        else if (currentSymbol == 'i')
        {
            sum = sum + 3;
            //sum += 3;
        }
        else if (currentSymbol == 'o')
        {
            sum = sum + 4;
            //sum += 4;
        }
        else if (currentSymbol == 'u')
        {
            sum = sum + 5;
            //sum += 5;
        }
    }

    cout << sum << endl;
    return 0;
}