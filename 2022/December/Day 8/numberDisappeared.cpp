// Source : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

    int s = size(nums);

        sort(nums.begin(),nums.end());
        vector<int> missing;


        if(nums[0]!=1)
        {
            for(int i=1;i<nums[0];i++)
            {
                missing.insert(missing.end(),i);
            }

         }


        if(nums[s-1]!=s)
        {
            for(int i=nums[s-1]+1;i<=s;i++)
            {
                missing.insert(missing.end(),i);
            }

        }

        for(int i=0;i<size(nums)-1;i++)
        {
            if(nums[i]+1!=nums[i+1])
            {
                for(int j=nums[i]+1;j<nums[i+1];j++)
                {
                    missing.insert(missing.end(),j);
                }

            }

        }


        return missing;


    }
};
