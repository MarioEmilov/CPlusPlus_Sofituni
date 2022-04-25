#include <iostream>
#include <array>
#include <sstream>

using namespace std;

const unsigned maxSize = 200;

bool areEqual(int array1[], int array1size, int array2[], int array2size)
{
    if (array1size != array2size)
        return false;

    for (int i = 0; i < array1size; i++)
        if (array1[i] != array2[i])
            return false;

    return true;
}

int parseArray(int array[], istringstream& stream) {

    int currentNumber;
    int index = 0;

    while (stream >> currentNumber) 
    {
        array[index] = currentNumber;
        if (++index >= maxSize)
            return -1;
    }

    return index;
}

int main(void)
{
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    int arr1[maxSize], arr2[maxSize];
    istringstream stream1(str1);
    istringstream stream2(str2);

    int arr1size = parseArray(arr1, stream1);
    int arr2size = parseArray(arr2, stream2);

    cout << (areEqual(arr1, arr1size, arr2, arr2size) ? "equal" : "not equal") << endl;

    /*     if (areEqual(arr1, arr2))
            cout << "equal" << endl;
        else
            cout << "not equal" << endl;
     */

    return 0;
}