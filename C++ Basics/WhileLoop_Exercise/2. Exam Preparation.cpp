#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{
    int gradesNumber; cin >> gradesNumber;
    int badGrades = 0;
    int totalNumber = 0;
    double totalGrades = 0;
    bool is_running = true;
    string lastProblem;


    while (is_running)
    {
        if (badGrades == gradesNumber)
        {
            cout << "You need a break, " << badGrades << " poor grades." << endl;
            return 0;
        }
        string exerciseName; getline(cin >> ws, exerciseName);

        if (exerciseName == "Enough")
        {

            double average = totalGrades / totalNumber;
            cout << fixed << setprecision(2) << "Average score: " << average << endl;
            cout << "Number of problems: " << totalNumber << endl;
            cout << "Last problem: " << lastProblem << endl;
            return 0;
        }

        int currentGrade; cin >> currentGrade;

        if (currentGrade <= 4)
        {
            badGrades++;
        }
        totalGrades += currentGrade;
        totalNumber++;
        lastProblem = exerciseName;
    }
}