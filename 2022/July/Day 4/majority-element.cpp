// Source : https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int,int> m;
        for(auto&i:nums)
        {
            m[i]+=1;
            if(m[i]>size(nums)/2)
            {
                return i;
            }
        }
        return -1;


    }
};
