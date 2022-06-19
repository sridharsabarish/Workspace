// Source : https://leetcode.com/problems/running-sum-of-1d-array/submissions/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

       int sum=0;
        for(int i=0;i<size(nums);i++)
        {
            nums[i]+=sum;
            sum = nums[i];
        }

        return nums;
    }
};
