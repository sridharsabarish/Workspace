// Source : https://leetcode.com/problems/binary-search/submissions/
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int first=0;
        int last = size(nums)-1;
        int mid =(first+last)/2;
        if(nums[mid]==target){return mid;}
        while(first<=last)
        {
            mid = (first+last)/2;
            if(nums[mid]==target)
            {
                return mid;
            }

            else if(nums[mid]>target)
            {
                last = mid-1;
            }
            else
            {
                first = mid+1;
            }

        }
        return -1;

    }
};
