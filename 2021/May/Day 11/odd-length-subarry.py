# Source :https://leetcode.com/problems/sum-of-all-odd-length-subarrays/submissions/
class Solution(object):
    def sumOddLengthSubarrays(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        subarrays =[arr[i:j+1] for i in range(len(arr)) for j in range(len(arr)) if(j>=i)]
        sums =0
        for elem in subarrays:
            sums+= self.calculateOddSum(elem)
        return sums

    def calculateOddSum(self,arr):

        if(len(arr)%2==1):
            return sum(arr)
        else:
            return 0
