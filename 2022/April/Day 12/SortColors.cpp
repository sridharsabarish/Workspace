// Source : https://leetcode.com/problems/sort-colors/
/* Bubble Sort*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp;
        for(int i=0;i<size(nums);i++)
        {
            for(int j=0;j<size(nums);j++)
            {

                if(nums[j]>nums[i])
                {
                    temp = nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};
