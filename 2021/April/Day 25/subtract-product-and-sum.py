# source : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/
class Solution(object):

    def getDigitsList(self,n):

        digits = []
        while(n):
            digits.append(n%10);
            n = int(n/10)
        return digits

    def getProduct(self,l):
        f = 1;

        for i in l:
            f = f*i
        return f

    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """

        l = self.getDigitsList(n)
        p = self.getProduct(l)
        s = sum(l)
        return p-s
