// Source :https://leetcode.com/problems/squares-of-a-sorted-array/submissions/
// Solution needs improvement. Its too trivial.
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        for(int i=0;i<size(nums);i++)
        {
            nums[i]*=nums[i];
        }

        sort(nums.begin(),nums.end());
        return nums;



    }
};
