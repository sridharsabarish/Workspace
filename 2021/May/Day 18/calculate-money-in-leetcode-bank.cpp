// Source :https://leetcode.com/problems/calculate-money-in-leetcode-bank/submissions/
class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        for(int i=1;i<n+1;i++)
        {
            int c =0;
            int b =0;
            if(i%7==0)
            {
                c=7;
                b= (i/7)-1;
            }
            else
            {
                c=i%7;
                b=(i/7);
            }
           sum+=(b+c);
        }
        return sum;
    }
};
