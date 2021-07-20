# Source : https://leetcode.com/problems/maximum-number-of-words-you-can-type/submissions/
class Solution(object):
    def canBeTypedWords(self, text, brokenLetters):
        """
        :type text: str
        :type brokenLetters: str
        :rtype: int
        """


        count = 0;
        for elem in text.split():
            f=0
            for i in brokenLetters:
                if(i in elem):
                    f=1;
                    break
            if(f==0):
                count+=1;
        return count
