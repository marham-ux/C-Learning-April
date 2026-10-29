
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    float balance;

public:
    BankAccount(int a, string n, float b)
    {
        accountNumber = a;
        accountHolder = n;

        if (b >= 0)
        {
            balance = b;
        }
        else
        {
            balance = 0;
        }
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
        else
        {
            cout << "Invalid amount or insufficient balance.\n";
        }
    }

    void displayInfo()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1(101, "Arham", 10000);

    cout << "Initial Account Information:\n";
    b1.displayInfo();

    b1.deposit(2000);
    b1.withdraw(3000);

    cout << "\nUpdated Account Information:\n";
    b1.displayInfo();

    return 0;
}
