# Source : https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/submissions/
class Solution(object):
    def minStartValue(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        f=0;
        start = 1;
        while(f==0):
            sums= nums[0]+ start;
            if(sums<1):
                start=start+1;
                continue
            for i in range(1,len(nums)):
                sums+=nums[i]
                if(sums<1):
                    start+=1;
                    f=0;
                    break
                elif(i==len(nums)-1):
                    f=1;
        return start
        
