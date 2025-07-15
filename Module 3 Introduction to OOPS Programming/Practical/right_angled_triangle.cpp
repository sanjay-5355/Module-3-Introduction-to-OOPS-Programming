#include <iostream>
using namespace std;

int main() 
{
    int rows;

    // Ask the user how many rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) 
     {
        // Inner loop for stars in each row
        for (int j = 1; j <= i; j++)
       {
            cout << " * ";
        }
        cout << "\n";   // Move to next line after each row
    }

    return 0;
}
