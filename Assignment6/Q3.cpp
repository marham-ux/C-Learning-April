#include <iostream>
using namespace std;

// Recursively computes num raised to the power pow
long int power(int num, int pow)
{
    // Base case: anything^0 = 1
    if (pow == 0)
        return 1;

    // num * (num raised to pow - 1)
    return num * power(num, pow - 1);
}

int main()
{
    int base = 2, exponent = 10;

    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;

    return 0;
}