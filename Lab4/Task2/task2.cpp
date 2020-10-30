//TASK2
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string city_1, city_2;
    cout << "Enter name of City 1: ";
    getline(cin, city_1);

    cout << "Enter name of City 2: ";
    getline(cin, city_2);

    int totalLength = city_1.length() + city_2.length();
    cout << "The sum of the length is " << totalLength << endl;

    return 0;
}