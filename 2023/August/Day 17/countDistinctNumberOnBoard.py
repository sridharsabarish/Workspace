'''
Source : https://leetcode.com/problems/count-distinct-numbers-on-board/submissions/
Given : Positive Integer n
for each x, find all numbers such that x%i==1;
'''
class Solution:
    def distinctIntegers(self, n: int) -> int:
        l=set();
        l.add(n);
        while(True):
            newFlag=0
            tmp=set()
            for element in l:
                print(element)
                for i in range(1,element):
                    if(element%i==1) and i not in l:
                        newFlag=1;
                        tmp.add(i)
            if(tmp==[]):
                return len(l)
            else:
                for elem in tmp:
                    l.add(elem)
            print(l)
            if(newFlag==0):
                break
        return len(l)