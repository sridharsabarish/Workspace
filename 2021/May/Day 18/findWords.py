# Source : https://leetcode.com/problems/keyboard-row/submissions/
class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        r=["qwertyuiop","asdfghjkl","zxcvbnm"]

        l=[]
        for w in words:
            f=1;
            prev =-1
            for c in w:

                for i in range(0,3):

                    if(c in r[i]):

                        if(prev==-1):
                            prev =i;
                        else:
                            if(prev!=i):
                                f=0;
                                break;
                if f==0:
                    continue
            if f==1:
                l.append(w);
        return l;
