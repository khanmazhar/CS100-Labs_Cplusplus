#include <iostream>

using namespace std;

int main()
{
    //Declare Variables
    int country_A = 1;
    int country_B = 2;
    int user_input = 0;
    double gross_income, actual_income;

    //Propmt the user for inputs
    cout << "Which country are your from? Enter 1 for country A or 2 for country B...";
    cin >> user_input;
    cout << "Enter your gross income: ";
    cin >> gross_income;

    if (user_input == country_A)
    {
        if (gross_income > 30000)
        {
            actual_income = gross_income * (90 / 100.0);
        }
        else if (gross_income > 10000 && gross_income < 30000)
        {
            actual_income = gross_income * (95 / 100.0);
        }
        else
        {
            actual_income = gross_income;
        }
    }
    if (user_input == country_B)
    {
        if (gross_income > 30000)
        {
            actual_income = gross_income * (85 / 100.0);
        }
        else if (gross_income > 10000 && gross_income < 30000)
        {
            actual_income = gross_income * (92 / 100.0);
        }
        else if (gross_income < 10000)
        {
            actual_income = gross_income;
        }
    }
    cout << "Your actual income is " << actual_income << endl;
}