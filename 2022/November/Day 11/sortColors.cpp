// Source : https://leetcode.com/problems/sort-colors/submissions/
// Solution : Bubble Sort. Not the most ideal one
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp;
        for(int i=0;i<size(nums);i++)
        {
            for(int j=0;j<size(nums);j++)
            {
                if(nums[i]<nums[j])
                {
                 temp = nums[i];
                 nums[i]=nums[j];
                 nums[j]=temp;

                }

            }
        }

    }
};
