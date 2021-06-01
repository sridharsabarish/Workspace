# source : https://leetcode.com/problems/next-greater-element-i/submissions/
class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        out =[];

        for i in range(len(nums1)):
            for j in range(len(nums2)):
                if(nums1[i]==nums2[j]):
                    checkMat  = nums2[j:];
                    mins = 9999999999;
                    for elem in checkMat:
                        if(elem>nums1[i]):
                            mins = elem
                            out.append(elem);
                            break;
                    if(mins==9999999999):
                        out.append(-1);
        return out
