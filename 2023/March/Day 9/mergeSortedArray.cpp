// Source : https://leetcode.com/problems/merge-sorted-array/submissions/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c1=0;
        int c2=0;
        
        vector<int> out;
        
        
        while(c1<m && c2<n)
        {
            if(nums1[c1]<nums2[c2])
            {
                out.insert(out.end(),nums1[c1++]);     
            }
            
            else
            {
                out.insert(out.end(),nums2[c2++]);
            }
            
        }
        
        while(c1<m)
        {
            out.insert(out.end(),nums1[c1++]);
        }
        
                while(c2<n)
        {
            out.insert(out.end(),nums2[c2++]);
        }
        nums1=out;
    }
};