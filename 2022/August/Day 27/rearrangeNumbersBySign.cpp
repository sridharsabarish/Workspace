// Source : https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> pos;
        vector<int> neg;
        for(auto&i:nums)
        {
            if(i<0){neg.insert(neg.end(),i);}
            else{pos.insert(pos.end(),i);}
        }
        nums.clear();
        for(int i=0;i<size(pos);i++)
        {
            nums.insert(nums.end(),pos[i]);
            nums.insert(nums.end(),neg[i]);

        }
        return nums;

    }
};
