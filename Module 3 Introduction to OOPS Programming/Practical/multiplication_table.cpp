#include <iostream>
using namespace std;

int main() 
{
    int number;

    // Ask the user for input
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    // Display the table using a for loop
    cout << "\n Multiplication Table of " << number << ":\n";

    for (int i = 1; i <= 10; i++) 
    {
        cout << number << " x " << i << " = " << number * i << "\n";
    }

    return 0;
}
