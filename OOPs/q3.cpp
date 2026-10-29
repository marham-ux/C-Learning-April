
#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    string courseName;
    string courseCode;
    int creditHours;

public:
    Course(string n, string c, int h)
    {
        courseName = n;
        courseCode = c;
        creditHours = h;
    }

    void enrollStudent()
    {
        cout << "Student enrolled in "
             << courseName << " successfully.\n";
    }

    void showCourseInfo()
    {
        }
};

int main()
{
    Course c1("CP", "CS", 3);

    c1.showCourseInfo();
    c1.enrollStudent();

    return 0;
}
