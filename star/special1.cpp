#include <iostream>

using namespace std;
int main()
{

int i,j,x;
i = j  = x = 1 ;


cout<<"enter the number for triangle: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
     {
        
        for(j = 1 ; j <= ((x*2) - 1) ; ++j)
        {
            if((j <= (x - i + 1)) || (j >=(x + i -1)))
            {
               cout<<"*";
            }
            else
            {cout<<" ";}
        }
    cout<<endl;
     }

}