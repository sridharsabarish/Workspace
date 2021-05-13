# Source :https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/submissions/
class Solution:
    def generateTheString(self, n: int) -> str:

        f1 = n if n%2==1 else n-1
        f2 = n-f1
        strings =""
        for i in range(f1):
            strings = strings+str("a");
        if(f2):
            strings = strings +str("b")
        return str(strings)
