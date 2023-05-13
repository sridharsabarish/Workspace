

/*
https://leetcode.com/problems/find-the-pivot-integer/

*/


class Solution {
public:
    
    int calculateSum(int start,int end)
    {
        int sum=0;
        for(int i=start;i<=end;i++)
        sum+=i;
        return sum;
    }
    int pivotInteger(int n) {
        
        for(int i=1;i<=n;i++)
        {
            if(calculateSum(1,i)==calculateSum(i,n))
            {
                return i;
            }
        }
        
        return -1;
        
    }
};