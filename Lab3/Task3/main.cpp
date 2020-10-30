#include <iostream>
#include <string>

using namespace std;

int main()
{
    char first_letter_of_color, first_letter_of_month, last_digit_of_age, last_digit_of_mobileNumber;

    cout << "First letter of your Favorite color: ";
    cin >> first_letter_of_color;

    cout << "First letter of the Month you were born in: ";
    cin >> first_letter_of_month;

    cout << "Last digit of your age: ";
    cin >> last_digit_of_age;

    cout << "Last digit of your mobile number: ";
    cin >> last_digit_of_mobileNumber;

    string a = "";
    a = a + first_letter_of_color + first_letter_of_month + last_digit_of_age + last_digit_of_mobileNumber;
    cout << a;

    return 0;
}
