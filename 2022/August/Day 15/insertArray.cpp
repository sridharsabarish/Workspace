//Source:https://leetcode.com/problems/concatenation-of-array/submissions/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> out;
        for(int i=0;i<2;i++)for(auto&i:nums)out.insert(out.end(),i);
        return out;
    }
};
