#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//������ ����� �� 1 �� n
	//��������� �� ����� ����� �� 1 �� n: ��������� �������� + ��������
	//������: ������� (1)
	//����: ���������� (n)
	//�������: +1

	int sum = 0; //���� �� �������
	for (int number = 1; number <= n; number++)  //������� �� n-����
	{
		int value;
		cin >> value;

		sum += value;
		//sum = sum + value;
	}

	cout << sum << endl;


	return 0;
}