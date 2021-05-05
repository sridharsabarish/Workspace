# Source : https://leetcode.com/problems/check-if-the-sentence-is-pangram/submissions/
class Solution:
    def checkIfPangram(self, sentence: str) -> bool:

        l =[]
        for i in sentence:
            if(i.isalpha()):
                l.append(i)

        return len(set(l))==26
