#include <iostream>

using namespace std;
int main()
{

int i,j,k,x;
i = j = k = x = 0 ;


cout<<"enter the number for triangle: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
     {
        for(j = 1 ; j <= x + i - 1 ; ++j)
        {
            if((j >= (x - i + 1))&& (j <=(x + i -1)))
               {cout<<"*";}
            else
            {cout<<" ";}
        }
    cout<<endl;
     }

cout<<"enter the number for upside down triangle: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
     {
        for(j = 1 ; j <= ((x*2) - (i*2) + i); ++j)
        {
            if((j >= i)&& (j <=((x*2) - (i*2) + i)))
               {cout<<"*";}
            else
            {cout<<" ";}
        }
    cout<<endl;
     }
}