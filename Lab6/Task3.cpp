#include <iostream>
using namespace std;

int main()
{
    double age, body_temp;
    string gender;
    int chest_inf;

    cout << "Enter your gender: ";
    getline(cin, gender);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your body temperature: ";
    cin >> body_temp;
    cout << "Enter 1 if you have chest infection and 0 otherwise. ";
    cin >> chest_inf;

    if (gender == "male" || gender == "Male")
    {
        if (age > 30 && chest_inf == 1 && body_temp > 38)
        {
            cout << "You have corona virus." << endl;
        }
        else
        {
            cout << "You do not have corona virus." << endl;
        }
    }
    else if (gender == "female" || gender == "Female")
    {
        if (age > 35 && chest_inf == 1 && body_temp > 38.5)
        {
            cout << "You have corona virus." << endl;
        }
        else
        {
            cout << "You do not have corona virus." << endl;
        }
    }
    else
    {
        cout << "Invalid Input!" << endl;
        return 0;
    }
}