//TASK3
#include <iostream>

using namespace std;

int main()
{
    int quantityOfEggs, quantityOfBread;
    double priceOfEggs, priceOfBread, userBudget;
    bool checkIfStudent;

    cout << "Enter the quantity of eggs: ";
    cin >> quantityOfEggs;
    cout << "Enter the quantity of bread: ";
    cin >> quantityOfBread;
    cout << "Enter the price of eggs: ";
    cin >> priceOfEggs;
    cout << "Enter the price of bread: ";
    cin >> priceOfBread;

    //Calculations
    double totalCostOfEggs, totalCostOfBread, combinedTotalCost;
    totalCostOfEggs = quantityOfEggs * priceOfEggs;
    totalCostOfBread = quantityOfBread * priceOfBread;
    combinedTotalCost = totalCostOfBread + totalCostOfEggs;

    //Prompt the user for his budget
    cout << "Enter your total current budget: ";
    cin >> userBudget;

    //Check if user is student and make discount accordingly
    cout << "Are you a student? Enter 1 for yes and 0 for N\n";
    cin >> checkIfStudent;
    if (checkIfStudent)
    {
        combinedTotalCost = (combinedTotalCost * 90) / 100;
    }

    cout << "Your total cost is " << combinedTotalCost << endl;

    //Check if cost is within budget
    if (userBudget == combinedTotalCost || userBudget > combinedTotalCost)
    {
        cout << "Cost is within the budget.\n";
    }
    else
    {
        cout << "Cost is not within the budget.\n";
    }

    return 0;
}