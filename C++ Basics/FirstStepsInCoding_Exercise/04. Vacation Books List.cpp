#include <iostream>
using namespace std;

int main()
{
    int bookPages, readedPagesForHour, daysNeeded;

    cin >> bookPages >> readedPagesForHour >> daysNeeded;
    int hoursNeededForBook = bookPages / readedPagesForHour;
    int hoursEveryDay = hoursNeededForBook / daysNeeded;
    cout << hoursEveryDay << endl;
}