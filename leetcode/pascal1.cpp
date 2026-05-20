#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> generate;
    int result;
    if (numRows == 1)
        return {{1}};

    for (int i = 0; i < numRows; i++)
    {

        vector<int> triangle(i + 1, 1);

        for (int j = 1 < j < i; j++)
            triangle = generate[i - 1][j - 1] + generate[i - 1][j];

        generate.push_back(triangle);
    }
    return generate;
}

int main()
{
}
