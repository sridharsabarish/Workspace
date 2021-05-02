# Soruce : https://leetcode.com/problems/count-the-number-of-consistent-strings/submissions/
class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:

        allowed_list = [i for i in allowed]
        count =0;
        for word in words:

            f=0
            for c in word:
                if c not in allowed_list:
                    f=1
                    break
            if(f==0):
                count = count +1
        return count
