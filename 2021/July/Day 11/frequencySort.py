# Source : https://leetcode.com/problems/sort-characters-by-frequency/submissions/
class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """

        dicts = {}

        for i in s:
            dicts[i] = dicts.get(i,0)+1;

        s = sorted(dicts.items(), key=lambda item: item[1],reverse=True)
        out ="";

        for i in range(len(s)):
            for j in range(s[i][1]):
                out+=s[i][0];
        return out
