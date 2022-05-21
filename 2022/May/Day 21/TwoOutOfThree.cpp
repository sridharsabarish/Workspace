// Source : https://leetcode.com/problems/two-out-of-three/submissions/
class Solution {
public:

    bool checkPresent(vector<int> v, int val)
    {
        return std::find(v.begin(),v.end(),val)!=v.end();
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {


        set<int> dist;
        vector<int> out;

        for(auto&i:nums1)
        {
            if(checkPresent(nums2,i) || checkPresent(nums3,i))
            {
                dist.insert(dist.end(),i);
            }

        }


        for(auto&i:nums2)
        {
            if(checkPresent(nums1,i) || checkPresent(nums3,i))
            {
                dist.insert(dist.end(),i);
            }

        }

        for(auto&i:dist)
        {
            out.insert(out.end(),i);
        }

        return out;



    }
};
