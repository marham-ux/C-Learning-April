#include <iostream>
#include <string>

using namespace std;

struct employee
{
    string full_name, department_name;
    int annualSalary, yearsAsEmployee, age;
};

void compute_increment(employee &emp)
{

    float inc = 0.0;

    if (emp.age >= 20 && emp.age < 30 && emp.yearsAsEmployee > 0 && emp.yearsAsEmployee <= 2)
    {

        inc = 10;
    }
    else if (emp.age >= 20 && emp.age < 30 && emp.yearsAsEmployee > 2 && emp.yearsAsEmployee <= 5)
    {

        inc = 12;
    }
    else if (emp.age > 30 && emp.yearsAsEmployee > 0 && emp.yearsAsEmployee <= 3)
    {
        inc = 14;
    }
    else if (emp.age > 30 && emp.yearsAsEmployee > 3)
    {
        inc = 15;
    }

    // Calculate the increment amount and add it to salary
    double incrementAmount = (inc / 100.0) * emp.annualSalary;
    emp.annualSalary += incrementAmount;
}

void print_employee_info(employee &emp)
{
    double monsal = emp.annualSalary / 12;

    cout << emp.full_name << "\t"
         << emp.department_name << "\t"
         << monsal << "\n";
}

int main()
{

    employee emp;

    // ── (i) Get employee info from user ──
    cout << "Enter full name: ";
    getline(cin, emp.full_name); // getline handles spaces in names

    cout << "Enter department: ";
    getline(cin, emp.department_name);

    cout << "Enter annual salary: ";
    cin >> emp.annualSalary;

    cout << "Enter years as employee: ";
    cin >> emp.yearsAsEmployee;

    cout << "Enter age: ";
    cin >> emp.age;

    // ── (ii) Print original info ──
    cout << "\n--- Employee Info (Before Increment) ---\n";
    print_employee_info(emp);

    // ── (iii) Compute and apply increment ──
    compute_increment(emp);

    // ── (iv) Print updated info ──
    cout << "\n--- Employee Info (After Increment) ---\n";
    print_employee_info(emp);
}