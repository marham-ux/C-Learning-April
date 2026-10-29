#include <iostream>
using namespace std;

int findMin(int arr[], int size)
{
    if (size == 1)
        return arr[0];

    int min = findMin(arr - 1, size - 1);

    if (min > arr[0])
    {
        return arr[0];
    }
    else
        return min;
}