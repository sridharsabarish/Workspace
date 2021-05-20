# Source : https://leetcode.com/problems/base-7/submissions/
class Solution(object):
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        if(num==0):
            return "0";
        s= "";

        if(num<0):
            sign ="-"
        else:
            sign = "";
        num = abs(num);

        while(num):
            s+=str(int(num)%7);
            num = int(num/7);
        s+=sign;
        return s[::-1]
