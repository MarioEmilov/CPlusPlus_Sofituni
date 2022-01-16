#include <iostream>
using namespace std;
int main()

{
    int number; 
    cin >> number;
    double bonus = 0.0;

    if (number <= 100) 
    {
        bonus += 5.0;
    }
    else if (number > 1000) 
    { 
        bonus += number * 0.1;
    }
    else 
    {
        bonus += number * 0.2;
    }

    if (number % 2 == 0) 
    {
        bonus += 1.0;
    }
    else if (number % 10 == 5) 
    {
        bonus += 2.0;
    }

    cout << bonus << endl;
    cout << bonus + number << endl;

    return 0;
}