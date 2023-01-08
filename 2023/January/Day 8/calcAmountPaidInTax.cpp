// Source : https://leetcode.com/problems/calculate-amount-paid-in-taxes/submissions/
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        // percent = brackets[i][1]
        // Upper[i]=brackets[i][0]
        

        int balance=income;
        int taxAmount;
        double sum=0.0;
        
        for(int i=0;i<size(brackets);i++)
        {
          if(i==0)
          
          {
              taxAmount= min(balance,brackets[i][0]);
          }
            else
            {
                taxAmount= min(balance,brackets[i][0]-brackets[i-1][0]);
            }
            
            sum+=(taxAmount*brackets[i][1])/100.00;
            
            balance-=taxAmount;
            
        }
        return sum;
    }
};