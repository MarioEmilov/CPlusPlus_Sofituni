#include <iostream>
using namespace std;

int main()
{
    int dogsCount;
    int petsCount;

    cin >> dogsCount >> petsCount;

    double result = dogsCount * 2.5 + petsCount * 4;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result << " lv.";

    return 0;
}

