// Source : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int f=-1;
        int s=-1;
        for(int i=0;i<size(nums);i++)
        {
            if(f==-1 && nums[i]==target)
            {
                f=i;
                s=i;
            }
            else if(nums[i]==target){s=i;}

            if(f!=-1 && nums[i]!=target)
            {
                return {f,s};
            }
        }
        return {f,s};
    }
};
