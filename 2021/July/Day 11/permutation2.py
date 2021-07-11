# Source : https://leetcode.com/problems/permutations-ii/submissions/
class Solution(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        l = [];
        p = permutations(nums)
        for j in list(set(p)):
            l.append(j)
        return l
        
