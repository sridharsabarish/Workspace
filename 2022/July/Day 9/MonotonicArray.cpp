// Source : https://leetcode.com/problems/monotonic-array/submissions/
// Very bad solution. Can be improved
    class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        int i,d;
        i=d=0;

        for(int j=1;j<size(nums);j++)
        {
            if(nums[j]>nums[j-1])
            {

                i=1;
                if(d==1)
                {
                    return false;
                }


            }
            else if(nums[j]<nums[j-1])
            {
                d=1;
                if(i==1){return false;}
            }

        }

        return true;


    }
};
