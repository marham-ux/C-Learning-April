#include <string>

using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int k = 0, l = 0, p;
        bool r = true;

        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[l])
            {
                k = i - l;
                l++;
                if (l == needle.size())
                    return k;

                if (haystack[i + 1] == needle[0] && r)
                {
                    r = false;
                    p = i + 1;
                }
            }
            else
            {
                l = 0;
                i = p;
                r = true;
            }
        }
        return -1;
    }
};