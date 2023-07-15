# source : https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/
class Solution:


    def isVowel(self, c) -> bool:
        c=c.lower()
        vowels=['a','e','i','o','u']
        if(c in vowels):
            #print("Found vowel in", c);
            return True;
        return False;


    def vowelStrings(self, words: List[str], left: int, right: int) -> int:

        count=0;
        for i in range(left,right+1):
            end=len(words[i])-1;
            #print(words[i]);
            if self.isVowel(words[i][0]) and self.isVowel(words[i][end]):
                count+=1
                #print("Adding to count");
        return count;
            