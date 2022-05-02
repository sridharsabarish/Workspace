// Source : https://leetcode.com/problems/search-insert-position/submissions/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        if(target==nums[size(nums)-1]){return size(nums)-1;}
        if(target>nums[size(nums)-1]){return size(nums);}
        if(target<=nums[0]){return 0;}
        for(int i=0;i<size(nums)-1;i++)
        {
            if(nums[i]==target){return i;}
            else if(nums[i]<target && nums[i+1]>target)
                {
                return i+1;
            }
        }
        return 0;
    }
};
