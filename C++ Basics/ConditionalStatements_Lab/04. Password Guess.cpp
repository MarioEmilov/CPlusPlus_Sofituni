#include <iostream>
using namespace std;

int main()
{
    //1. ������ (�����)
    //2. �������� �� ��������
        //��� �������� ������� � "s3cr3t!P@ssw0rd" -> ����������� "Welcome"
        //��� �������� �� ������� -> ����������� "Wrong password!"

    string password;
    cin >> password;

    if (password == "s3cr3t!P@ssw0rd")
    {
        cout << "Welcome";
    }
    else
    {
        cout << "Wrong password!";
    }

    return 0;
}