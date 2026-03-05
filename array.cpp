#include <iostream>
using namespace std;

int getArraySum(int array[], int size)
{
   int sum = 0;
    for(int index = 0 ; index < size; index++ )
   {sum += array[index];}
    return sum;
}
int main() {
 
    int arr[5] = {65 , 66 , 67 , 68 , 70}; 
    int array2[5] ={1,2,3,4,5};
  getArraySum(arr,5);
    return 0;
}
