// Source : https://leetcode.com/problems/intersection-of-two-arrays/submissions/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> out;

        for(auto&i:nums1)
        {
            if(std::find(nums2.begin(),nums2.end(),i)!=nums2.end())
            {
                if(std::find(out.begin(),out.end(),i)==out.end())
                {
                out.insert(out.end(),i);
                 }
            }
        }
        return out;
    }
};
