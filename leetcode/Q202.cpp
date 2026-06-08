
class Solution
{
public:
    int sumOfSquares(int n)
    {
        int sum = 0;
        while (n)
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n)
    {
        int slow = n;
        int fast = n;

        do
        {
            slow = sumOfSquares(slow);
            fast = sumOfSquares(fast);
            fast = sumOfSquares(fast);
        } while (slow != fast);

        return slow == 1;
    }
    /*
    int temp = 0,n3 = n;
    while(n != 1){
        int n2 = n;
        while(n2){
    int digit = n2 % 10;
        temp += digit * digit;
        n2 /=10;}

    n = temp;
    temp = 0;
    if(n == n3 )
    break;
}
if (n == 1)
return true;
else
return false;
}*/
};