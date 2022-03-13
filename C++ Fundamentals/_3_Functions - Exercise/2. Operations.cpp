#include <iostream>
using namespace std;

void add(double x, double y) {
    cout<< x + y << endl;
}

void sub(double x, double y) {
    cout << x - y << endl;
}

void mul(double x, double y) {
    cout << x * y << endl;
}

void div(double x, double y) {
    if (y == 0)
        cout << "Can't divide by zero." << endl;
    else
        cout << x / y << endl;
}
int main()
{
    double x, y;
    char c;

    cin >> x >> y;
    cin >> c;
    

    switch (c) {
    case '+': add(x, y); break;
    case '-': sub(x, y); break;
    case '*': mul(x, y); break;
    case '/': div(x, y); break;
    }
   
}
