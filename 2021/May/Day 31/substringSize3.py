# source : https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/submissions/
class Solution(object):
    def countGoodSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        out =[str(s[start:start+3]) for start in range(len(s)-2)]
        count =0;
        for i in out:
            if(len(set(i))==3):
                count+=1;
        return count;
