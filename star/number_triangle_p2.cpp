#include <iostream>

using namespace std;
int main()
{

int i,j,k,x;
i = j = k = x = 1 ;


cout<<"enter the number for triangle: "<<endl;
cin>> x;

for(i = 1; i <= x ; ++i)
     {
        k++;
        for(j = 1 ; j <= x + i - 1 ; ++j)
        {
            if((j >= (x - i + 1))&& (j <=(x + i -1)))
            {
                cout<<k;
                
            }
            else
            {cout<<" ";}
        }
    cout<<endl;
     }

}