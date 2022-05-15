#include <iostream>
#include <queue>
#include <string>

using namespace std;

bool checkThePossible(queue<int> difference, const int tmp) {

	int sum = tmp;
	for (int i = 0; i < difference.size(); i++) {
		sum += difference.front();
		if (sum < 0) return false;
		difference.push(difference.front());
		difference.pop();
	}
	return true;
}

int main() {

	int pumps;
	cin >> pumps;

	queue<int> difference;

	for (int i = 0; i < pumps; i++) {
		int amountPetrol, distanceFromPetrolPump;
		cin >> amountPetrol;
		cin >> distanceFromPetrolPump;
		int totalDistPerPoint = amountPetrol - distanceFromPetrolPump;
		difference.push(totalDistPerPoint);
	}

	int index = 0;

	for (int i = 0; i < pumps; i++) {
		int tmp = difference.front();
		difference.pop(); difference.push(tmp); // extracts the number and push it at the back
		index = i;
		if (checkThePossible(difference, tmp)) break;

	}

	cout << index << endl; 
	return 0;
}