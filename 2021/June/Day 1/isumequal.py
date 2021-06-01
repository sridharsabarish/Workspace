# source : https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/submissions/
class Solution(object):
    def isSumEqual(self, firstWord, secondWord, targetWord):
        """
        :type firstWord: str
        :type secondWord: str
        :type targetWord: str
        :rtype: bool
        """
        w1 ="";
        w2 ="";
        w3 = "";
        for i in firstWord:
            w1+=str(ord(i)-97);
        for i in secondWord:
            w2+=str(ord(i)-97);
        for i in targetWord:
            w3+=str(ord(i)-97)
        return int(w1)+int(w2)==int(w3)
