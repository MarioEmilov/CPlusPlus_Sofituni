#include <iostream>
using namespace std;

int main()
{
    //1. ������ �����: ��� �� ��� � ��. �������
    //2. �����������: �	"The architect {����� �� ���������} will need {���������� ������} hours to complete {���� �� ���������} project/s."
    string name; //��� �� ���������
    int projectsCount; //���� �� �������
    cin >> name >> projectsCount;

    int needHours = projectsCount * 3; //���������� ������
    cout << "The architect " << name << " will need " <<
        needHours << " hours to complete " << projectsCount << " project/s.";

    return 0;
}