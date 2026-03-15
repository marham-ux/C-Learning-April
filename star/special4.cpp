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
     k ='A';
      for(j = 1 ; j <=  (x * 2); ++j)
    {
        if(j >=(x -i + 1) && j <= (x + i))
       { 
        if(j == x+1)
        k = '1';
        cout<<char(k);
        k++;
       }
        else
        cout<<" ";
    }
    cout<<endl;

  }

}