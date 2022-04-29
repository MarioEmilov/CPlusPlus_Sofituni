#include <iostream>
#include <vector>
#include <list>
#include <sstream>

using namespace std;

int main()
{
    unsigned pipes; 
    vector<unsigned> checkup;
    vector<unsigned> installation;

    cin >> pipes;
    checkup.resize(pipes);
    installation.resize(pipes);

    unsigned cur;

    for (cur = 0; cur < pipes; cur++)
        cin >> checkup[cur];
    for (cur = 0; cur < pipes; cur++)
        cin >> installation[cur];

    for (cur = 0; cur < pipes; cur++) {

        unsigned amortization = installation[cur] - checkup[cur];
        unsigned lifetime = installation[cur] / amortization;

        cout << lifetime << " ";
    }

    cout << endl;

    return 0;
}
