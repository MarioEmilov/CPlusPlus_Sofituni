#include <iostream>
#include <string>

using namespace std;

int main()
{
    int degrees;
    string stateOfDay, outfit, shoes;

    cin >> degrees;
    cin >> stateOfDay;

    if (stateOfDay == "Morning")
    {
        if (degrees >= 10 && degrees <= 18)
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (degrees > 18 && degrees <= 24)
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    }
    else if (stateOfDay == "Afternoon")
    {
        if (degrees >= 10 && degrees <= 18)
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (degrees > 18 && degrees <= 24)
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
    }
    else if (stateOfDay == "Evening")
    {
        if (degrees >= 10 && degrees <= 18)
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (degrees > 18 && degrees <= 24)
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;
}