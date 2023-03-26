// Source : https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
// Solution Quality : Bad takes a lot of time
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> out;
        sort(nums.begin(),nums.end());
        
        if(size(nums)==2)
        {
            if(nums[0]==nums[1])
            {
                out.insert(out.end(),nums[0]);
            }
        }
        for(int i=1;i<size(nums)-1;i++)
        {
            if((nums[i]==nums[i+1])||(nums[i]==nums[i-1]))
            {
                if(std::find(out.begin(),out.end(),nums[i])==out.end())
                {
                
                    out.insert(out.end(),nums[i]);
                }
            }
        }
        return out;
    }
};