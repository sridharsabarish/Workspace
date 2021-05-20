# Source : https://leetcode.com/problems/string-matching-in-an-array/submissions/
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        return(list(set([str(j) for i in words for j in words if(i!=j) and (j in i)])))
