#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string user_input;
    cout << "Enter an input: ";
    getline(cin, user_input);
    int length_of_input = user_input.length();

    if (length_of_input == 6)
    {
        if (user_input.substr(2, 1) == user_input.substr(3, 1) && user_input.substr(1, 1) == user_input.substr(4, 1) && user_input.substr(0, 1) == user_input.substr(5, 1))
        {
            cout << "The give string is a palindrome." << endl;
        }
        else
        {
            cout << "The given string is not a palindeom." << endl;
        }
    }
    else
    {
        cout << "Invalid Input!";
        return 0;
    }
}