# Source :https://leetcode.com/problems/baseball-game/submissions/
class Solution(object):
    def calPoints(self, ops):
        """
        :type ops: List[str]
        :rtype: int
        """
        l = [];

        for i in ops:


            if(i!='+' and i.isalpha()!=1):
                l.append(int(i));

            elif(i=='C'):
                l.pop()

            elif(i=='D'):
                l.append(int(2*l[len(l)-1]) )
            elif(i=='+'):
                l.append(int(l[len(l)-1])+int(l[len(l)-2]))
        return sum(l)
