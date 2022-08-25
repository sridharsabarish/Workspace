// Source : https://leetcode.com/problems/merge-sorted-array/submissions/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i=m;i<size(nums1);i++)
        {
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(),nums1.end());



    }
};
