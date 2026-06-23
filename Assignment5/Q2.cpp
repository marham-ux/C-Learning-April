#include <iostream>
#include <cstring>

using namespace std;

struct employee
{

    char name[20], d_name[20];
    int yearsAsEmployee, age;
    double annualSalary;
};

void compute_increment(employee &emp)
{

    float inc = 0.0;

    if (emp.age >= 20 && emp.age < 30 && emp.yearsAsEmployee > 0 && emp.yearsAsEmployee <= 2)
    {

        inc = 10;
    }
    else if (emp.age >= 20 && emp.age < 30 && emp.yearsAsEmployee >= 2 && emp.yearsAsEmployee <= 5)
    {

        inc = 12;
    }
    else if (emp.age >= 30 && emp.yearsAsEmployee > 0 && emp.yearsAsEmployee <= 3)
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

void print_employee_info(const employee &emp)
{

    int M_sal = emp.annualSalary / 12;

    cout << emp.name << "\t DEPARTMENT NAME :"
         << emp.d_name << "\t MONTHLY SALARY :"
         << M_sal << "\n";
}

int total_increment(employee emp[], int size)
{

    double temp = 0, total = 0;

    for (int i = 0; i < size; i++)
    {
        temp = emp[i].annualSalary;

        cout << "\nEmployee " << i + 1;
        cout << "\nBefore Increment: " << temp << endl;

        compute_increment(emp[i]);

        cout << "After Increment : " << emp[i].annualSalary << endl;

        total += emp[i].annualSalary - temp;
    }
    return total;
}

int main()
{

    const int size = 2;

    employee emp[size];

    for (int i = 0; i < size; i++)
    {

        cout << "Enter Name: ";
        cin.getline(emp[i].name, 20);

        cout << "Enter Department: ";
        cin.getline(emp[i].d_name, 20);

        cout << "Enter Salary: ";
        cin >> emp[i].annualSalary;

        cout << "Enter Years: ";
        cin >> emp[i].yearsAsEmployee;

        cout << "Enter Age: ";
        cin >> emp[i].age;

        cin.ignore(); // clear '\n' left by previous input
    }

    int total = total_increment(emp, size);
    cout << "Total Increment = " << total;
}