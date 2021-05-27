# Source ; https://leetcode.com/problems/single-number-iii/
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        out =[];
        for i in set(nums):
            if(nums.count(i)==1):
                out.append(i);
        return out;
