# Source :https://leetcode.com/problems/sum-of-unique-elements/submissions/
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:


        unique = [i for i in nums if nums.count(i)==1]
        return(sum(unique))
