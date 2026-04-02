#include <iostream>
using namespace std;

long long DigitalRoot( long long num)
{    
if(num < 10 && num > 0)
{
    cout << num << endl;
    return num;
}

long long sum = 0;
long long temp = num;

while(temp > 0)
{
   sum = sum + (temp % 10);
   temp = temp / 10;
}
cout << num << " is converted " << sum << endl;

return DigitalRoot(sum);

}
int main(){

long long num;
cout<<"enter the num\n";
cin>>num;

if (num <= 0)
    {
        cout << "Please enter a positive number greater than 0.\n";
        return 1;
    }

    cout << "\nStep-by-step calculation:\n";

    long long result = DigitalRoot(num);

    cout << "\nDigital Root of " << num << " is " << result << endl;

    return 0;


}