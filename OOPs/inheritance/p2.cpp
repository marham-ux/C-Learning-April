#include <iostream>
#include <string>
using namespace std;

class Person
{
protected: // child can use it, outside world cannot
    string name;

public:
    void setName(string n) { name = n; }
    void showName() { cout << name << endl; }
};
class Student : public Person
{ // Student inherits Person
    int rollNo;

public:
    void setRoll(int r) { rollNo = r; }
    void showAll() { cout << name << " " << rollNo << endl; }
};
int main()
{
    Student s;
    s.setName("Ali"); // inherited function
    s.setRoll(101);
    s.showAll();
}