# Source : https://leetcode.com/problems/longest-nice-substring/submissions/
class Solution(object):
    def longestNiceSubstring(self, s):
        """
        :type s: str
        :rtype: str
        """
        maxsubstring ="";

        substrings =[str(s[start:end+1]) for start in range(len(s)) for end in range(len(s)) if len(s[start:end])];

        for i in substrings:
            if(self.nice(i)):
                if(len(i)>len(maxsubstring)):
                    maxsubstring = i;
        return maxsubstring
    def nice(self,s):
        f=0;
        for i in s:
            if i.lower() in s and i.upper() in s:
                a=1;
            else:
                f=1;
                return False
        return True



        
