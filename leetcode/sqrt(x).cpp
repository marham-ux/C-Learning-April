#include <iostream>

using namespace std;

int mySqrt(int x)
{ // taking prime factors
    int d = 0, i;
    float r = 1;
    for (i = 2; i < x + 1; i++)
    {

        while (x % i == 0)
        {
            x /= i;
            r *= i;
            d++;
            if (d % 2 == 0)
                r /= i;
        }
    }
    if (d % 2 != 0)
        r /= i;
    return r;
}

int main()
{

    cout << mySqrt(225);
}