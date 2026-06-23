#include <iostream>
using namespace std;

int GCD(int num1, int num2)
{
    if (num2 == 0)
        return num1;

    return GCD(num2, num1 % num2);
}