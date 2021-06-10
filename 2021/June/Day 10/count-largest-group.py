# Source : https://leetcode.com/problems/count-largest-group/submissions/
class Solution(object):
    def countLargestGroup(self, n):
        """
        :type n: int
        :rtype: int
        """

        dicts = {};

        for i in range(1,n+1):
            dicts[self.sumDigits(i)] = dicts.get(self.sumDigits(i),0);
            dicts[self.sumDigits(i)]+=1

        l = (dicts.values());
        count = 0;
        for i in l:
            if(i==max(l)):
                count+=1;
        return count

    def sumDigits(self,n):
        sums = 0;
        while(n):
            sums+=int(n%10);
            n = int(n/10);
        return sums;
        
