class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for elem in set(nums):
            if(nums.count(elem)==1):
                return elem
        return -1
