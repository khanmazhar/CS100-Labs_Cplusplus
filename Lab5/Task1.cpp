//TASK 1
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Its even\n";
    }
    else
    {
        cout << "Its odd\n";
    }

    return 0;
}