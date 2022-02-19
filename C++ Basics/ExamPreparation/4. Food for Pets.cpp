// 4. Food for Pets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //������ �����
    int days;
    cin >> days;

    double totalFood;
    cin >> totalFood;

    double totalBiscuits = 0; //���� �� ������� �������� �� ������ ���
    double totalEatenFoodForAllDays = 0;// ���� ������� �� �� ����� �� ������ ���
    double totalEatenDog = 0; //���� ������� �� �� ������ �� ������ ���
    double totalEatenCat = 0; // ���� ������� �� �� ������� �� ������ ���

    //�� ����� ��� �� 1 �� ��������� -> ������� ��� �� ������ � ������� ��� �� �������
    for (int day = 1; day <= days; day++)
    {
        int eatenDog, eatenCat;
        cin >> eatenDog; //������� �� ������
        totalEatenDog += eatenDog;
        cin >> eatenCat; //������� �� �������
        totalEatenCat += eatenCat;

        int totalEatenForDay = eatenDog + eatenCat; //���� �� ����
        totalEatenFoodForAllDays += totalEatenForDay;

        //��������
        if (day % 3 == 0)
        {
            double biscuits = 0.10 * totalEatenForDay;
            totalBiscuits += biscuits;
        }

    }

    //���������� ������������
    cout << "Total eaten biscuits: " << round(totalBiscuits) << "gr." << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalEatenFoodForAllDays / totalFood * 100 << "% of the food has been eaten." << endl;
    cout << totalEatenDog / totalEatenFoodForAllDays * 100 << "% eaten from the dog." << endl;
    cout << totalEatenCat / totalEatenFoodForAllDays * 100 << "% eaten from the cat." << endl;
    return 0;
}

//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
