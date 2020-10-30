#include <iostream>

using namespace std;

int main()
{
    int initialAmount = 2450;
    cout << "Initial amount: " << initialAmount << endl;

    int myDailyContribution = 100;
    int limit = 2750;

    //Add 100 3 times to initial amount
    for(int i = 0; i < 3; i++) {
        initialAmount = initialAmount + myDailyContribution;
    }

    cout << "My contribution: " << 300 << endl;
    cout << "Total amount: " << initialAmount << endl;

    //Calculate myShare
    int myShare = initialAmount / 4;
    cout << "My share: " << myShare << endl;

    //Calculate donation
    int donation = initialAmount % 4;
    cout << "Donation: " << donation << endl;

    return 0;
}
