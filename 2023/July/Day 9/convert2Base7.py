# Source : https://leetcode.com/problems/base-7/submissions/989894854/
class Solution:
    def convertToBase7(self, num: int) -> str:
        out="";
        sign=num<0;
        num=abs(num);
        if(num==0):
            return "0"
        while(num):
            out+=str(num%7);
            num=int(num/7)
        out=out[::-1]
        if(sign):
            out='-'+out;
        return out