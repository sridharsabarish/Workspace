// Source : https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/submissions/
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<size(nums);i++)
        {
            for(int j=i+1;j<size(nums);j++)
            {
                if(abs(nums[i]-nums[j])==k)
                {
                    c++;
                }
            }
        }
        return c;
    }
};