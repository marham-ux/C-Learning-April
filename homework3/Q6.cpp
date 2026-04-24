#include <iostream>
using namespace std;

int main()
{
    int x, n; // x = value, n = number of terms

    // Taking input
    cout << "Enter the value of x and n\n";
    cin >> x >> n;

    double sum = 1.0;  // stores final result (starts with 1)
    double term = 1.0; // stores each term of the series

    // Loop to calculate series
    for (int i = 1; i <= n; i++)
    {
        term = term * x / i; // calculate next term efficiently
        sum = sum + term;    // add term to sum
    }

    // Output result
    cout << sum;

    return 0;
}