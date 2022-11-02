// Source : https://leetcode.com/problems/number-of-digit-one/
/* This is a basic solution.


int countDigitOne(int n) {
        int count=0;

        for(int i=1;i<=n;i++)
        {
            int temp=i;
            while(temp)
            {
                if(temp%10==1)
                {
                    count++;
                }
                temp/=10;

            }


        }
        return count;
*/



/*

Better Approach

Learn here
https://leetcode.com/problems/number-of-digit-one/discuss/64426/Easy-to-understand-C%2B%2B-0ms-solution-with-detailed-explanation

_,_,

Number of 1s less than 99 is

1*9,9*1;



_,_,_
9*9*1*3




*/

class Solution {
public:
    int countDigitOne(int n) {
        int count=0;

        for(int i=1;i<=n;i++)
        {
            int temp=i;
            while(temp)
            {
                if(temp%10==1)
                {
                    count++;
                }
                temp/=10;

            }


        }
        return count;
    }
};
