#include <iostream>
#include <cmath> // for sqrt()
using namespace std;

int main()
{
    double a, b, c; // coefficients of quadratic equation

    // Input values
    cout << "Enter a, b, c: \n";
    cin >> a >> b >> c;

    // Calculate discriminant (b^2 - 4ac)
    double discriminant = b * b - 4 * a * c;

    // Check nature of roots
    if (discriminant > 0)
    {
        // Two real and different roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Roots are real and different:\n";
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        // One real and equal root
        double root = -b / (2 * a);

        cout << "Roots are equal:\n";
        cout << "Root = " << root << endl;
    }
    else
    {
        // Complex (imaginary) roots
        cout << "Roots are imaginary (complex)" << endl;
    }

    return 0;
}