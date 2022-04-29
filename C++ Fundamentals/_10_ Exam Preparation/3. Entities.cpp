#include <iostream>
#include <vector>
#include <list>
#include <sstream>

using namespace std;

void printData(vector<vector<string> >& data) {
    for (vector<vector<string>>::iterator itRows = data.begin(); itRows != data.end(); itRows++) {
        vector<string>& curRow = *itRows;
        for (vector<string>::iterator itData = curRow.begin(); itData != curRow.end(); itData++)
            cout << *itData << " ";

        cout << endl;
    }
}

int findIndex(const vector<string>& data, const string & query) {
    int queryColumn = 0;
    for (string colName : data) {
        if (colName == query)
            return queryColumn;
        queryColumn++;
    }

    return -1;
}

int main()
{
    vector<string> columns;
    vector<vector<string> > data;
    string query; //името на колоната, по която трябва да смятаме

    //четем имената на колоните
    string buf;
    getline(cin, buf);

    istringstream columnStream(buf);
    string colBuf;
    while (columnStream >> colBuf)
        columns.push_back(colBuf);

    size_t numberOfColumns = columns.size();

    while (true)
    {
        getline(cin, buf);
        if (buf == "end")
            break;

        istringstream inputStream(buf);
        string itemBuf;
        vector<string> curLine;
        while (inputStream >> itemBuf)
            curLine.push_back(itemBuf);

        data.push_back(curLine);
    }

    cin >> query;

    //намираме номера на колоната
    int queryColumn = findIndex(columns, query);

    //проверяваме най-многото повторения в колоната
    vector<string> queryData;
    vector<unsigned> countData;

    for (vector<string>& row : data) 
    {
        string curData = row[queryColumn];

        int dataIndex = findIndex(queryData, curData);
        if (dataIndex == -1) 
        {
            queryData.push_back(curData);
            countData.push_back(1);
        }
        else 
        {
            countData[dataIndex]++;
        }
    }

    //намираме макспималния индекс
    unsigned maxOccurences = 0;
    int maxOccurencesIndex = 0;
    int curIndex = 0;

    for (unsigned curOccurency : countData) 
    {
        if (curOccurency > maxOccurences) 
        {
            maxOccurences = curOccurency;
            maxOccurencesIndex = curIndex;
        }
        curIndex++;
    }

    cout << queryData[maxOccurencesIndex] << " " << countData[maxOccurencesIndex] << endl;

    return 0;
}