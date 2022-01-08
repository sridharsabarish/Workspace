/*
    Created on : 8th Jan 3:24PM CEST
    Source : https://leetcode.com/problems/majority-element/
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int prev = nums[0];
        for(int i=1;i<size(nums);i++)
        {
            if(nums[i]==prev)
            {
                continue;
            }
            else
            {
                if(count(nums.begin(),nums.end(),nums[i])>size(nums)/2)
                {
                    return nums[i];
                }
                prev = nums[i];
            }
        }
        return nums[0];
    }
};
