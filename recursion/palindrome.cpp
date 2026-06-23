#include <iostream>
using namespace std;

bool palindrome(int n)
{
    if (n >= 0 && n < 10)
        return true;

    // Find divisor to get first digit
    int div = 1;
    while (n / div >= 10)
        div *= 10;

    int first = n / div;
    int last = n % 10;

    if (first != last)
        return false;

    // Remove first and last digits
    n = (n % div) / 10;

    return palindrome(n);
}
