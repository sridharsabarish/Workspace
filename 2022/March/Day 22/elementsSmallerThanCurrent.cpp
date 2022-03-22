// Source : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        int count =0;
        vector<int> out;
        for(auto&i:nums)
        {count=0;
            for(auto&j:nums)
            {
              if(j<i){count++;}
            }
         out.insert(out.end(),count);

        }
        return out;
    }
};
