//TASK2
#include <iostream>

using namespace std;

int main()
{
    string grade;
    cout << "Enter your grade... Example A+, C etc.\n";
    getline(cin, grade);

    if (grade == "A+" || grade == "A")
    {
        cout << "GPA: 4\n";
    }
    else if (grade == "A-")
    {
        cout << "GPA: 3.67\n";
    }
    else if (grade == "B+")
    {
        cout << "GPA: 3.33\n";
    }
    else if (grade == "B")
    {
        cout << "GPA: 3.0\n";
    }
    else if (grade == "B-")
    {
        cout << "GPA: 2.67\n";
    }
    else if (grade == "C+")
    {
        cout << "GPA: 2.33\n";
    }
    else if (grade == "C")
    {
        cout << "GPA: 2.0\n";
    }
    else if (grade == "F")
    {
        cout << "You have failed\n";
    }
    else
    {
        cout << "Enter a valid grade.\n";
    }

    return 0;
}