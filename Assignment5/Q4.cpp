#include <iostream>

using namespace std;

bool contains(int num, int dig)
{

    while (num)
    {

        if ((num % 10) == (dig % 10))
        {
            num /= 10;
            if ((num % 10) == (dig / 10))
            {
                return true;
            }
        }
        else
        {
            num /= 10;
        }
    }

    return false;
}

main()
{

    cout << contains(2345, 34);
}
