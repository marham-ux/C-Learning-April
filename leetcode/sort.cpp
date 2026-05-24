#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int i, j, s, k;
    int arr[10];

    int result;

    for (int l = 0; l < 10; l++)
    {

        cout << "enter number";
        cin >> arr[l];
    }

    for (i = 0; i < 10; i++)
    {
        result = arr[i];
        for (j = i; j < 10; j++)
        {

            if (result < arr[j])
            {
                result = arr[j];
                s = j;
            }
        }
        if (s == 0)
        {
            continue;
        }

        arr[s] = arr[i];
        arr[i] = result;

        s = 0;
    }

    for (int p = 0; p < 10; p++)
    {

        cout << arr[p];
    }
}
