#include <iostream>
using namespace std;

// Global variable (accessible from anywhere in the file)
int globalVar = 100;

// Function that uses both local and global variables
void showScope() 
{
    int localVar = 50;  // Local variable (only inside this function)

    cout << "Inside showScope() function:" << "\n";
    cout << "Local variable: " << localVar << "\n";
    cout << "Global variable: " << globalVar << "\n";
}

// Another function that modifies the global variable
void modifyGlobal()
{
    globalVar += 25;  // Change the global variable
    cout << "Inside modifyGlobal() function:" << "\n";
    cout << "Global variable modified to: " << globalVar << "\n";
}


int main() 
{
    cout << "Inside main() function:" << "\n";
    cout << "Global variable: " << globalVar << "\n";

    // Calling the first function
    showScope();

    // Local variable declared inside main
    int localVar = 200;
    cout << "\nLocal variable inside main(): " << localVar << "\n";

    // Calling the second function to change globalVar
    modifyGlobal();

    // Showing globalVar again to see the change
    cout << "\nBack in main(), global variable is now: " << globalVar << "\n";

    return 0;
}
