/*

Source :  https://leetcode.com/problems/remove-element/

*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int MAX = 2147483647;
        int count=0;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==val)
            {
                nums[i]=INT_MAX;
                count++;
            }
        }
        sort(nums.begin(),nums.end());
        return size(nums)-count;
    }
};
