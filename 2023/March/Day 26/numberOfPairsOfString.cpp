// Source : https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/submissions/
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
        for(int i=0;i<size(nums);i++)
            for(int j=0;j<size(nums);j++)
            {
                if(i==j)continue;
                if(nums[i]+nums[j]==target)count++;
            
            }
        
        return count;
    }
};