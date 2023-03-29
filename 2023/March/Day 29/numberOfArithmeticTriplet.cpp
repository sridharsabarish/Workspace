// Source : https://leetcode.com/problems/number-of-arithmetic-triplets/submissions/
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        for(int i=0;i<size(nums);i++)
            for(int j=i;j<size(nums);j++)
            {
                if(nums[j]!=nums[i]+diff)continue;
                for(int k=j;k<size(nums);k++)
                {
                    if(nums[k]==nums[j]+diff)
                    {
                        count++;
                    }
                    
                }
            }
        return count;
    }
};