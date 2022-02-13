#include <iostream>
using namespace std;

int main()
{

    int floorsNumber; cin >> floorsNumber;
    int roomsNumber; cin >> roomsNumber;

    for (int i = floorsNumber; i >= 1; i--)
    {
        int count = 0;
        for (int j = 0; j < roomsNumber; j++)
        {
            if (i == floorsNumber)
            {
                cout << "L" << i << j << " ";
                count++;
            }

            if (i % 2 == 0 && i != floorsNumber)
            {
                cout << "O" << i << j << " ";
                count++;
            }

            if (i % 2 != 0 && i != floorsNumber)
            {
                cout << "A" << i << j << " ";
                count++;
            }

        }
        cout << endl;
    }
    return 0;
}