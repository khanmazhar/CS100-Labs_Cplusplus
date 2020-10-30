//TASK4
#include <iostream>

using namespace std;

int main()
{
    int unitsConsumed;
    cout << "Enter the units consumed: ";
    cin >> unitsConsumed;
    double totalCost;
    cout << "UNITS: " << unitsConsumed << endl;

    if (unitsConsumed > 250)
    {
        totalCost = 50 * 0.50;
        unitsConsumed -= 50;
        totalCost = totalCost + 100 * 0.75;
        unitsConsumed -= 100;
        totalCost = totalCost + 100 * 1.20;
        unitsConsumed -= 100;
        totalCost = totalCost + unitsConsumed * 1.50;
    }
    else if (unitsConsumed >= 150 && unitsConsumed < 250)
    {
        totalCost = 50 * 0.50;
        unitsConsumed -= 50;
        totalCost = totalCost + 100 * 0.75;
        unitsConsumed -= 100;
        totalCost = totalCost + unitsConsumed * 1.20;
    }
    else if (unitsConsumed >= 100 && unitsConsumed < 150)
    {
        totalCost = 50 * 0.50;
        unitsConsumed -= 50;
        totalCost = totalCost + unitsConsumed * 0.75;
    }
    else if (unitsConsumed > 50 && unitsConsumed < 100)
    {
        totalCost = 50 * 0.50;
        unitsConsumed -= 50;
        totalCost = totalCost + unitsConsumed * 0.75;
    }
    else if (unitsConsumed <= 50)

    {
        totalCost = unitsConsumed * 0.50;
    }
    cout << "BILL: " << totalCost << endl;
}