// Source : https://leetcode.com/problems/shuffle-the-array/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> temp;
        for(int i=0;i<n;i++)
        {
            temp.insert(temp.end(),nums[i]);
            temp.insert(temp.end(),nums[i+n]);
        }
        return temp;
    }
};
