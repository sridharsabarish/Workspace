# Source : https://leetcode.com/problems/search-insert-position/submissions/
class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """


        first =0;
        last = len(nums)
        if(target>nums[last-1]):
            return last
        mid = int((first+last)/2)
        while(mid!=-1 and mid!=len(nums)):
            print(mid)
            mid = int((first+last)/2);
            if(nums[mid]==target):
                return mid;
            elif(nums[mid]<target and nums[mid+1]>target):
                return mid+1
            elif(nums[mid]>target):
                last = mid-1;
            elif(nums[mid]<target):
                first = mid+1;
        return 0
