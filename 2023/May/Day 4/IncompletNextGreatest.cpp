// Status : Incomplete
// Source : https://leetcode.com/problems/next-greater-element-ii/submissions/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int ng=-1;
        vector<int> out;
        for(auto&i:nums)
        {
            ng=-1;
            for(int j=0;j<size(nums);j++)
            {
                if(nums[j]>i)
                {
                    if(ng==-1)
                    {
                        ng=nums[j];
                    }
                    else if(nums[j]<ng)
                    {
                        ng=nums[j];
                    }
                    
                }
            }
            out.insert(out.end(),ng);
        }
        return out;
    }
};