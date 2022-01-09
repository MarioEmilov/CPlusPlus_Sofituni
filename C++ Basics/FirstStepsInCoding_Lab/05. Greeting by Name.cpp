#include <iostream>
using namespace std;

int main()
{
	//1. четем текст -> име на човек
	//2. отпечатваме: "Hello, <name>!"

	string name; //името на човека
	cin >> name;

	cout << "Hello, " << name << "!";

	return 0;
}