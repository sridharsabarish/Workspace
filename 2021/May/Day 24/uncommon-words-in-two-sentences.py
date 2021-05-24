# source ; https://leetcode.com/problems/uncommon-words-from-two-sentences/submissions/
class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: List[str]
        """
        w1 = s1.split()
        w2 = s2.split()

        out =[]
        for w in w1:
            if( w not in w2 and w1.count(w)==1):
                out.append(w);
        for w in w2:
            if(w not in w1 and w2.count(w)==1):
                out.append(w);
        return out;
