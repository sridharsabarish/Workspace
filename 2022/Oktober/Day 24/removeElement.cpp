//Source : https://leetcode.com/problems/remove-element/submissions/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        short k=size(nums);
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==val)
            {
                nums[i] = INT_MAX;
                k--;
            }

        }

        sort(nums.begin(),nums.end());
        return k;
    }
};
