// Source : https://leetcode.com/problems/count-numbers-with-unique-digits/submissions/
// Logic
// dp[0]=1;
// dp[1] = dp[0]+9;
// dp[2] = 9*9 + dp[1]
// dp[3]=  9*9*8 + dp[2]
// See that fact also forms kind of a dp. So need to manage that.

class Solution {
public:


    int countNumbersWithUniqueDigits(int n) {

     int dp[n+1];
        dp[0]=1;
         if(n==0){return dp[0];}
        int fact=9*9;
        int lastVar=9;
        dp[1]=9*1+dp[0];
        if(n==1){return dp[1];}
        dp[2]=9*9+dp[1];
        if(n==2){return dp[2];}

        for(int i=3;i<=n;i++)
        {
            dp[i]=fact*(lastVar-1) +dp[i-1];
            fact*=(lastVar-1);
            lastVar--;
        }

        return dp[n];
}
};
