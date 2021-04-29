# Source  : https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/
class Solution:
    def countVowels(self,l):
        vowels = ['a','e','i','o','u']
        count =0
        for i in l:
            if(i.lower() in vowels):
                count = count+1
        return count

    def halvesAreAlike(self, s: str) -> bool:
        mid = int(len(s)/2)
        f,l = s[:mid],s[mid:]
        return self.countVowels(f)==self.countVowels(l)
