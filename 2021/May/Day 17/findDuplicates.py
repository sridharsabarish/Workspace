# Source :https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        l =[]
        if(len(nums)==len(set(nums))):
            return l;
        nums=sorted(nums)

        prev = nums[0]
        for i in range(1,len(nums)):
            if(prev ==nums[i]):
                l.append(prev)
            prev = nums[i]
        return l
