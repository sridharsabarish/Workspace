# Source: https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/
class Solution:
    def maximumValue(self, strs: List[str]) -> int:
        maxval=0
        for elem in strs:
            f=0;
            elemval=0
            for c in elem:
                if(c.isalpha()):
                    f=1;
                    break;
            if f==1:
                elemval=len(elem);
            else:
                elemval=int(elem)
            if elemval>maxval:
                maxval=elemval
        return maxval;
            