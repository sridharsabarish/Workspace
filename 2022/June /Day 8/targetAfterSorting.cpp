// Source : https://leetcode.com/problems/find-target-indices-after-sorting-array/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());

        vector<int> out;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==target)
            {
                out.insert(out.end(),i);
            }
        }
        return out;

    }
};
