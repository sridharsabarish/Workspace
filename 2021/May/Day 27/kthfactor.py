# Source : https://leetcode.com/problems/the-kth-factor-of-n/submissions/
class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        factor = [i for i in range(1,n+1) if n%i==0]
        if(len(factor)>=k):
            return factor[k-1]
        return -1
