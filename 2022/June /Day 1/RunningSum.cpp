// Source : https://leetcode.com/problems/running-sum-of-1d-array/submissions/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> out;
        int rs=0;
        for(auto&i:nums)
        {
            rs+=i;
            out.insert(out.end(),rs);
        }
        return out;
    }
};
