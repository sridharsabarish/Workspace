class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> out;
        // Sliding window can be applied
        int lsum,rsum,diff;
        lsum=rsum=diff=0;
        for(auto&i:nums)
        {
                rsum+=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            rsum=rsum-nums[i];
            diff=abs(lsum-rsum);
            lsum=lsum+nums[i];
            out.insert(out.end(),diff);
        }
        return out;

    }
};