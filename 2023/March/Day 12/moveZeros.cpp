// Source : https://leetcode.com/problems/move-zeroes/submissions/
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    
    {
        int count=std::count(nums.begin(),nums.end(),0);
        
        nums.erase(
    std::remove(nums.begin(), nums.end(), 0),
    nums.end());
        
        for(int i=0;i<count;i++)nums.insert(nums.end(),0);
        
        
        
    }
    
    
    
};