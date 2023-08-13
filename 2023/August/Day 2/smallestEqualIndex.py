# Source : https://leetcode.com/problems/smallest-index-with-equal-value/
    def smallestEqual(self, nums: List[int]) -> int:

        return next((i for i in range(len(nums)) if (i%10==nums[i])), -1)