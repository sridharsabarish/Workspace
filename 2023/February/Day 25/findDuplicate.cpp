// Source : https://leetcode.com/problems/find-the-duplicate-number/submissions/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto &i:nums)
        {
            if(m[i]==1)
            {
                return i;
            }
            m[i]+=1;
        }
        return -1;
    }
};