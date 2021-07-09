# Source  :https://leetcode.com/problems/is-subsequence/
class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        i1=0;
        i2=0;
        count =0;

        while(i1<len(s) and i2<len(t)):

            if(s[i1]==t[i2]):
                i1+=1;
            i2+=1;
        return i1==len(s)
