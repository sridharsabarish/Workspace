// Source : https://leetcode.com/problems/richest-customer-wealth/submissions/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        
        for(auto&account:accounts)
        {
            int tmp=0;
            for(auto&i:account)
            {
                tmp+=i;
            }
            
            max=tmp>max?tmp:max;
            
        }
        
        return max;
    }
};