#include <iostream>
using namespace std;

int main() 

{
    // Implicit Type Conversion
    int intVal = 10;
    float floatVal = intVal;  // Implicit: int to float

    // Explicit Type Conversion (Type Casting = one datatype to another)
    float original = 5.75;
    int converted = (int)original;  // Explicit: float to int

    // Output the results
    cout << "Implicit Conversion (int to float):" << "\n";
    cout << "Original int: " << intVal << ", Converted float: " << floatVal << "\n";

    cout << "\nExplicit Conversion (float to int):" << "\n";
    cout << "Original float: " << original << ", Converted int: " << converted << "\n";

    return 0;
}
