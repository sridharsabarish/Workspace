// Source : https://leetcode.com/problems/missing-number/submissions/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = size(nums);
        int prev=-1;
        for(auto&i:nums)
        {
            if(i!=prev+1)
            return i-1;
            prev=i;
        }

        if(prev!=size(nums)){return size(nums);}
        return -1;
    }
};
