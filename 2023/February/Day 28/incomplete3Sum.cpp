// Incomplete : needs more work
// Source : https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        vector<vector<int>> v;
        for(int i=0;i<size(nums);i++)
            for(int j=0;j<size(nums);j++)
                for(int k=0;k<size(nums);k++)
                {
                    if((i!=j) && (j!=k) && (k!=i))
                    {
                        if(nums[i]+nums[j]+nums[k]==0)
                        {
                            vector<int> temp;
                            temp.insert(temp.end(),nums[i]);
                            temp.insert(temp.end(),nums[j]);
                            temp.insert(temp.end(),nums[k]);
                            v.insert(v.end(),temp);
                        }
                        
                    }
                }
        vector<vector<int>> out;
        
        for(auto &i:v)
        {
            out.insert(out.end(),i);
        }
        return out;
    }
};