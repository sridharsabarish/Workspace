# source : https://leetcode.com/problems/subsets/submissions/
class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        temp  = [];
        for i in range(len(nums)+1):

            out = list(combinations(nums, i));

            for elem in out:
                temp.append(list(elem));
        return(temp)
