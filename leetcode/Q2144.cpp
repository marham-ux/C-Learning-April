#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minimumCost(vector<int> &cost)
    {

        int count = 0, result = 0;
        sort(cost.begin(), cost.end());

        for (int i = cost.size() - 1; i >= 0; i--)
        {
            count++;
            if (count == 3)
            {
                count = 0;
                continue;
            }
            else
            {
                result += cost[i];
            }
        }
        return result;
    }
};