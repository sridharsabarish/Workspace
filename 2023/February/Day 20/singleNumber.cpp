// Source : https://leetcode.com/problems/single-number-ii/submissions/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    if(size(nums)<3){return nums[0];}
    for(int i=0;i<size(nums)-2;i+=3)
    {
        if((nums[i]!=nums[i+1]) || (nums[i+1]!=nums[i+2]))
        {
            return nums[i];
        }
    }
        return nums[size(nums)-1];
       
        }
};