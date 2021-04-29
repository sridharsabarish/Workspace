# Source : https://leetcode.com/problems/truncate-sentence/submissions/
class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        l = s.split(' ');

        new_s = ""
        for i in range(k):
            new_s = new_s + l[i]
            if(i!=k-1):
                new_s = new_s + " "
        return new_s
