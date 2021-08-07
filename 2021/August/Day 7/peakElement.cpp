// Source : https://leetcode.com/problems/find-peak-element/submissions/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if(size(nums)==1)
        {
            return 0;
        }
        for(int i=0;i<size(nums);i++)
        {
            if(i==0)
            {
                if(nums[i]>nums[i+1])
                {
                    return i;
                }
            }
            else if(i==size(nums)-1)
            {
                if(nums[i]>nums[i-1])
                {
                    return i;
                }
            }

            else if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                return i;
            }

        }

        return -1;
    }
};
