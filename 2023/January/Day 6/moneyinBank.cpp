// Source : https://leetcode.com/problems/calculate-money-in-leetcode-bank/submissions/
class Solution {
public:
    int totalMoney(int n) {
        int s=0;
        for(int i=1;i<=n;i++)
        {
            if(i<=7)
            {
                s+=i;
            }
            else
            {
                if(i%7==0){s+=7+(i/7)-1;}
                else
                {
                     s+=(i%7)+(i/7);
                }
               
                
                
            }
        }
        return s;
    }
};