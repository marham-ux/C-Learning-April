#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
double x,y,z;
cout<<"enter rent number: ";
cin >> x;

cout<<"enter food per day number: ";
cin >> y;

cout<<"enter salary number: ";
cin >> z;
 
y = y * 30 ;

double remaining = z -x - y;
double remain_percentage = (remaining / z) * 100;

cout<<"---------------------------------------------\n";
   
   cout<<left<<setw(10)<<"remaining salary : "<<remaining<<endl
   << right<<setw(12)<<"remaining salary in percentage: "<< remain_percentage<<endl;
  
   cout<<"--------------------------------------------\n";
if(remain_percentage > 30)
cout<<"well done";
else if(remain_percentage >=10  && remain_percentage < 30)
cout<< "need to balance";
else cout<< "in the danger zone";


}