# Source : https://leetcode.com/problems/concatenation-of-array/submissions/
class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l = len(nums)
        for i in range(l):
            nums.append(nums[i])
        return nums
