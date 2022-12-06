// Source : https://leetcode.com/problems/shuffle-the-array/submissions/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> out;
        int mid = size(nums)/2;
        for(int i=0;i<mid;i++)
        {
            out.insert(out.end(),nums[i]);
            out.insert(out.end(),nums[mid+i]);

        }
        return out;
    }
};
