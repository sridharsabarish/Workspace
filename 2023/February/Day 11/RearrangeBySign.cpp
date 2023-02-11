// Source : https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(auto&i:nums)
        {
            if(i<0)neg.insert(neg.end(),i);
            else pos.insert(pos.end(),i);
        }
        
        vector<int> out;
        for(int i=0;i<size(pos);i++)
        {
            out.insert(out.end(),pos[i]);
            out.insert(out.end(),neg[i]);
        }
        return out;
    }
};