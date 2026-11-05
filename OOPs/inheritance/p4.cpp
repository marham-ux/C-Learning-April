#include <iostream>

using namespace std;

class example
{

public:
    int time;
    int time2;

    example(int t1, int t2)
    {
        time = t1;
        time2 = t2;
    }

    void checker()
    {
        cout << time << time2;
    }
};

int main()
{

    example p1(20, 30);
    example p2(p1);
    p2.checker();
}