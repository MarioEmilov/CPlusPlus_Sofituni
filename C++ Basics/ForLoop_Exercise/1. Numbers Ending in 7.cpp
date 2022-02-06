#include <iostream>

using namespace std;

int main()
{
    for (size_t i = 1; i <= 1000; i++)
    {
        if (i % 10 == 7)
        {
            cout << i << endl;
        }
    }
}