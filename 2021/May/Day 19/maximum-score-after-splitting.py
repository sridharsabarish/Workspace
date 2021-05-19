# Source ;https://leetcode.com/problems/maximum-score-after-splitting-a-string/submissions/
class Solution:
    def maxScore(self, s: str) -> int:
        out = [self.count1s(s[:i],'0')+self.count1s(s[i:],'1') for i in range(1,len(s))]
        return max(out)

    def count1s(self,s,val):

        count =0;
        for c in s:
            if(c==val):
                count+=1;
        return count;
