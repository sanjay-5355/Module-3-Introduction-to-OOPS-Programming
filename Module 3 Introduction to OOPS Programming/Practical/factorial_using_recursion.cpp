#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) 
{
    if (n <= 1) 
    {
        return 1;  // base case: factorial of 0 or 1 is 1
    } 
    else 
    {
        return n * factorial(n - 1);  // recursive call
    }
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) 
    {
        cout << "Factorial is not defined for negative numbers." << "\n";
    } 
    else 
    {
        int result = factorial(num);
        cout << "Factorial of " << num << " is: " << result << "\n" ;
    }

    return 0;
}


