#include <iostream>
#include <string>

using namespace std;

int main()
{
    string actorName;
    double startingPoints;
    int evaluatorsNumber;

    getline(cin >> ws, actorName);
    cin >> startingPoints >> evaluatorsNumber;

    string evaluatorName;
    double evaluatorPoints;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 0; i < evaluatorsNumber; i++)
    {
        getline(cin >> ws, evaluatorName);
        cin >> evaluatorPoints;

        int evaluatorNameLength = evaluatorName.length();

        startingPoints += (evaluatorPoints * evaluatorNameLength) / 2.0;

        if (startingPoints >= 1250.5)
        {
            cout << "Congratulations, " << actorName << " got a nominee for leading role with " << startingPoints << "!" << endl;

            return 0;
        }
    }

    double diff = 1250.5 - startingPoints;

    cout << "Sorry, " << actorName << " you need " << diff << " more!" << endl;
}