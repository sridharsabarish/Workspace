// Source : https://leetcode.com/problems/majority-element-ii/submissions/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(auto&i:nums)
        {
            m[i]+=1;
        }

        set<int> v;
        for(auto&i:nums)
        {
            if(m[i]>size(nums)/3)
            {
                v.insert(v.end(),i);
            }
        }

        vector<int>v2;
        for(auto&i:v)
        {
            v2.insert(v2.end(),i);
        }
        return v2;


    }
};
