# Source :  https://leetcode.com/problems/find-and-replace-pattern/submissions/
class Solution(object):
    def findAndReplacePattern(self, words, pattern):
        """
        :type words: List[str]
        :type pattern: str
        :rtype: List[str]
        """


        lists =[];
        for w in words:

            if(len(set(w))!=len(set(pattern))):
                continue
            dicts={};
            f=0;
            for c in range(len(w)):
                temp = dicts.get(w[c],[]);

                if(temp==[]):
                    dicts[w[c]] = pattern[c]
                else:

                    if(temp!=pattern[c]):
                        f=1;
                        break;

            if(f==0):
                lists.append(w);
        return lists;
