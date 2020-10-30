#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter number 3: ";
    cin >> num3;

    cout <<"------------------------\n";
    cout << "Type casting the user input: " << endl;
    cout <<"------------------------\n";
    int castedNum1, castedNum2, castedNum3;
    castedNum1 = static_cast<int>(num1);
    castedNum2 = static_cast<int>(num2);
    castedNum3 = static_cast<int>(num3);

    cout << num1 << " in int will be " << castedNum1 << endl;
    cout << num2 << " in int will be " << castedNum2 << endl;
    cout << num3 << " in int will be " << castedNum3 << endl;
    return 0;
}
