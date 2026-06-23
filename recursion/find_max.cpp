#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    // Base case
    if (size == 1)
        return arr[0];

    int maxRest = findMax(arr + 1, size - 1);

    if (arr[0] > maxRest)
        return arr[0];
    else
        return maxRest;
}