# Source : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:

        elementSum=0;
        sumOfDigits=0;

        for i in nums:
            elementSum+=i;
            while i:
                sumOfDigits+=i%10;
                i=int(i/10);
        return abs(elementSum-sumOfDigits);