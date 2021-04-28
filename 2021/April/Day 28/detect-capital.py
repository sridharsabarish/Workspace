# source : https://leetcode.com/problems/detect-capital/submissions/
class Solution:
    def detectCapitalUse(self, word: str) -> bool:

        capcount =0;

        firstCap = ord(word[0])>64 and ord(word[0])<97
        if(firstCap):
            capcount =1;
        for i in range(1,len(word)):

            if ord(word[i])>64 and ord(word[i])<97:
                capcount = capcount = capcount+1

        if(capcount == len(word)) or (capcount==0) or (capcount==1 and firstCap):
            return True
        else:
            return False
