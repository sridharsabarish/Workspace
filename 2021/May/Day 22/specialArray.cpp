// Source : https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/submissions/
class Solution {
public:
    int specialArray(vector<int>& nums) {


        int m =size(nums);
        int count;
        while(m)
        {
            count =0;

            for(auto &i:nums)
            {
                if(i>=m)
                {
                    count+=1;
                }



            }

            if(count==m)
            {
                return m;
            }
            m--;

        }

        return -1;
    }
};
