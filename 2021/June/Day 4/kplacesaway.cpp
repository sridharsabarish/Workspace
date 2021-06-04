// source : https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/submissions/
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        vector<int> ind;
        int prev=-1;
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==1)
            {
                if(prev==-1)
                {

                }
                else
                {
                    if(i-prev<=k)
                    {
                        return false;
                    }

                }
                 prev = i;
            }
        }

        return true;
    }
};
