// Source : https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/submissions/
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        int count=0;
        for(int i=0;i<size(nums);i++)
            for(int j=i+1;j<size(nums);j++)
            {
                if((i*j)%k==0)
                {
                    if(nums[i]==nums[j])
                    {
                        count++;
                    }
                }
            }
        
        return count;
    }
};