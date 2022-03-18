// Source : https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> out;
        for(int i=0;i<size(nums);i++)
            for(int j=i+1;j<size(nums);j++)
            {
                if(i==j)
                    continue;
                if(nums[i]+nums[j]==target)
                {
                   out = {i,j};
                   return out;
                }
            }
        return out;
    }
};
