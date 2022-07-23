// Source : https://leetcode.com/problems/single-number-iii/submissions/
// Solution Quality : Very bad. Need to improvise
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       vector<int> out;
        for(auto&i:nums)
       {
           if(std::count(nums.begin(),nums.end(),i)==1)
           {
               out.insert(out.end(),i);
           }
            if(size(out)==2){break;}

       }
        return out;
    }
};
