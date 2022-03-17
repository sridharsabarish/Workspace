// Source : https://leetcode.com/problems/running-sum-of-1d-array/submissions/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int sum =0;
        vector<int> res;
        for(auto&i:nums)
        {
            sum+=i;
            res.push_back(sum);
        }
        return res;
    }
};
