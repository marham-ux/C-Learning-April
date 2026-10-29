#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    float balance;

public:
    BankAccount(string n, int a, float b)
    {
        accountHolder = n;
        accountNumber = a;
        balance = b;
    }

    void deposit(int amount)
    {
        balance += amount;
    }
    void withdraw(int amount)
    {
        balance -= amount;
    }
    void displayBalance()
    {
        cout << balance;
    }
};

int main()
{
    BankAccount b1("Arham", 101, 5000);

    b1.displayBalance();

    b1.deposit(2000);
    b1.withdraw(1000);

    cout << "\nUpdated Account Details:\n";
    b1.displayBalance();

    return 0;
}