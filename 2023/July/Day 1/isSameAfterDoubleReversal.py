# Source : https://leetcode.com/problems/a-number-after-a-double-reversal/submissions/983516448/
class Solution:

    def reversal(self,copy:int)-> int:
        out=0;
        while copy!=0:
            out=out*10 + copy%10;
            copy=int(copy/10)
        return out;
        

    def isSameAfterReversals(self, num: int) -> bool:
        copy=num;
        print("1: " + str(copy));
        copy=self.reversal(copy);
        print("2: " + str(copy));
        copy=self.reversal(copy);
        print("3: " + str(copy));
        return copy==num; 