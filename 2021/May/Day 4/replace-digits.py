# Source : https://leetcode.com/problems/replace-all-digits-with-characters/submissions/
class Solution:
    def replaceDigits(self, s: str) -> str:
        prev =""

        new = ""
        for c in s:
            if(c.isalpha()):
                new = new +c;
            elif c.isdigit():
                new = new + chr(ord(prev)+int(c))

            prev = c;
        return new
