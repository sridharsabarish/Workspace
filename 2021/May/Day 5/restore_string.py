# Soruce : https://leetcode.com/problems/shuffle-string/submissions/
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:

        dicts = {};

        for i in range(len(indices)):
            dicts[indices[i]] = s[i];

        new_str=""
        for i in range(len(indices)):
            new_str = new_str+dicts[i];
        return new_str
