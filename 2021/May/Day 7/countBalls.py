# Source :https://leetcode.com/problems/maximum-number-of-balls-in-a-box/submissions/
class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:

        s = {}


        for i in range(lowLimit,highLimit+1):
            position = self.findIndex(i)

            s[position]= s.get(position,0)+1;
        print(s.keys())
        s= dict(sorted(  s.items(),
                            key=operator.itemgetter(1),
                            reverse=True))
        l = list(s.keys());
        return(s[l[0]])
    def findIndex(self,i):
        c = 0;
        while(i):
            c = c+int(i%10);
            i = int(i/10);
        return c;
