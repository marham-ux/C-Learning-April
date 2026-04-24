#include <iostream>

using namespace std;

int main()
{

    cout << "from home sp26-bscs-0017\n";

    int n, pal = 0;

    cout << "enter your number\n";
    cin >> n;

    int temp = n;

    while (temp)
    {
        pal *= 10;
        pal += temp % 10;
        temp /= 10;
    }

    if (pal == n)
        cout << "number is palindrome";
    else
        cout << "number is not palindrome";
}