#include <iostream>
using namespace std;

int main() 
{
    int size , arr[50],sum = 0 ;
    float average;

    // Ask user for array size
    cout << "Enter the number of elements: ";
    cin >> size;


    // Input array elements
    cout << "Enter " << size << " integers:\n";
    
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        
        sum += arr[i];  // Add to sum while reading
    }

    // Calculate average
    average = sum / size;

    // Display results
    cout << "\nSum = " << sum << "\n";
    cout << "Average = " << average << "\n";

    return 0;
}
