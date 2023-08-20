# Source : https://leetcode.com/problems/largest-3-same-digit-number-in-string/submissions/
class Solution:
    def largestGoodInteger(self, num: str) -> str:
        start=0;
        largestRepeatingDigit=-1;
        outputString=""
        while(start<=len(num)-3):
            end=start+3;
            if(len(set(num[start:end]))==1):
                if(int(num[start])>largestRepeatingDigit):
                    largestRepeatingDigit=int(num[start])
                    outputString=num[start:end]
            start=start+1;
        return outputString
