# Source : https://leetcode.com/problems/rearrange-spaces-between-words/submissions/
class Solution(object):
    def reorderSpaces(self, text):
        """
        :type text: str
        :rtype: str
        """
        count=0;
        for i in text:
            if i==' ':
                count+=1;
        word = text.split()
        even = 0;
        if(len(word)>1):
            even = int(count/(len(word)-1))
        remainder = count;
        if(len(word)>1):
            remainder = int(count%(len(word)-1))

        string =""
        string+=word[0]
        for i in range(1,len(word)):
            string+=" "*even;
            string+=word[i];
        string+=" "*remainder;
        return string
