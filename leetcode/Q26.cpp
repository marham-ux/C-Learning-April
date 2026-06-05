#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int l = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {

            if (nums[i] == nums[i + 1])
            {
                continue;
            }
            else
            {
                nums[l] = nums[i + 1];
                l++;
            }
        }
        return l;
    }
};