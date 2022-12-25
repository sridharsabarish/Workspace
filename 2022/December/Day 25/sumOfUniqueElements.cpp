// Source : https://leetcode.com/problems/sum-of-unique-elements/submissions/
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        int sum=0;
        for(auto&i:nums)m[i]+=1;
        for(auto&i:nums)
        {
            if(m[i]==1){sum+=i;}
        }
        return sum;
    }
};
