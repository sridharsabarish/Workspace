// Source : https://leetcode.com/problems/number-of-good-pairs/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int count=0;
        for(int i=0;i<size(nums);i++)
        {
            for(int j=0;j<size(nums)
;j++)
            {
                if(i>=j){
                    continue;
                }
                if(nums[i]==nums[j]){count++;}
            }

        }
        return count;
    }
};
