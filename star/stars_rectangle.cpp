#include <iostream>

using namespace std;
int main()
{

int i,j,k,length,width;
i = j = k = length = width = 0 ;

cout<<"enter the length and width number: "<<endl;
cin>>length;
cin>>width;

for(i = 1; i <= width ; ++i)
 {
    
        for(j = 1 ; j <= length ; ++j)
    {cout<< "*";}  
  cout<<endl;
}

}