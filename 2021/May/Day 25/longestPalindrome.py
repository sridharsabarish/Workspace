# source ;https://leetcode.com/problems/longest-palindrome/submissions/
class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        f=0;
        dicts = {s.count(i):[] for i in list(set(s))};

        for i in list(set(s)):
            dicts[s.count(i)].append(str(i));

        count =0;
        mult =0;

        for i in dicts.keys():
            mult =i;
            if(i%2==1):
                f=1
                mult-=1;
            count+=len(set(dicts[i]))*mult;

        if(f==1):
            return count+1;
        return count;
