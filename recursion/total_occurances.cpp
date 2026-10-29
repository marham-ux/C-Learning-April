#include <iostream>
using namespace std;

int totalOccurances(int *num, int size, int tar)
{
    if (size == 1)
        return *num;

    if (tar == *(num))
    {
        return 1 + totalOccurances(num + 1, size - 1, tar);
    }
    else
        return totalOccurances(num + 1, size - 1, tar);
}