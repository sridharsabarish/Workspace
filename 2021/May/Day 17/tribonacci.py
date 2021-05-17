# Source :https://leetcode.com/problems/n-th-tribonacci-number/submissions/
class Solution:
    def tribonacci(self, n: int) -> int:
        i=2;

        l = [0,1,1]
        while(i<n+1):


            l.append(l[i]+l[i-1]+l[i-2])
            i = i+1
        return(l[n])
