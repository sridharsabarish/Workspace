// source :  https://leetcode.com/problems/minimize-product-sum-of-two-arrays/submissions/
class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {

        std::sort(nums1.begin(),nums1.end(),std::greater<>());
        std::sort(nums2.begin(),nums2.end());
        int sum=0;

        for(int i=0;i<size(nums1);i++)
        {
            sum+=nums1[i]*nums2[i];
        }
        return sum;
    }
};
