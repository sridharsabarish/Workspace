# source : https://leetcode.com/problems/encode-number/submissions/
class Solution(object):
    def encode(self, num):
        """
        :type num: int
        :rtype: str
        """
        if(num==0):
            return "";
        return self.binary(num+1)
    def binary(self,n):
        strs =""
        while(n):
            digit = int(n%2);
            strs+= str(digit)
            n = int(n/2)
        strs = strs[::-1]
        return strs[1:];

        
