// STATUS : INCOMPLETE- Incorrect. Guessing. Bad stufff
// Source : https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;

        int f=0;
        int l=size(nums);
        int m = (f+l)/2;
        if(nums[0]>0){return v;}
        else
        {
            // Keep high fixed and then check with low
            vector<int> temp;
            int fh=m+1;
            int lh=size(nums);
            int mh;
            while(fh<lh)
            {
                mh=(fh+lh)/2;
                if(nums[mh]+nums[m]+nums[f]==0)
                {
                    temp.insert(temp.end(),nums[mh]);
                    temp.insert(temp.end(),nums[m]);
                    temp.insert(temp.end(),nums[f]);
                   v.insert(v.end(),temp);
                }

                if(nums[mh]+nums[m]+nums[f]>0)
                {
                  lh=mh-1;
                }
                else if(nums[mh]+nums[m]+nums[f]<0)
                {
                    fh=mh+1;
                }
            }
        }
        return v;
    }
};
