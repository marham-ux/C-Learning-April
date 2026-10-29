#include <iostream>

using namespace std;

struct students
{

    string name;
    int marks;
    float percentage;
};

void printer(students s[], int size)
{
    if (size == 0)
    {
        return;
    }
    cout << s[size - 1].name << endl;
    return printer(s, size - 1);
    cout << s[size - 1].name << endl;
}

int main()
{
    students s[5] = {
        {"Ali Khan", 101, 85.5f},
        {"Sara Ahmed", 102, 92.0f},
        {"Usman Tariq", 103, 78.5f},
        {"Ayesha Noor", 104, 88.0f},
        {"Bilal Hassan", 105, 95.5f}};

    printer(s, 5);
}