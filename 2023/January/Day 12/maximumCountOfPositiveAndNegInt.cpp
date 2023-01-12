// Source : https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/submissions/
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count=0;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]<0)
            {
                count++;
            }
        }
        
        int zeros = 0;
        zeros=std::count(nums.begin(),nums.end(),0);
        
        return  count > (size(nums)-zeros-count)?count:(size(nums)-zeros-count);
    
        
    }
};