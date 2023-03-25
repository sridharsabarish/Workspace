// Source : https://leetcode.com/problems/left-and-right-sum-differences/submissions/
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
    int rsum=0;
    int lsum=0;
        
    for(auto&i:nums)rsum+=i;
    vector<int> out;
    
    for(auto&i:nums)
    {
        int temp = abs(rsum-i-lsum);
        rsum-=i;
        lsum+=i;
        out.insert(out.end(),temp);
    }
        
        return out;
    }
};