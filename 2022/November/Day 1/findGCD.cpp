// Source:https://leetcode.com/problems/find-greatest-common-divisor-of-array/submissions/
class Solution {
public:

    int findCommon(int a, int b)
    {

        for(int i=a;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                return i;
            }
        }
        return 1;
    }


    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return findCommon(nums[0],nums[size(nums)-1]);
    }
};
