// Source :  https://leetcode.com/problems/single-number/submissions/
// Lazy solution
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        for(auto&i:nums)
        {
            if(std::count(nums.begin(),nums.end(),i)==1){return i;}

        }
        return -1;
    }
};
