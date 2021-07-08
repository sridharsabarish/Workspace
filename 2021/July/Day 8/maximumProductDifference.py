# Source : https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
class Solution(object):
    def maxProductDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = sorted(nums)
        l = len(nums)
        return ((nums[l-1]*nums[l-2])-(nums[0]*nums[1]))
