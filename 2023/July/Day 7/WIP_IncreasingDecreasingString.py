'''

Source : https://leetcode.com/problems/increasing-decreasing-string/
Status : Incomplete

Logic :

1. Pick smallest character from s and append to result
2. Pick next smallest 
3. Repeat until no more char picks
4. Pick Largest Character
5. Pick Largest character smaller than last
6. Repeat until no more.
7. Repat (1-6) until yo ucannot pick more characters.

'''


class Solution:
    def sortString(self, s: str) -> str:
        l=[]

        output=""
        while(len(s)):
            for i in s:
                l.append(i);
        
            s1=set(l);
            l1=list(s1);
            l1.sort()
           
            while(len(l1)>0):
                output+=l1[0]
                s=s.replace(l1[0], '', 1)
                l1.remove(l1[0]);
                l.remove(l[0]);
            print(s);

            s1=set(l);
            l1=list(s1);
            l1.sort()

            while(len(l1)>0):
                output+=l1[len(l1)-1]
                s=s.replace(l1[len(l1)-1], '', 1)
                l1.remove(l1[len(l1)-1]);
                l.remove(l[0]);
            print(s);

            
        return output;
            
            
