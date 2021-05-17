// Source :https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {

        vector<int> full;
        for(int i=0;i<size(nums);i+=2)
        {
            full.insert(full.end(), nums[i], nums[i+1]);
        }
        return full;
    }
};
