#include <iostream>

using namespace std;

int prod(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;

    if (b == 1)
        return a;

    return a + (a, b - 1);
}

int main()
{
}