#include <iostream>
using namespace std;

int main()
{
	//1. прочитаме име, фамилия, възраст, град
	//2. отпечатваме: "You are <firstName> <lastName>, a <age>-years old person from <town>."
	string name, lastName, town;
	int age;
	cin >> name >> lastName >> age >> town;

	cout << "You are " << name << " " << lastName << ", a " << age << "-years old person from " << town << ".";


	return 0;
}