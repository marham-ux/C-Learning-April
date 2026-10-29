#include <iostream>

using namespace std;

int divide(int a, int b)
{
    if (b == 0)
    {
        cout << "error";
        return -1;
    }
    if (a < b)
        return 0;

    return 1 + divide(a - b, b);
}