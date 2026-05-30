#include <iostream>

using namespace std;

struct Student
{
    string name;
    int age;
    float gpa;
    int marks;
};
int main()
{
    Student students[4] = {
        {"Alice", 20},
        {"Bob", 22, 3.2},
        {"Charlie", 21, 3.5},
        {"Diana", 19, 3.9}};

    for (int i = 0; i < 4; i++)
    {
        cout << "--- Student " << i + 1 << " ---" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age:  " << students[i].age << endl;
        cout << "GPA:  " << students[i].gpa << endl;
    }
}