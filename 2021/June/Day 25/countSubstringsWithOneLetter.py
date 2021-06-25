# Source : https://leetcode.com/problems/count-substrings-with-only-one-distinct-letter/submissions/
class Solution(object):
    def countLetters(self, s):
        """
        :type s: str
        :rtype: int
        """

        sums = 0;
        start =0;
        end =0;

        prev = s[0];

        count =0;
        add=-1;

        for i in s:
            if(i==prev):
                add =-1;
                count+=1;
            else:
                sums+=self.calc(count);
                add =1;
                count=1;
                prev = i;
        if(add==-1):
            sums+=self.calc(count)
            return sums
        return sums+1

    def calc(self,length):

        return length*(length+1)/2
