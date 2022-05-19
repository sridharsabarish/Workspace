// Source : https://leetcode.com/problems/next-greater-element-i/submissions/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> out;

        for(auto &j:nums1)
        {
            int f=0;
            int start=0;
            for(int i=0;i<size(nums2);i++)
            {
                if(nums2[i]==j)
                {
                    f=1;
                }

                if(f==1 && nums2[i]>j)
                {
                    out.insert(out.end(),nums2[i]);
                    f=2;
                    break;
                }

            }
            if(f!=2)
            {
                out.insert(out.end(),-1);
            }

        }
        return out;
    }
};
