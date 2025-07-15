#include <iostream>   
using namespace std;

int main()
{
    int guess, secret;

     secret = 69;
    

    cout << "Enter a number between 1 and 100:\n";
    do {
        cin >> guess;

        if (guess < secret)
        {
            cout << "Too low! Try again: ";
        } 
        else if (guess > secret)
        {
            cout << "Too high! Try again: ";
        } 
        else
        {
            cout << "🎉 Congratulations! You guessed the correct number: " << secret << "\n";
            
        }

    } while (guess != secret);

    return 0;
}
