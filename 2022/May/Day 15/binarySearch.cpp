// Source : https://leetcode.com/problems/binary-search/submissions/
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int first=0;
        if(size(nums)==1)
        {
            if(nums[0]!=target){return -1;}
        }
        int last =size(nums);
        int mid = (first+last)/2;

        if(nums[mid]==target){return mid;}


        while(first<=last)
        {
            mid = (first+last)/2;
            if(nums[mid]==target){return mid;}
            else if(nums[mid]>target){last=mid-1;}
            else if(nums[mid]<target) {first=mid+1;}
        }

        return -1;


    }
};
