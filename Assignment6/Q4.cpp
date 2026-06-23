#include <iostream>
using namespace std;

// Recursively sums all elements of an array
int sum(int arr[], int size)
{
    // Base case: empty array has sum 0
    if (size == 0)
        return 0;

    // Last element + sum of the rest (size - 1 elements)
    return arr[size - 1] + sum(arr, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // number of elements in arr

    cout << "Sum: " << sum(arr, size) << endl;

    return 0;
}