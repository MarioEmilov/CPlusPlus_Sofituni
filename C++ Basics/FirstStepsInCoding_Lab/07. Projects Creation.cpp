#include <iostream>
using namespace std;

int main()
{
    //1. входни данни: име на арх и бр. проекти
    //2. отпечатваме: Х	"The architect {името на архитекта} will need {необходими часове} hours to complete {брой на проектите} project/s."
    string name; //име на архитекта
    int projectsCount; //брой на проекти
    cin >> name >> projectsCount;

    int needHours = projectsCount * 3; //необходими часове
    cout << "The architect " << name << " will need " <<
        needHours << " hours to complete " << projectsCount << " project/s.";

    return 0;
}