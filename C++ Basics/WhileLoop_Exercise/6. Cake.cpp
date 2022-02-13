#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{
    int widhtSize; cin >> widhtSize;
    int lenghtSize; cin >> lenghtSize;
    int totalSize = widhtSize * lenghtSize;


    while (true)
    {
        string cakePieceSize; cin >> cakePieceSize;
        stringstream container(cakePieceSize);
        int pieceSize;
        container >> pieceSize;
        totalSize -= pieceSize;


        if (totalSize <= 0)
        {
            cout << "No more cake left! You need " << abs(totalSize) << " pieces more." << endl;
            return 0;
        }
        if (cakePieceSize == "STOP")
        {
            cout << totalSize - pieceSize << " pieces are left." << endl;
            return 0;
        }

    }
}