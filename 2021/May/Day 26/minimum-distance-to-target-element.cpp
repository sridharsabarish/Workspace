// Source ; https://leetcode.com/problems/minimum-distance-to-the-target-element/submissions/
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min = INT_MAX;
        int ti;
        for(int i=0;i<size(nums);i++)
        {
            ti=-1;
            if(nums[i]==target)
            {
                ti = i;
                min =  abs(start-ti)<min?abs(start-ti):min;
            }
        }
        return min;
    }
};
