#include <iostream>

using namespace std;
int main()
{

int i,j,k,x;
i = j = k = x = 0 ;


cout<<"enter the number for right triangle: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
     {
        for(j = 1 ; j <= x ; ++j)
        {
            if(i >= j)
               {cout<<"*";}
            else
            {cout<<" ";}
        }
    cout<<endl;
     }

cout<<"enter the number for upside down right triangle: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
{
        for(j = 1 ; j <= x ; ++j)
        {
            if(i <= j)
               {cout<<"*";}
            else
            {cout<<" ";}
        }
    cout<<endl;
}
cout<<"enter the number for right triangle from right side: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
{
        for(j = 1 ; j <= x ; ++j)
        {
            if((x - i + 1) <= j)
               {cout<<"*";}
            else
            {cout<<" ";}
        }
    cout<<endl;
}
cout<<"enter the number for  upside down right triangle from left side: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
{
        for(j = 1 ; j <= x ; ++j)
        {
            if((x - i + 1) >= j)
               {cout<<"*";}
            else
            {cout<<" ";}
        }
    cout<<endl;
}


}