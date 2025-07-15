#include <iostream>
using namespace std;

// BankAccount class definition
class BankAccount 
{
    private:
    int balance;  

    public:
    
    // Constructor to initialize balance
    BankAccount(int initialBalance) 
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else 
        {
            balance = 0;
            cout << "Invalid initial balance! Setting to 0." << "\n";
        }
    }

    // Function to deposit money
    void deposit(int amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        } 
        else 
        {
            cout << "Deposit amount must be positive!" << "\n";
        }
    }

    // Function to withdraw money
    void withdraw(int amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        } 
        else 
        {
            cout << "Invalid or insufficient balance!" << "\n";
        }
    }

    // Function to get current balance
    int getBalance()  
    {
        return balance;
    }
};

int main() 
{
    // Create a bank account with initial balance of 1000
    BankAccount myAccount(1000);

    // Deposit money
    myAccount.deposit(500);

    // Withdraw money
    myAccount.withdraw(200);

    // Display current balance
    cout << "Current Balance: " << myAccount.getBalance() << "\n";

    return 0;
}
