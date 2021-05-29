//source ; https://leetcode.com/problems/maximum-product-of-three-numbers/submissions/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int s = size(nums);
        sort(nums.begin(),nums.end());
        int minMax = nums[0]*nums[1]*nums[s-1];
        int maxMax = nums[s-1]*nums[s-2]*nums[s-3];
        return minMax>maxMax?minMax:maxMax;
    }
};
