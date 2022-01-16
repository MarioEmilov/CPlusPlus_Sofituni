#include <iostream>
using namespace std;

int main()
{
    double totalBudget; cin >> totalBudget;
    int gpuNumber; cin >> gpuNumber;
    int cpuNumber; cin >> cpuNumber;
    int ramNumber; cin >> ramNumber;


    double gpuPrice = 250;
    double totalGpuPrice = gpuNumber * gpuPrice;
    double cpuPrice = totalGpuPrice - (totalGpuPrice * 0.65);
    double ramPrice = totalGpuPrice - (totalGpuPrice * 0.9);
    double totalCpuPrice = cpuNumber * cpuPrice;
    double totalRamPrice = ramNumber * ramPrice;

    double totalPrice = totalGpuPrice + totalCpuPrice + totalRamPrice;

    if (gpuNumber > cpuNumber) 
    {
        totalPrice = totalPrice * 0.85;
    }


    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalBudget >= totalPrice) 
    {
        double moneyLeft = totalBudget - totalPrice;
        cout << "You have " << moneyLeft << " leva left!" << endl;
    }
    else 
    {
        double moneyNeeded = totalPrice - totalBudget;
        cout << "Not enough money! You need " << moneyNeeded << " leva more!" << endl;
    }

    return 0;

}