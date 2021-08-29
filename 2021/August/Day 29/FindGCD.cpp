// Source : https://leetcode.com/problems/find-greatest-common-divisor-of-array/submissions/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int gcd = 1;
        int out =1;
        int f=0;
        while(gcd<=nums[0])
        {
            f=0;
                //cout<<gcd<<" ";
                if(nums[0]%gcd==0 && nums[size(nums)-1]%gcd==0)
                {
                    out = gcd;
                }
                gcd+=1;
        }
     return out;
    }
};
