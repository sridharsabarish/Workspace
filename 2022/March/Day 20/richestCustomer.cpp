//Source:https://leetcode.com/problems/richest-customer-wealth/submissions/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int max=0;
        int t=0;
        for(auto &i:accounts)
        {t=0;
            for(auto &j:i)
            {
             t+=j;
            }
         max=t>max?t:max;
        }
        return max;
    }
};
