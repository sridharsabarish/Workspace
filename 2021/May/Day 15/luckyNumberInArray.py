# Source :https://leetcode.com/problems/find-lucky-integer-in-an-array/submissions/
class Solution(object):
    def findLucky(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """

        lucky = -1;

        for i in arr:
            if(arr.count(i)==i):
                lucky = max(lucky,i);
        return lucky
