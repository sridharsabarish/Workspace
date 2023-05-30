// Source : https://leetcode.com/problems/maximum-product-difference-between-two-pairs/submissions/
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[size(nums)-1]*nums[size(nums)-2] - nums[0]*nums[1];
    }
};