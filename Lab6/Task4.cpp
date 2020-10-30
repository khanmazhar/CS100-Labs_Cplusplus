#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char opp_sign;
    cout << "..........Welcome to my calculator.........." << endl;
    cout << "Enter one of the following operations." << endl;
    cout << "+ for addition" << endl;
    cout << "- for subtraction" << endl;
    cout << "* for multiplication" << endl;
    cout << "/ for division" << endl;
    cout << "| for modulus" << endl;
    cout << "^ for square root" << endl;
    cin >> opp_sign;

    if (opp_sign == '+' || opp_sign == '-' || opp_sign == '*' || opp_sign == '/')
    {
        double first_num, second_num;
        double result;
        cout << "Enter first number" << endl;
        cin >> first_num;
        cout << "Enter second number" << endl;
        cin >> second_num;
        switch (opp_sign)
        {
        case '+':
        {
            result = first_num + second_num;
            break;
        }
        case '-':
        {
            result = second_num - first_num;
            break;
        }
        case '*':
        {
            result = first_num * second_num;
            break;
        }
        case '/':
        {
            if (second_num == 0)
            {
                cout << "Cannot divide by zero." << endl;
                return 0;
            }
            else
            {
                result = first_num / second_num;
            }
            break;
        }
        }
        cout << "Result: " << result << endl;
    }
    else if (opp_sign == '|' || opp_sign == '^')
    {
        double number, result_1;

        cout << "Enter a number: " << endl;
        cin >> number;
        switch (opp_sign)
        {
        case '|':
        {
            result_1 = fabs(number);
            break;
        }
        case '^':
        {
            result_1 = sqrt(number);
            break;
        }
        }
        cout << "Result: " << result_1 << endl;
    }
}