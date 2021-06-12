# source : https://leetcode.com/problems/complex-number-multiplication/submissions/
class Solution(object):
    def complexNumberMultiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        r1,c1 = self.splitc(num1);
        r2,c2 = self.splitc(num2);
        r3 = r1*r2 - (c1*c2);
        c3 = r1*c2+r2*c1;
        out = str(r3) + "+"+str(c3)+"i"
        return out
    def splitc(self,num1):
        plus1=0;
        r1=""
        c1=""

        for i in num1:
            if(i!='+' and not plus1):
                r1+=i
            elif(i=='+'):
                plus1=1;
            elif(plus1 and i!='i'):
                 c1+=i;
        return int(r1),int(c1);

            
