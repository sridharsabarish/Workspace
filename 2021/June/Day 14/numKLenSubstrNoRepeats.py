# source : https://leetcode.com/problems/find-k-length-substrings-with-no-repeated-characters/submissions/
class Solution(object):
    def numKLenSubstrNoRepeats(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        count=0;
        for i in range(len(s)-k+1):

            count+=self.isValid(s[i:i+k]);
        return count

    def isValid(self,s):
        if len(s)==len(set(s)):
            print(s)
            return 1
        return 0
        
