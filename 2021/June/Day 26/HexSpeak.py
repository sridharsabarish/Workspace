# source : https://leetcode.com/problems/hexspeak/submissions/
class Solution(object):
    def toHexspeak(self, num):
        """
        :type num: str
        :rtype: str
        """

        strs ="";

        lists = ["A","B","C","D","E","F"]
        num = int(num)
        while(num):
            val =int(num%16)
            if(val<10):
                if(val<=1):
                    if(not val):
                        strs+="O";
                    else:
                        strs+="I"
                else:
                    return "ERROR";
            else:
                strs+=lists[val-10];
            num = int(num/16)
        return(strs[::-1])
