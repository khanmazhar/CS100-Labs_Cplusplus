//TASK1
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string firstName, lastName;
    cout << "Enter your first name please: ";
    getline(cin, firstName);

    cout << "Enter your last name please: ";
    getline(cin, lastName);

    string initails = firstName.substr(0, 1) + lastName.substr(0, 1);
    cout << "Your initials are " << initails << endl;

    return 0;
}