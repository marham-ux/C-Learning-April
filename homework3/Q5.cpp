#include <iostream>
using namespace std;

int main()
{
    int num;      // variable to store the input number
    int temp = 0; // variable to store sum of digits

    // taking input from user
    cout << "Enter a five-digit number" << endl;
    cin >> num;

    // Loop to repeatedly sum digits until we get a single-digit number
    do
    {
        while (num) // runs until num becomes 0
        {
            temp = temp + (num % 10); // extract last digit and add to temp
            num = num / 10;           // remove last digit
        }

        num = temp; // store sum back into num
        temp = 0;   // reset temp for next iteration

    } while (num >= 10); // repeat if number has more than one digit

    // Check divisibility by 3
    if (num % 3 == 0)
        cout << "divisible by three";
    else
        cout << "not divisible";

    return 0; // end of program
}