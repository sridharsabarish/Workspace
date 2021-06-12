# source : https://leetcode.com/problems/maximum-average-subarray-i/submissions/
class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        maxx = float('-inf');
        f=-1;
        sums = 0.0;
        for i in range(len(nums)-k+1):
            if(f==-1):
                for j in nums[i:i+k]:
                    sums+=j;
                f=1;
            else:
                sums=sums-nums[i-1]+nums[i+k-1];
            average = sums;
            if(average>maxx):
                maxx = average
        return maxx/(k)
