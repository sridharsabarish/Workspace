// Source : https://leetcode.com/problems/sum-of-digits-in-base-k/submissions/
class Solution(object):
    def sumBase(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        return(self.calculateNumInBase(n,k))

    def calculateNumInBase(self,n,k):
        digits=[];
        while(n):
            digits.append(int(n%k));
            n = int(n/k)
        return sum(digits)
