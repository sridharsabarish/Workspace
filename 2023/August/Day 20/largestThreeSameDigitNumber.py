# Source : https://leetcode.com/problems/largest-3-same-digit-number-in-string/submissions/
class Solution:
    def largestGoodInteger(self, num: str) -> str:
        start=0;
        end=start+3;
        maxDig=-1;
        sub=""
        while(start<=len(num)-3):
            if(len(set(num[start:end]))==1):
                if(int(num[start])>maxDig):
                    maxDig=int(num[start])
                    sub=num[start:end]
            start=start+1;
            end=start+3;
        return sub
