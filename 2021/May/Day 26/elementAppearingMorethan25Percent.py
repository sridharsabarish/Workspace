#https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/submissions/
class Solution(object):
    def findSpecialInteger(self, arr):
        """
        :type arr: List[int]
        :rtype: int

        """
        for i in set(arr):
            if(arr.count(i)>(0.25*len(arr))):
                return i;
