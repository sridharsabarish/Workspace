// Source : https://leetcode.com/problems/max-consecutive-ones/submissions/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        for(auto&i:nums)
        {
            if(i==1)
            {
                count++;
            }
            else
            {
                max=max>count?max:count;
                count=0;
            }
        }
        max=max>count?max:count;
        return max;
    }
};
