#include <iostream>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {

        int l = 0, R = s.size() - 1;
        bool checker1 = false, checker2 = false;
        while (l < R)
        {
            if ((s[R] == 'A' || s[R] == 'E' || s[R] == 'I' ||
                 s[R] == 'o' || s[R] == 'u' || s[R] == 'a' || s[R] == 'e' || s[R] == 'i' ||
                 s[R] == 'O' || s[R] == 'U'))
            {

                checker1 = true;
            }
            else
            {
                R--;
            }

            if ((s[l] == 'A' || s[l] == 'E' || s[l] == 'I' ||
                 s[l] == 'O' || s[l] == 'U' || s[l] == 'a' ||
                 s[l] == 'e' || s[l] == 'i' ||
                 s[l] == 'o' || s[l] == 'u'))
            {
                checker2 = true;
            }
            else
            {
                l++;
            }

            if (checker1 && checker2)
            {
                swap(s[l], s[R]);
                l++;
                checker1 = false;
                R--;
                checker2 = false;
            }
        }
        return s;
    }
};