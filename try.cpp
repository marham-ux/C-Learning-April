#include <iostream>

using namespace std;

int main()
{
    int m = 0, n, p, t, k;

    cin >> n >> p;

    for (int i = 1; i < n + 1; i++)
    {

        if (p == 1) //
        {
            cin >> t; // 4
            m++;      // 1
            continue;
        }

        if (i >= p)
        {
            cin >> k;   // 1
            if (k >= t) //
            {
                if (!(k <= 0))
                {
                    m++;
                    continue;
                }
                else
                    continue;
            }
            else
                continue;
        }
        cin >> t;
        if (t <= 0)
        {
            continue;
        }
        m++;
    }
    cout << m;
}