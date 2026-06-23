#include <iostream>
using namespace std;

// Recursively reverses the digits of an integer
int reversal(int n, int rev = 0)
{
    // Base case: no digits left to process, return accumulated reverse
    if (n == 0)
        return rev;

    // Peel off last digit (n % 10), shift rev left by one place (rev * 10),
    // add the peeled digit, then recurse on the remaining number (n / 10)
    return reversal(n / 10, (rev * 10) + (n % 10));
}

int main()
{
    int num = 123456;

    cout << "Reversed: " << reversal(num) << endl;

    return 0;
}