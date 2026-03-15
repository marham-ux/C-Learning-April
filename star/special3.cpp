#include <iostream>

using namespace std;
int main()
{

int i,j,k,x;
i = j = k = x = 0 ;


cout<<"enter the number: "<<endl;
cin>> x;

for(i = 1; i <= 9 ; ++i)
  { 
    i<=5 ? k++:k--;
      for(j = 1 ; j <=  9; ++j)
    {
        if(j <=6 -k || j >= 4 + k)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;

  }

}