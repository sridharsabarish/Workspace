# Source : https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/submissions/
class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        count =1;

        for w in sentence.split():
            if(w[:len(searchWord)]==searchWord):
                return count;
            count+=1;
        return -1
