#include <iostream>
using namespace std;

int reverseDigits(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    return reverseDigits(n / 10, rev * 10 + n % 10);
}
