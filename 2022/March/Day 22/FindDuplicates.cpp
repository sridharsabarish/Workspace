// Source :https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> out;

        int prev = nums[0];
        for(int i=1;i<size(nums);i++)
        {
            if(nums[i]==prev && std::find(out.begin(), out.end(), nums[i]) == out.end())
            {
                out.insert(out.end(),nums[i]);
            }
            prev=nums[i];

        }
        return out;
    }
};
