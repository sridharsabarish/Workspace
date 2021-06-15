# Source : https://leetcode.com/problems/reformat-the-string/submissions/
class Solution(object):
    def reformat(self, s):
        """
        :type s: str
        :rtype: str
        """
        strings =[];
        integers =[];


        for i in s:
            if i.isalpha():
                strings.append(i);
            if i.isdigit():
                integers.append(i)
        ls = len(strings)
        li = len(integers)
        if(abs(ls-li)>1):
            return "";
        ns =""
        i=0;
        if(ls>li):
            while(i<min(ls,li)):
                ns+=strings[i];
                ns+=integers[i];
                i+=1;
            ns+=strings[i]
        else:
            print(i,min(ls,li))
            while(i<min(ls,li)):
                ns+=integers[i];
                ns+=strings[i];

                i+=1;
            if(ls!=li):
                ns+=integers[i]
        return ns






        
