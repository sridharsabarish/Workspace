# Source :https://leetcode.com/problems/split-a-string-in-balanced-strings/submissions/
class Solution:
    def balancedStringSplit(self, s: str) -> int:
        start =0
        end = 1;
        count =0;
        while(end!=len(s)):

            if( not self.checkBalanced(s[start:end])):
                end = end+1;
            else:
                start = end;
                end = end+1
                count=count+1;

        return count+1

    def checkBalanced(self,s):

        return s.count('L')==s.count('R')
