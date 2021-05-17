# Source :https://leetcode.com/problems/number-of-days-in-a-month/submissions/
class Solution:
    def numberOfDays(self, Y: int, M: int) -> int:


        if(M==2):
            if(Y%4==0 and Y%400 not in [100,200,300]):
                return 29
            return 28
        if(M in [4,6,9,11]):
            return 30
        else :
            return 31
