#include <iostream>

using namespace std;

int t_profit(int difficulty[], int profit[], int workers[], int s1, int s, int s3)
{

    int total = 0;

    for (int i = 0; i < s3; i++)
    {
        int max = INT_MIN;
        int index = 0;
        for (int j = 0; j < s1; j++)
        {
            if (difficulty[j] > workers[i])
            {
            }
            else
            {
                if (profit[j] > max)
                {
                    max = profit[j];
                }
            }
        }

        total += max;
    }

    return total;
}