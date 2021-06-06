# source : https://leetcode.com/problems/arithmetic-subarrays/submissions/
class Solution(object):
    def checkArithmeticSubarrays(self, nums, l, r):
        """
        :type nums: List[int]
        :type l: List[int]
        :type r: List[int]
        :rtype: List[bool]
        """
        out =[];
        for i in range(len(l)):

            subarray=nums[l[i]:r[i]+1]
            out.append(self.isAp(sorted(subarray)))
        return out
    def isAp(self,nums):

        diff = nums[1]-nums[0];

        for i in range(2,len(nums)):

            if(nums[i]-nums[i-1]!=diff):
                return False
        return True;
