# source : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/submissions/
class Solution(object):
    def countCharacters(self, words, chars):
        """
        :type words: List[str]
        :type chars: str
        :rtype: int
        """
        count =0;

        for i in words:
            f=0;
            for c in i:
                if(self.checkOccurence(c,i)>self.checkOccurence(c,chars)):
                    f=1;
                    break;
            if(f==0):
                count+=len(i);

        return count;

    def checkOccurence(self,elem,word):

        return word.count(elem);
