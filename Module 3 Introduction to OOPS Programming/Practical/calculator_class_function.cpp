#include <iostream>
using namespace std;

// Calculator class definition
class Calculator 
{
public:
    // Addition
    int add(int a, int b) 
    {
        return a + b;
    }

    // Subtraction
    int subtract(int a, int b)
     {
        return a - b;
    }

    // Multiplication
    int multiply(int a, int b) 
    {
        return a * b;
    }

    // Division
    int divide(int a, int b) 
    {
        if (b == 0) 
        {
            cout << "Error: Division by zero!" << "\n";
            return 0;
        }
        return a / b;
    }
};

int main() 
{   
      int num1, num2;

      Calculator calc;  // create object

   

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nAddition: " << calc.add(num1, num2);
    cout << "\nSubtraction: " << calc.subtract(num1, num2);
    cout << "\nMultiplication: " << calc.multiply(num1, num2);
    cout << "\nDivision: " << calc.divide(num1, num2) << "\n";

    return 0;
}