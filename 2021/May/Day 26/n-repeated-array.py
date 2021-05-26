# Source ; https://leetcode.com/problems/n-repeated-element-in-size-2n-array/submissions/
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:

        v =[];
        for i in nums:
            if( i in v):
                return i;
            v.append(i)
