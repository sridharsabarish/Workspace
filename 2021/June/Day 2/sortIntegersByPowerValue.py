# source : https://leetcode.com/problems/sort-integers-by-the-power-value/submissions/
class Solution(object):
    def getKth(self, lo, hi, k):
        """
        :type lo: int
        :type hi: int
        :type k: int
        :rtype: int
        """
        dicts = {};

        for i in range(lo,hi+1):
            dicts[i] = self.getPower(i);

        out = sorted(dicts.items(), key =
             lambda kv:(kv[1], kv[0]))
        return out[k-1][0]

    def getPower(self,i):
        count=0;
        while(i!=1):
            if(i%2==0):
                i/=2;
            else:
                i = 3*i +1;
            count+=1;
        return count;
        
