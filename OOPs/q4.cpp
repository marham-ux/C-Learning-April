
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    float cgpa;

public:
    Student(int r, string n, float c)
    {
        rollNumber = r;
        name = n;
        cgpa = c;
    }

    void updateCGPA(float c)
    {
        if (c >= 0 && c <= 4.0)
        {
            cgpa = c;
            cout << "CGPA updated successfully.\n";
        }
        else
        {
            cout << "Invalid CGPA. Enter a value from 0 to 4.\n";
        }
    }

    void displayInfo()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s1(17, "Arham", 3.2);

    cout << "Student Information:\n";
    s1.displayInfo();

    s1.updateCGPA(3.7);

    cout << "\nUpdated Student Information:\n";
    s1.displayInfo();

    return 0;
}
