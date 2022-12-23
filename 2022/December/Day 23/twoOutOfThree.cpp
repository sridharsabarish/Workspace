// Source : https://leetcode.com/problems/two-out-of-three/submissions/
// Modular Programming.
class Solution {
public:

    bool check_present(vector<int> nums,int i)
    {
        return std::find(nums.begin(),nums.end(),i)!=nums.end();
    }

    set<int> addToSet(vector<int> nums1, vector<int> nums2, vector<int> nums3,set<int> s)
    {
        for(auto&i:nums1)
        {
            if(check_present(nums2,i))
            {
                s.insert(i);
            }
            else if (check_present(nums3,i))
            {
                s.insert(i);
            }
        }
        return s;
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> s;

        s = addToSet(nums1,nums2,nums3,s);
        s = addToSet(nums2,nums3,nums1,s);
        s = addToSet(nums3,nums1,nums2,s);

        vector<int> out;
        for(auto&i:s)out.insert(out.end(),i);
        return out;
    }
};
