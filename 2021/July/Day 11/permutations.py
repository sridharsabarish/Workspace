# Source : https://leetcode.com/problems/permutations/submissions/
class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        l = [];
        p = permutations(nums)
        for j in list(p):
            l.append(j)
        return l
