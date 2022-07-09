// Source : https://leetcode.com/problems/find-peak-element/submissions/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        for(int i=1;i<size(nums)-1;i++)
        {
            if((nums[i]>nums[i-1]) && (nums[i]>nums[i+1]))
            {
                return i;
            }

        }

        return nums[0]>nums[size(nums)-1]?0:size(nums)-1;



    }
};
