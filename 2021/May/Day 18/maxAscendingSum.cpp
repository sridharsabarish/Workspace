
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int prev,max,sums =0;
        for(auto & i:nums)
        {
            sums = i>prev?sums+i:i;
            max = sums>max?sums:max;
            prev = i;
        }
        return max;
    }
};
