/*
Source : https://leetcode.com/problems/find-pivot-index/submissions/

logic :
1. Exclude pivot from calculations
2. Calculate sum of left
3. Calculate sum of right
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sum_of_left=0;
        int sum_of_right=0;

        for(int i=0;i<size(nums);i++)
        sum_of_right+=nums[i];

        for(int i=0;i<size(nums);i++)
        {
            sum_of_right-=nums[i];
            if(sum_of_right==sum_of_left){return i;}
            sum_of_left+=nums[i];
        }
        return -1;
    }
};
