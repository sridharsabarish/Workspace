// Source : https://leetcode.com/problems/ugly-number/submissions/
// INcomplete/STuck
class Solution {
public:

    bool isPrime(int n)
    {

        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }

        }
        return true;

    }
    bool isUgly(int n) {

        if(n==INT_MAX || n<=0)
        {
            return false;
        }

        for(int i=7;i<=n;i++)
        {
            if(isPrime(i) && n%i==0)
            {
               return false;
            }
        }
        return true;

    }
};
