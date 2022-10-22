// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        int count=0;
        for(int i=1;i<size(nums);i++)
        {

            if(nums[i]==prev)
            {
                count++;
                 prev = nums[i];
                nums[i] = INT_MAX;
            }
            else
            {
                 prev = nums[i];
            }


        }

        sort(nums.begin(),nums.end());
        return size(nums)-count;

    }
};
