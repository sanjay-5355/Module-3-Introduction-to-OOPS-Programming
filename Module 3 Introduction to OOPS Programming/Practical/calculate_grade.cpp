#include <iostream>
using namespace std;
int main() 
{
    int marks;

    // Input student marks
    cout << "Enter student marks (0-100): ";
    cin >> marks;

    // Grade calculation using if-else
    if (marks >= 90 && marks <= 100)
 {
        cout << "Grade: A+" << "\n";
    }
    else if (marks >= 80)
 {
        cout << "Grade: A" << "\n";
    }
    else if (marks >= 70)
 {
        cout << "Grade: B" << "\n";
    }
    else if (marks >= 60)
{
        cout << "Grade: C" << "\n";
    }
    else if (marks >= 50) 
{
        cout << "Grade: D" << "\n";
    }
    else if (marks >= 0) 
    {
        cout << "Grade: F (Fail)" << "\n";
    }
    else
   {
        cout << "Invalid input. Marks must be between 0 and 100." << "\n";
    }

    return 0;
}
