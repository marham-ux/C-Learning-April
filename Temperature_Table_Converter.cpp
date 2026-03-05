#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for(int i = - 10 ; i < 51 ; i += 5 )
    {
      if(i == -10)
        {
            cout<<setw(10)<<"Celcius "<<setw(15)<<"Ferenheit "<<endl;
            cout<<"---------------------------------------------"<<endl;
        }
      else
       {
        cout<<setw(10)<<fixed<<" "<< i ;
        cout<<setw(15)<<setprecision(2)<<i *(9.0/5.0) +32<<endl;
       

       }

    }  




}