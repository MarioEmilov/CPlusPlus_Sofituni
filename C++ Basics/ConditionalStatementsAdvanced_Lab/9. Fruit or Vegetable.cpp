#include <iostream>
using namespace std;

int main()
{
    string product;
    cin >> product;

    //banana, apple, kiwi, cherry, lemon � grapes -> fruit
    //tomato, cucumber, pepper � carrot -> vegetable
    //other -> unknown

    if (product == "banana" || product == "apple" || product == "kiwi"
        || product == "cherry" || product == "lemon" || product == "grapes")
    {
        cout << "fruit" << endl;
    }
    else if (product == "tomato" || product == "cucumber"
        || product == "pepper" || product == "carrot")
    {
        cout << "vegetable" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }
    return 0;
}

