# Source : https://leetcode.com/problems/unique-number-of-occurrences/submissions/
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        occurences = [arr.count(i) for i in set(arr)]
        return len(occurences)==len(set(occurences))
