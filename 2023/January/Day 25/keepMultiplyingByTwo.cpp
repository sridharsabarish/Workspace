// Source: https://leetcode.com/problems/keep-multiplying-found-values-by-two/submissions/
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int f=1;
        while(f==1)
        {
            f=0;
            if(std::find(nums.begin(),nums.end(),original)!=nums.end())
            {
                original=original*2;
                f=1;
            }
        }
        return original;
    }
};