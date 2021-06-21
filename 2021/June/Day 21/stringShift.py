# source : https://leetcode.com/problems/perform-string-shifts/submissions/
class Solution(object):
    def stringShift(self, s, shift):
        """
        :type s: str
        :type shift: List[List[int]]
        :rtype: str
        """
        l=0;
        for x,y in shift:

            if(x==0):
                l-=y;
            else:
                l+=y;

        print(l)
        val = abs(l)%(len(s))
        if(l>0):
            # Right Shift
            s = s[-val:]+s[:-val]
        elif l<0:
            #left shift:
            s = s[val:]+s[:val]
            print(s)
        return s
