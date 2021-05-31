# Source : https://leetcode.com/problems/number-of-segments-in-a-string/submissions/
class Solution(object):
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        out = s.split(' ');
        count = 0;
        for i in out:
            if i=="":
                continue
            count+=1;
        return count
