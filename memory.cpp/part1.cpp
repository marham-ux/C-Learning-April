#include <iostream>

using namespace std;

int main()
{

    /*   int arr[5] = {10, 20, 30, 40, 50};
      int *p = arr;

      // Print all elements using pointer (use loop + pointer increment)
      for (int i = 0; i < 5; i++)
      {
          cout << *p << endl;
          p++;
      } */

    /* Create a program that:

    Asks user for size of array
    Dynamically allocates array using new
    Takes input in the array
    Finds maximum and minimum using pointers
    Deletes the array properly */

    int num;
    int max = 0;

    cout << "num of array\n";
    cin >> num;

    int *array = new int[num];

    for (int i = 0; i < num; i++)
    {
        cout << "enter value\n";
        cin >> array[i];
    }

    int min = array[1];

    for (int i = 0; i < num; i++)
    {
        if (max < array[i])
            max = array[i];

        if (min > array[i])
            min = array[i];
    }

    cout << "maximum value was " << max;
    cout << "\nminimum value was" << min;

    delete[] array;
    array = nullptr;

}
