# Source :https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/submissions/
class Solution:
    def sumZero(self, n: int) -> List[int]:
        zero =0;
        if(n%2==1):
            zero=1;
        lists =[]
        for i in range(1,int(n/2)+1):
            lists.append(-i);
            lists.append(i);
        if(zero):
            lists.append(0);
        return sorted(lists)
