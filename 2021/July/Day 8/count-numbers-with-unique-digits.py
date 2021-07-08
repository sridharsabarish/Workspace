# Source : https://leetcode.com/problems/count-numbers-with-unique-digits
class Solution(object):
    def countNumbersWithUniqueDigits(self, n):
        """
        :type n: int
        :rtype: int
        """

        if(n==0):
            return 1
        totalNumber = pow(10,n);
        val = {}
        val[0] = 10;
        val[1] = 9*9;

        counter = 8;

        for i in range(2,n):
            val[i] = val[i-1]*counter;

            if(counter!=1):
                counter-=1;
        sums = 0;

        for i in range(n):
            sums += val[i];
        return sums
