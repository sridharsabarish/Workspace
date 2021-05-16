# Siyrce Lhttps://leetcode.com/problems/merge-strings-alternately/submissions/
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:

        l1 = len(word1)
        l2 = len(word2)

        ns =""
        for i in range(min(l1,l2)):
            ns+=word1[i];
            ns+=word2[i];
        if(l1<l2):
            ns+=word2[l1:l2];
        elif(l2<l1):
            ns+=word1[l2:l1];
        return ns
