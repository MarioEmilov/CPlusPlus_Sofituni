#include <iostream>
using namespace std;

void signInteger(int number)
{
    if (number > 0)
    {
        cout << "The number " << number << " is positive." << endl;
    }
    else if (number < 0)
    {
        cout << "The number " << number << " is negative." << endl;
        
    }
    else if (number == 0)
    {
        cout << "The number 0 is zero." << endl;
    }
}

int main()
{
    int number;
    cin >> number;
    signInteger(number);
    return 0;
}
