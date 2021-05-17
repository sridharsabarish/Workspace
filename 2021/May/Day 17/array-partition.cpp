// Source :https://leetcode.com/problems/array-partition-i/submissions/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sums =0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<size(nums);i+=2)
        {
            sums+=nums[i];
        }
        return sums;
    }
};
