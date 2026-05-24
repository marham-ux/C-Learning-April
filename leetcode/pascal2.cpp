#include <iostream>
#include <vector>

using namespace std;
vector<int> getRow(int rowIndex)
{
    vector<int> row, pre;

    for (int i = 0; i <= rowIndex; i++)
    {
        row.assign(i + 1, 1);
        for (int j = 1; j < i; j++)
            row[j] = pre[j - 1] + pre[j];
        pre = row;
    }

    return pre;
}

int main() {}