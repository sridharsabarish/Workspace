// Source : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> out;
        int count=0;
        for(int i=0;i<size(nums);i++)
        {
            count=0;
            for(int j=0;j<size(nums);j++)
            {
                if(i!=j)
                {
                    if(nums[j]<nums[i]){count++;}
                }
            }
            out.insert(out.end(),count);
            
        }
        
        return out;
        
    }
};