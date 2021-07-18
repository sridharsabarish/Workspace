# source : https://leetcode.com/problems/count-square-sum-triples/submissions/
class Solution(object):
    def countTriples(self, n):
        """
        :type n: int
        :rtype: int
        """
        count =0
        for i in range(1,n):
            for j in range(1,n+1):
                val = sqrt(pow(i,2)+pow(j,2))

                if(val==int(val) and val<=n):
                    count+=1;
        return count
