#include <iostream>
#include <string>

using namespace std;

int main() {

	string dayName;

	cin >> dayName;

	string output;

	if (dayName == "Monday") {
		output = "Working day";
	}
	else if (dayName == "Tuesday") {
		output = "Working day";
	}
	else if (dayName == "Wednesday") {
		output = "Working day";
	}
	else if (dayName == "Thursday") {
		output = "Working day";
	}
	else if (dayName == "Friday") {
		output = "Working day";
	}
	else if (dayName == "Saturday") {
		output = "Weekend";
	}
	else if (dayName == "Sunday") {
		output = "Weekend";
	}
	else {
		output = "Error";
	}

	cout << output << endl;

	return 0;
}