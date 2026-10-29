#include <iostream>

using namespace std;

// int main()
// {

//     char arr[] = "hi";

//     for (int i = 0; i != '/0'; i++)
//     {
//         cout << arr[i];
//     }
// }
void fun(int n)
{
    if (n <= 0)
    {
        cout << 0;
    }
    else
    {

        fun(n - 1);
        cout << n * 2 << " ";
    }
}

int main()
{
    fun(5);
}