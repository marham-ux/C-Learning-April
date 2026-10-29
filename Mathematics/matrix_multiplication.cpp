#include <iostream>

using namespace std;

void multiplier(int matrix1[][3], int rows1, int cols1, int matrix2[][3], int rows2, int cols2, int matrix3[][3])
{
    if (cols1 != rows2)
    {
        cout << "rows and columns do not match";
        return;
    }

    for (int i = 0; i < rows1; i++)
    {

        for (int j = 0; j < cols2; j++)
        {

            for (int k = 0; k < cols1; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
