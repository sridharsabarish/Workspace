# Source :https://leetcode.com/problems/height-checker/submissions/
class Solution(object):
    def heightChecker(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """

        copy = sorted(heights)

        count =0;
        for i in range(len(heights)):
            if heights[i]!=copy[i]:
                count+=1
        return count
