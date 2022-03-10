#include <iostream>

using namespace std;

void smallestNum(int num1, int num2, int num3)
{
    if (num1 < num2) {
        if (num1 < num3) {
            cout << num1;
        }
        else {
            cout << num3;
        }
    }
    else {
        if (num2 < num3) {
            cout << num2;
        }
        else {
            cout << num3;
        }
    }
}
int main()
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;
    smallestNum(num1, num2, num3);
    return 0;
}