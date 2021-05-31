# Source : https://leetcode.com/problems/longest-uncommon-subsequence-i/submissions/
class Solution(object):
    def findLUSlength(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        s1 = self.getSubsequence(a);
        s2 = self.getSubsequence(b);

        return self.getMaxUncommon(s1,s2)

    def getSubsequence(self,a):
        s = [str(a[start:end+1]) for start in range(len(a)) for end in range(len(a))];
        return s

    def getMaxUncommon(self,s1,s2):
        count =0;
        for i in s1:
            if i not in s2:
                count = max(count,len(i));
        for i in s2:
            if i not in s1:
                count = max(count,len(i));
        if(count):
            return count;
        return -1;
