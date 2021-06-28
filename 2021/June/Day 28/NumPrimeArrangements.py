# Source : https://leetcode.com/problems/prime-arrangements/submissions/
class Solution(object):
    def numPrimeArrangements(self, n):
        """
        :type n: int
        :rtype: int
        """

        count =0;
        if(n<=1):
            return 1
        for i in range(2,n+1):
            count+=self.countPrimes(i);
        print(count);
        dicts ={}
        dicts[1]=1;
        dicts = self.factorial(n,dicts);
        print(dicts)

        out = 1;

        out = dicts[count]*dicts[n-count]
        return out%1000000007

    def countPrimes(self,i):
        s=0;
        for j in range(2,i):
            if(i%j==0):
                s+=1;
        if(s<1):
            return 1
        return 0;

    def factorial(self,n,dicts):
        for i in range(2,n+1):
            dicts[i] = dicts.get(i,dicts[i-1]*i);
        return dicts;


        
