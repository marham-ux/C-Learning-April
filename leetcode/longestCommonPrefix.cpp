#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    string returner = strs[1];

    for (int i = 1; i < strs.size(); i++)
    {
        for (int j = 0; j < returner.size(); j++)
        {
            if (returner[j] != strs[i][j])
            {
                returner = strs[i].substr(0, j);
                break;
            }
        }
    }
    return returner;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(strs);
}
// by AI
// std::string longestCommonPrefix(std::vector<std::string> &strs)
// {
//     if (strs.empty())
//         return "";

//     std::string prefix = strs[0];

//     for (int i = 1; i < strs.size(); i++)
//     {
//         while (strs[i].find(prefix) != 0)
//         {
//             prefix = prefix.substr(0, prefix.length() - 1);
//             if (prefix.empty())
//                 return "";
//         }
//     }

//     return prefix;
// }

// int main()
// {

//     // checking

//     std::vector<std::string> strs = {"intry", "interview", "interact"};

//     std::cout << longestCommonPrefix(strs);
// }