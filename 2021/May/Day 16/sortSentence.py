# Source :https://leetcode.com/problems/sorting-the-sentence/submissions/
class Solution:
    def sortSentence(self, s: str) -> str:

        words = s.split();
        dicts ={}
        for i in words:
            end = len(i)-1
            dicts[i[end]] = i[:end]
        s2 =""

        for i in range(len(words)):
            s2+=dicts[str(i+1)]
            if(i!=len(words)-1):
                s2 +=" "
        return s2
