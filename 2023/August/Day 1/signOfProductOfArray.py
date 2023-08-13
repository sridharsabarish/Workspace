# Source : https://leetcode.com/problems/sign-of-the-product-of-an-array/
class Solution:
    def arraySign(self, nums: List[int]) -> int:

        neg=0;
        zero=0;

        for i in nums:
            if i<0:
                neg=neg+1
            if i==0:
                zero=1;
                return 0;
        return 1 if (neg%2==0) else -1