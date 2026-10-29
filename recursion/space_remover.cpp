#include <iostream>

using namespace std;

string removeSpaces(string s, int index)
{
    if (s[index] == '/0')
    {
        return "";
    }
    if (s[index] == ' ')
    {
        return removeSpaces(s, index + 1);
    }
    else
    {
        return s[index] + removeSpaces(s, index);
    }
}
