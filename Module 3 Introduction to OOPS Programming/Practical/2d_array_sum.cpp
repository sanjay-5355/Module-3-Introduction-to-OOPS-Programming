#include <iostream>
using namespace std;

int main() 
{
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input for first matrix
    cout << "Enter elements of the first 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input for second matrix
    cout << "\nEnter elements of the second 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display result
    cout << "\nResult of Matrix Addition (2x2):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

