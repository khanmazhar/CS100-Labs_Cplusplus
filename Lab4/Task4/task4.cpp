//TASK4
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userInput;
    cout << "Input a string: ";
    getline(cin, userInput);

    string firstWord = userInput.substr(0, 2);
    string secondWord = userInput.substr(3, 4);
    string thirdWord = userInput.substr(8, 2);
    string forthWord = userInput.substr(11, 4);

    string reversed = forthWord + " " + thirdWord + " " + secondWord + " " + firstWord;

    cout << "Reversed string: " << reversed << endl;
    cout << "The length of the string is " << reversed.length() << endl;

    return 0;
}