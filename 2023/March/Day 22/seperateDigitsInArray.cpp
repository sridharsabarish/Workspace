// Source : https://leetcode.com/problems/separate-the-digits-in-an-array/submissions/
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> out;
        
        for(auto&i:nums)
        {
            vector<int> temp;
            while(i)
            {
                temp.insert(temp.begin(),i%10);
                i/=10;
            }
            
            for(auto&i:temp)
            {
                out.insert(out.end(),i);
            }
        }
        
        return out;
    }
};