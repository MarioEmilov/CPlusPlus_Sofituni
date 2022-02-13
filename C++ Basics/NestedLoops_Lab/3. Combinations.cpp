#include <iostream>
using namespace std;

int main()
{
    int number; cin >> number;
    int count = 0;

    for (int a = 0; a <= number; a++)
    {
        for (int b = 0; b <= number; b++)
        {
            for (int c = 0; c <= number; c++)
            {
                if (a + b + c == number)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;

}