// Source : https://leetcode.com/problems/array-partition/submissions/
// Maximum possible only when sorted
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        
        // When can this code break?
        // Should assert that nums is < 2^31
        
        for(int i=0;i<size(nums);i+=2)
        {
            sum+=min(nums[i],nums[i+1]);
        }
        return sum;
    }
};