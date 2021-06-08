# Source : https://leetcode.com/problems/intersection-of-two-arrays/submissions/
class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        return set([i for i in nums1 if i in nums2])
