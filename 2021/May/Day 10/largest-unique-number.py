# Source :https://leetcode.com/problems/largest-unique-number/submissions/
class Solution(object):
    def largestUniqueNumber(self, A):
        """
        :type A: List[int]
        :rtype: int
        """

        B = sorted(set(A),reverse=True);
        print(B)
        for i in B:
            if(A.count(i)==1):
                return i
        return -1
