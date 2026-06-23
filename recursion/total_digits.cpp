#include <iostream>
using namespace std;

int totalDigits(int num)
{

    if (num == 0)
        return 0;

    return 1 + totalDigits(num / 10);
}

int main()
{

    int n = 7653;

    cout << totalDigits(n);
}