#include <iostream>
#include <string>

using namespace std;

int main()
{
    int allTournamets, startingPoints;

    cin >> allTournamets >> startingPoints;

    string tournamentRank;

    int allTourmentPoints = 0;
    int winnTourments = 0;

    for (int i = 0; i < allTournamets; i++)
    {
        cin >> tournamentRank;

        if (tournamentRank == "W")
        {
            startingPoints += 2000;
            allTourmentPoints += 2000;
            winnTourments++;
        }
        else if (tournamentRank == "F")
        {
            startingPoints += 1200;
            allTourmentPoints += 1200;
        }
        else if (tournamentRank == "SF")
        {
            startingPoints += 720;
            allTourmentPoints += 720;
        }
    }

    int averagePoints = allTourmentPoints / allTournamets;
    double winnerPercentage = (double)winnTourments / allTournamets * 100.0;

    cout << "Final points: " << startingPoints << endl;
    cout << "Average points: " << averagePoints << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << winnerPercentage << "%" << endl;
}