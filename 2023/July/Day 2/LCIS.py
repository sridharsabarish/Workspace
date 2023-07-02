'''

Source : https://leetcode.com/problems/longest-continuous-increasing-subsequence/submissions/984289132/



'''

class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        start=0;
        end=start+1;
        maxs=1;
        while start<len(nums) and end<len(nums):

            if nums[end]>nums[end-1]:
                end=end+1
                temp = end-start
                if(maxs<temp):
                    maxs=temp;
            else:
                start=start+1;
                end=start+1;
        return maxs;
        