// Source : https://leetcode.com/problems/majority-element/submissions/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len=size(nums)/2;
        map<int,int>m;
        for(auto&i:nums)
        {
            m[i]+=1;
            if(m[i]>len){return i;}
        }
        return -1;
    }
};
