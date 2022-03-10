#include <iostream>

using namespace std;

double calculateTriangleArea(int bases, int height)
{
    double area = bases * height;

    return area;
}
int main()
{
    int bases;
    int height;
    cin >> bases >> height;
    double area = calculateTriangleArea(bases, height);
    cout << area;
    return 0;
}