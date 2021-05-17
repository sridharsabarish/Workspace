// Source :https://leetcode.com/problems/create-target-array-in-the-given-order/submissions/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

       vector<int> out;

        for(int i=0;i<size(nums);i++)
        {
            out.insert(out.begin()+index[i],nums[i]);
        }
    return out;
    }
};
