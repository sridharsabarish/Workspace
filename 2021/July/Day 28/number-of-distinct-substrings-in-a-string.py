# Source : https://leetcode.com/problems/number-of-distinct-substrings-in-a-string/submissions/
class Solution(object):
    def countDistinct(self, s):
        """
        :type s: str
        :rtype: int
        """
        out = [str(s[i:j+1]) for i in range(len(s)) for j in range(len(s)) if (len(s[i:j+1]))]

        return len(set(out))
