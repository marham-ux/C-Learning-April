#include <iostream>
#include <string>

using namespace std;

struct teamloyee
{
    string full_name, department_name;
    int annualSalary, yearsAsteamloyee, age;
};

void compute_increment(teamloyee &team)
{

    float inc = 0.0;

    if (team.age >= 20 && team.age < 30 && team.yearsAsteamloyee > 0 && team.yearsAsteamloyee <= 2)
    {

        inc = 10;
    }
    else if (team.age >= 20 && team.age < 30 && team.yearsAsteamloyee > 2 && team.yearsAsteamloyee <= 5)
    {

        inc = 12;
    }
    else if (team.age > 30 && team.yearsAsteamloyee > 0 && team.yearsAsteamloyee <= 3)
    {
        inc = 14;
    }
    else if (team.age > 30 && team.yearsAsteamloyee > 3)
    {
        inc = 15;
    }

    // Calculate the increment amount and add it to salary
    double incrementAmount = (inc / 100.0) * team.annualSalary;
    team.annualSalary += incrementAmount;
}

void print_teamloyee_info(teamloyee &team)
{
    double monsal = team.annualSalary / 12;

    cout << team.full_name << "\t"
         << team.department_name << "\t"
         << monsal << "\n";
}

int main()
{
   const int size = 3;
    teamloyee team[size];

    for(int i = 0; i < size ; i++)
    // ── (i) Get teamloyee info from user ──
    cout << "Enter full name: ";
    getline(cin, team[i].full_name); // getline handles spaces in names

    cout << "Enter department: ";
    getline(cin, team[i].department_name);

    cout << "Enter annual salary: ";
    cin >> team[i].annualSalary;

    cout << "Enter years as teamloyee: ";
    cin >> team[i].yearsAsteamloyee;

    cout << "Enter age: ";
    cin >> team[i].age;

    // ── (ii) Print original info ──
    cout << "\n--- teamloyee Info (Before Increment) ---\n";
    print_teamloyee_info(team);

    // ── (iii) Compute and apply increment ──
    compute_increment(team);

    // ── (iv) Print updated info ──
    cout << "\n--- teamloyee Info (After Increment) ---\n";
    print_teamloyee_info(team);
}