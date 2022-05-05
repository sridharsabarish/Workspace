//https://leetcode.com/problems/largest-number-at-least-twice-of-others/submissions/// Source : https://leetcode.com/problems/largest-number-at-least-twice-of-others/submissions/
class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int l,s;
        l=-1;
        s=-1;
        int prevlarge=0;

        int index=0;

        for(int i=0;i<size(nums);i++)
        {

            prevlarge=l;
            if(nums[i]>l)
            {
                s=l;
                l=nums[i];
                index =i;

            }
            if(nums[i]>s && nums[i]<l)
            {
                s=nums[i];
            }

            }

        cout<<s;
        cout<<l;


        if(l>=2*s)
        {
            return index;
        }
        return -1;


    }
};
