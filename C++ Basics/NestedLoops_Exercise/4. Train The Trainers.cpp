#include <iostream>
#include <string>
using namespace std;

int main()
{
	int countJury;
	cin >> countJury;
	cin.ignore();

	cout.setf(ios::fixed);
	cout.precision(2);
	//повтарям: входнни данни
	//входни данни: "Finish" или презентация
	//спирам: входни данни == "Finish"
	//продължавам: входни данни != "Finish"

	string input; //входни данни
	getline(cin, input);

	double sumAllGrades = 0;
	int countAllGrades = 0;
	while (input != "Finish")
	{
		//input -> презентация
		//1. въвеждане на оценки (бр. оценки = бр. журито)
		double sumGradesPerPresentation = 0; //сума за оценките от текущата презентация
		for (int jury = 1; jury <= countJury; jury++)
		{
			double grade;
			cin >> grade;

			sumGradesPerPresentation += grade; //текущата презентация

			sumAllGrades += grade; //всички презентации
			countAllGrades++; //брой на всички оценки за всички презентации
		}
		//2. средна оценка = сума от оценки / бр. оценки
		double averageGradePerPresentation = sumGradesPerPresentation / countJury;
		cout << input << " - " << averageGradePerPresentation << "." << endl;

		cin.ignore();
		getline(cin, input);
	}

	double averageAll = sumAllGrades / countAllGrades; //средна оценка от всички презентации = сума от оценките на всички презентации / общ брой получени оценки
	cout << "Student's final assessment is " << averageAll << "." << endl;
	return 0;
}