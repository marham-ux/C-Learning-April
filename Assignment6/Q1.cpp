#include <iostream>
using namespace std;

// Recursively checks whether n is prime by trial division starting from i = 1
bool isPrime(int n, int i = 1)
{
    // Numbers less than or equal to 1 are not prime
    if (n <= 1)
        return false;

    // 2 is the smallest prime
    if (n == 2)
        return true;

    // If i divides n evenly (and i isn't 1), n is not prime
    if (n % i == 0)
        return false;

    // If i has exceeded sqrt(n), no divisor was found -> n is prime
    if (i > (n / i))
        return true;

    // Try the next divisor candidate
    return isPrime(n, i + 1);
}

int main()
{
    int num = 29;

    if (isPrime(num))
        cout << num << " is prime" << endl;
    else
        cout << num << " is not prime" << endl;

    return 0;
}