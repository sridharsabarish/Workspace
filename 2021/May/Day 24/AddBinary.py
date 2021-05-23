# Source : https://leetcode.com/problems/add-binary/submissions/
class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        a=a[::-1]
        b=b[::-1]
        s="";
        c =0;

        l1 = len(a);
        l2 = len(b);
        for i in range(min(l1,l2)):

            val = int(int(a[i])+int(b[i])+c);
            s+=str(int(val%2));
            c = int(val/2);


        if l1<l2:

            for i in range(l1,l2):
                val = int(b[i])+c;
                s+=str(int(val%2));
                c=int(val/2);

        elif l2<l1:
            for i in range(l2,l1):
                val = int(a[i])+c;
                s+=str(int(val%2));
                c=int(val/2);
        if(c):
            s+=str(c);
        return s[::-1]
