#include <iostream>
#include <string>
using namespace std;

class Staff
{ // generalized class
protected:
    string name;
    int age;
    double salary;

public:
    void setStaff(string n, int a, double s)
    {
        name = n;
        age = a;
        salary = s;
    }
};
class Doctor : public Staff
{ // specialized
    string specialty;

public:
    void setSpecialty(string sp) { specialty = sp; }
};
class Nurse : public Staff
{ // specialized
    int shiftHours;

public:
    void setShift(int h) { shiftHours = h; }
};
class Account
{
protected:
    int accNo;
    double balance;

public:
    void deposit(double amt) { balance += amt; }
};
class SavingAccount : public Account
{ // special: profit rate
    double profitRate;

public:
    void addProfit() { balance += balance * profitRate / 100; }
};
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a)
    {
        cout << "Person constructor" << endl;
    }
};
class Student : public Person
{
    int rollNo;

public:
    // call parent constructor with : Person(n, a)
    Student(string n, int a, int r) : Person(n, a), rollNo(r)
    {
        cout << "Student constructor" << endl;
    }
    void show() { cout << name << " " << age << " " << rollNo << endl; }
};
int main()
{
    Student s("Sara", 19, 101); // prints Person first, then Student
    s.show();
}
