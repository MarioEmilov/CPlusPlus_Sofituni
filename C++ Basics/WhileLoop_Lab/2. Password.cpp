#include <iostream>
using namespace std;

int main()
{
	string username, password;
	cin >> username >> password;

	//повтаряме: въвеждаме парола за вход
	//спираме: въведената парола ==  password
	//продължаваме: въведената парола != password
	string enteredPassword;
	cin >> enteredPassword;

	while (enteredPassword != password)
	{
		cin >> enteredPassword;
	}

	//enteredPassword == password
	cout << "Welcome " << username << "!";
	return 0;
}