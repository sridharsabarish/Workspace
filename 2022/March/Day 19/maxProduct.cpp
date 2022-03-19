// Source : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = size(nums)-1;
        return (nums[l]-1)*(nums[l-1]-1);
    }
};
