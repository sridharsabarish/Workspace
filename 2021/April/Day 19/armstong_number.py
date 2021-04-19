#Source : https://leetcode.com/problems/armstrong-number/

class Solution(object):
    def isArmstrong(self, n):
        """
        :type n: int
        :rtype: bool
        """

        n_copy =n
        n_digits =0;
        digits =[]
        while(n_copy):
            n_digits = n_digits+1;
            digits.append(n_copy %10)
            n_copy = int(n_copy/10)

        sums = 0;
        for d in digits:
            sums += pow(d,n_digits);
            if(sums>n):
                return False

        if(sums==n):
            return True
        else:
            return False
