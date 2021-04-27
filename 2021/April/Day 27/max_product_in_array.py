# Source : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/submissions/
class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        nums = sorted(nums);
        l = len(nums)
        return ((nums[l-1]-1)*(nums[l-2]-1))
