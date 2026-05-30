#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{

    int maj = nums[0];
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            maj = nums[i]; // pick new maj
        }
        if (nums[i] == maj)
        {
            count++; // same as maj
        }
        else
        {
            count--; // cancel out
        }
    }

    return maj;
}