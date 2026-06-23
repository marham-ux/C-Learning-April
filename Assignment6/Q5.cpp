#include <iostream>
using namespace std;

// Reverses a char array in-place using recursion (two-pointer style)
char *rev(char *arr, int size)
{
    // Base case: 0 or 1 elements left to swap, nothing more to do
    if (size <= 1)
    {
        return arr;
    }

    // Swap first and last character of the current sub-array
    char temp = *(arr);
    *(arr) = *(arr + size - 1);
    *(arr + size - 1) = temp;

    // Move pointer one step inward, shrink size by 2 (both ends consumed)
    return rev(arr + 1, size - 2);
}

int main()
{
    char arr[] = "hello world";
    int len = 11; // length of "hello world", excluding the null terminator

    rev(arr, len);
    cout << "Reversed string: " << arr << endl;

    return 0;
}