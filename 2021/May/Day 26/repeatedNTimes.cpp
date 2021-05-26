// source ; https://leetcode.com/problems/n-repeated-element-in-size-2n-array/submissions/
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        vector<int>v;
        for(int i=0;i<size(nums);i++)
        {
            if(std::find(v.begin(),v.end(),nums[i])!=v.end())
            {
                return nums[i];
            }
            v.insert(v.end(),nums[i]);
        }

        return -1;
    }
};
