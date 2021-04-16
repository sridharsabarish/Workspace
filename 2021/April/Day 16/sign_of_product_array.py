#Source : https://leetcode.com/problems/sign-of-the-product-of-an-array/submissions/
class Solution:
    def arraySign(self, nums: List[int]) -> int:

        if(0 in nums):
            return 0
        f=1;
        for i in nums:
            f = f*i
        if(f>0):
            return 1
        else:
            return -1
