// Source : https://leetcode.com/problems/find-greatest-common-divisor-of-array/submissions/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=nums[0];i>0;i--)
        {
            if(nums[size(nums)-1]%i==0 && nums[0]%i==0){return i;}
        }
        return 1;
    }
};
