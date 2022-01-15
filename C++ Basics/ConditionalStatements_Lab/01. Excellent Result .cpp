#include <iostream>
using namespace std;

int main()
{
    //1. оценка (реално число - double)
    //2. проверка дали оценката >= 5.50 -> "Excellent!"
    double grade;
    cin >> grade;

    if (grade >= 5.50)
    {
        cout << "Excellent!";
    }

    return 0;
}
