//1. POP (Procedural Programming):

// #include <iostream>
// using namespace std;

// // Function to calculate area
// int calculateArea(int length, int width) 
// {
//     return length * width;
// }

// int main() 
// {
//     int length, width;

//     // Input
//     cout << "Enter length: ";
//     cin >> length;
//     cout << "Enter width: ";
//     cin >> width;
//    // Call function and display area
//     int area = calculateArea(length, width);
//     cout << "Area of rectangle = " << area << "\n";

//     return 0;
// }

//2. OOP (Object-Oriented Programming):

#include <iostream>
using namespace std;

// Class definition
class Rectangle
{
private:
    int length, width;

public:
    // Method to input values
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    // Method to calculate area
    int area() 
    {
        return length * width;
    }
// Method to display area
    void display() 
    {
        cout << "Area of rectangle = " << area() << "\n";
    }
};

int main() 
{
    Rectangle r1;   // Object creation
    r1.input();     // Calling input method
    r1.display();   // Display area

    return 0;
}


