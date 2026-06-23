#include <iostream>

using namespace std;

int *checker(int *ptr)
{

    if (*ptr % 2 == 0)
    {
        *ptr += 2;
    }
    else
        *ptr -= 2;

    return ptr;
}

int main()
{

    int x = 5;

    int *ptr = checker(&x);

    cout << *ptr;
}