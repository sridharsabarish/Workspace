#source :https://leetcode.com/problems/count-of-matches-in-tournament/submissions/
class Solution:
    def numberOfMatches(self, n: int) -> int:

        count =0;

        val = n;


        while(val>1):
            if(val%2==0):
                count = count + int(val/2);
                val=int(val/2)
            else:
                count = count + int((val-1)/2)
                val = int(((val-1)/2) +1)
        return count
