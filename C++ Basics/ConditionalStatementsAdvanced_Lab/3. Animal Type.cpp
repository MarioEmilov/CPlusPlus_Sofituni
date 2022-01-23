#include <iostream>
using namespace std;

int main()
{
    string animal;
    cin >> animal;

    //dog -> mammal
    //crocodile, tortoise, snake -> reptile
    //others -> unknown

    if (animal == "dog")
    {
        cout << "mammal" << endl;
    }
    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake")
    {
        cout << "reptile" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }


    return 0;
}
