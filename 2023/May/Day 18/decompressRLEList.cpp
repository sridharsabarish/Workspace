// Source : https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> out;
        
        for(int i=0;i<size(nums);i+=2)
        {
            for(int j=0;j<nums[i];j++)
            {
                out.insert(out.end(),nums[i+1]);
            }
            
        }
        
        return out;
    }
};