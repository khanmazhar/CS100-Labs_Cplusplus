#include <iostream>

using namespace std;

int main()
{
    //declarations
    double kilograms, pounds, ounces;
    cout << "Enter Kilograms: ";
    cin >> kilograms;

    //Conversions
    pounds = kilograms * 2.2;
    ounces = pounds * 16;

    //Outputs
    cout << kilograms << "kgs in pounds = " << pounds << endl;
    cout << kilograms << "kgs in ounces = " << ounces << endl;
    return 0;
}
