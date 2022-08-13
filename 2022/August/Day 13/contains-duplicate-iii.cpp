// Source : https://leetcode.com/problems/contains-duplicate-iii/
// Status : Works mostly but fails with time out. Need to find a more optimal solution
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {

        for(int i=0;i<size(nums);i++)
        {
            for(int j=i+1;j<size(nums);j++)
            {

                if(nums[i]>=pow(2,31)-1 && nums[j]<0)
                {
                    return false;
                }

                if(nums[i]<=-1*pow(2,31) && nums[j]>0)
                {
                    return false;

                }


                if(nums[j]>=pow(2,31)-1 && nums[i]<0)
                {
                    return false;
                }

                if(nums[j]<=-1*pow(2,31) && nums[i]>0)
                {
                    return false;

                }

                if(abs(nums[i]-nums[j])<=t)
                {
                    if(abs(i-j)<=k)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
