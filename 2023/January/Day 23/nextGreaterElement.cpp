// Source : https://leetcode.com/problems/next-greater-element-i/submissions/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        for(auto &i:nums1)
        {
            int f=-1;
            for(int j=0;j<size(nums2);j++)
            {
                if(nums2[j]==i)
                {
                    f=1;
                }
                if(f==1)
                {
                    if(nums2[j]>i)
                    {
                        f=2;
                        out.insert(out.end(),nums2[j]);
                        break;
                    }
                }
            }
            if(f!=2){out.insert(out.end(),-1);} 
        }
        return out;
    }
};