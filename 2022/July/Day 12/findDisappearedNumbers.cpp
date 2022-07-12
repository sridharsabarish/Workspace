// Source : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> out;
        sort(nums.begin(),nums.end());
        int prev=0;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]!=prev)
            {

                for(int j=prev+1;j<nums[i];j++)
                {
                    out.insert(out.end(),j);
                }

            }
            prev = nums[i];
        }

        int l = nums[size(nums)-1];
        for(int i=l+1;i<size(nums)+1;i++)
        {
            out.insert(out.end(),i);
        }
        return out;
    }
};
