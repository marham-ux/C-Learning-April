#include <iostream>

using namespace std;
int main()
{

int i,j,k,x;
i = j = k = x = 0 ;


cout<<"enter the number: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
     {
        for(j = 1 ; j <= x ; ++j)
        {
            if(i - 5 <= j)
               {cout<<"*";}
            else
            {cout<<" ";}
        }
cout<<endl;
}




}