//TASK3
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string rollnumber;
    cout << "Enter your roll number: ";
    getline(cin, rollnumber);

    string formated = "20" + rollnumber.substr(0, 2) + "-" + rollnumber.substr(2, 2) + "-" + rollnumber.substr(4, 4);

    cout << "You roll number in official format is " + formated << endl;
    return 0;
}