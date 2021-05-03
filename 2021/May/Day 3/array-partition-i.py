# Source : https://leetcode.com/problems/array-partition-i/submissions/
class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums = sorted(nums)

        sums = 0;
        i=0
        while i<len(nums):
            #print(i,i+1)
            sums = sums + min(nums[i],nums[i+1])

            i = i+2
        return sums
        
