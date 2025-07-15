#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << "\n";
    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";
    cout << "a * b = " << a * b << "\n";
    cout << "a / b = " << a / b << "\n";
    cout << "a % b = " << a % b << "\n";

    // Relational Operators
    cout << "\nRelational Operators:" << "\n";
    cout << "a == b : " << (a == b) << "\n";
    cout << "a != b : " << (a != b) << "\n";
    cout << "a > b  : " << (a > b) << "\n";
    cout << "a < b  : " << (a < b) << "\n";
    cout << "a >= b : " << (a >= b) << "\n";
    cout << "a <= b : " << (a <= b) << "\n";

    // Logical Operators
    cout << "\nLogical Operators:" << "\n";
    cout << "(a > 0 && b > 0) : " << ((a > 0 && b > 0)) << "\n";
    cout << "(a > 0 || b < 0) : " << ((a > 0 || b < 0)) << "\n";
    cout << "!(a == b) : " << (!(a == b)) << "\n";

    // Bitwise Operators
    cout << "\nBitwise Operators:" << "\n";
    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "a << 1 = " << (a << 1) << "\n";
    cout << "a >> 1 = " << (a >> 1) << "\n";

    return 0;
}
