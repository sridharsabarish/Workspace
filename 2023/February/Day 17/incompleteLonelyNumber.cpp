// SOurce : https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/submissions/
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<int> out;
        for(int i=1;i<size(nums)-1;i++)
        {
            if((nums[i]!=nums[i-1]+1) && (nums[i]!=nums[i+1]-1) &&(nums[i]!=nums[i+1]) && (nums[i]!=nums[i-1]))
            {
                out.insert(out.end(),nums[i]);
            }
        }
        
        if(size(nums)>1)
        {
            if(nums[0]!=nums[1]-1)
            {
                out.insert(out.end(),nums[0]);
            }
            
            if(nums[size(nums)-1]!=nums[size(nums)-2])
            {
                out.insert(out.end(),nums[size(nums)-1]);
            }
        }
        else
        {
            out.insert(out.end(),nums[0]);
        }
        return out;
    }
};