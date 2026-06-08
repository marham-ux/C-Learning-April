#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int size = height.size();
        int result = 0, k = 0;
        int l = size - 1;

        int left = height[k];
        int right = height[l];

        for (int i = 0; i < size; i++)
        {
            if (left <= right && result < left * (size - i - 1))
            {
                result = left * (size - i - 1);
                left = height[++k];
            }
            else if (left > right && result < right * (size - i - 1))
            {
                result = right * (size - i - 1);
                right = height[--l];
            }
        }
        return result;
    }
};

int main()
{

    vector<int> height = {1, 2, 3, 1000, 9};
}