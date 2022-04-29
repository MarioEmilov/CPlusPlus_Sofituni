#include <iostream>
#include <vector>
#include <list>
#include <sstream>

using namespace std;


int main()
{
    list<string> input;

	while (1)
	{
		string curData;
		getline(cin, curData);

		if (curData == "end")
			break;
		input.push_front(curData);
	}

	list<string>::iterator itS = input.begin();
	while (itS != input.end()) 
	{
		string& curString = *itS;

		istringstream curStream(curString);

		list<string> curLine;
		string curWord;
		
		while (curStream >> curWord)
			curLine.push_front(curWord);
		for (string word : curLine)
			cout << word << " ";
		itS++;
	}
	cout << endl;

    return 0;
}