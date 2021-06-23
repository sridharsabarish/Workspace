# source : https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/submissions/
class Solution(object):
    def getNoZeroIntegers(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        goodList =[i for i in range(1,n) if self.checkZero(i)];
        for i in goodList:
            if(n-i in goodList):
                return [i,n-i]

    def checkZero(self,i):
        while(i):
            if(int(i%10)==0):
                return False
            i = int(i/10);
        return True
