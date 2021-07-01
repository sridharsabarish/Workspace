# Source : https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/submissions/
class Solution(object):
    def isCovered(self, ranges, left, right):
        """
        :type ranges: List[List[int]]
        :type left: int
        :type right: int
        :rtype: bool
        """
        l=[]
        for r in ranges:
            for i in range(r[0],r[1]+1):
                l.append(i);

        for i in range(left,right+1):
            if i not in l:
                return False
        return True
